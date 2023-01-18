/* Copyright 2022 Sipeed Technology Co., Ltd. All Rights Reserved.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "stdlib.h"
#include "stdint.h"
#include "math.h"
#include "tm_port.h"

#include "arm_mve.h"
//ARM MVEI instruction acceleration
//https://developer.arm.com/architectures/instruction-sets/intrinsics/
//Not Tested!!!

#if TM_MDL_TYPE==TM_MDL_INT8
#define PARALLEL_CNT 16
TM_INLINE void tm_dot_prod(mtype_t* sptr, mtype_t* kptr,uint32_t size, sumtype_t* result)
{
    uint32_t  cnt;           
    int8x16_t vecA;
    int8x16_t vecB;
    sumtype_t sum = 0;
    cnt = size/PARALLEL_CNT;
    while (cnt > 0) {
        vecA = vld1q_s8(sptr);
        vecB = vld1q_s8(kptr);
        sum = vmladavaq(sum, vecA, vecB);
        cnt--; sptr += PARALLEL_CNT; kptr += PARALLEL_CNT;
    }
    cnt = size%PARALLEL_CNT;
    if (cnt > 0U) {
        mve_pred16_t p0 = vctp8q(cnt);
        vecA = vld1q_s8(sptr);
        vecB = vld1q_s8(kptr);
        sum = vmladavaq_p(sum, vecA, vecB, p0);
    }
    *result = sum;
    return;
}

TM_INLINE  void tm_dot_prod_pack2(mtype_t* sptr, mtype_t* kptr, uint32_t size, sumtype_t* result)
{ 
    uint32_t cnt;                       
    sumtype_t sum0 = 0;  
    sumtype_t sum1 = 0;           
    mtype_t* kptr0 = kptr;
    mtype_t* kptr1 = kptr+size;                                
    cnt = size/PARALLEL_CNT;

    uint32_t  cnt;           
    int8x16_t vecA;
    int8x16_t vecB;
    int8x16_t vecC;
    sumtype_t sum0 = 0;  
    sumtype_t sum1 = 0;           
    mtype_t* kptr0 = kptr;
    mtype_t* kptr1 = kptr+size;  
    cnt = size/PARALLEL_CNT;
    while (cnt > 0) {
        vecA = vld1q_s8(sptr);
        vecB = vld1q_s8(kptr0);
        vecC = vld1q_s8(kptr1);
        sum0 = vmladavaq(sum0, vecA, vecB);
        sum1 = vmladavaq(sum1, vecA, vecC);
        cnt--; sptr += PARALLEL_CNT; kptr0 += PARALLEL_CNT; kptr1 += PARALLEL_CNT;
    }
    cnt = size%PARALLEL_CNT;
    if (cnt > 0U) {
        mve_pred16_t p0 = vctp8q(cnt);
        vecA = vld1q_s8(sptr);
        vecB = vld1q_s8(kptr0);
        vecC = vld1q_s8(kptr1);
        sum0 = vmladavaq_p(sum0, vecA, vecB, p0);
        sum1 = vmladavaq_p(sum0, vecA, vecC, p0);
    }

    result[0] = sum0;
    result[1] = sum1;
    return;
}

TM_INLINE void tm_dot_prod_gap_3x3x1(mtype_t* sptr, mtype_t* kptr, uint32_t* k_oft, sumtype_t* result)
{
    *result = sptr[k_oft[0]]*kptr[0] + sptr[k_oft[1]]*kptr[1] + sptr[k_oft[2]]*kptr[2] + \
        sptr[k_oft[3]]*kptr[3] + sptr[k_oft[4]]*kptr[4] + sptr[k_oft[5]]*kptr[5] + \
        sptr[k_oft[6]]*kptr[6] + sptr[k_oft[7]]*kptr[7] + sptr[k_oft[8]]*kptr[8] ;
    return;                  
}

TM_INLINE void tm_dot_prod_3x3x1(mtype_t* sptr, mtype_t* kptr, sumtype_t* result)
{
    *result = sptr[0]*kptr[0] + sptr[1]*kptr[1] + sptr[2]*kptr[2] + \
        sptr[3]*kptr[3] + sptr[4]*kptr[4] + sptr[5]*kptr[5] + \
        sptr[6]*kptr[6] + sptr[7]*kptr[7] + sptr[8]*kptr[8] ;
    return;
}

#else
    #error "TODO"
#endif

#if (TM_MDL_TYPE==TM_MDL_FP32) || (TM_MDL_TYPE==TM_MDL_FP16) 

TM_INLINE void tm_postprocess_sum(int n, sumtype_t* sums, btype_t* bs, int act, mtype_t* outp, \
    sctype_t* scales, sctype_t out_s, zptype_t out_zp)
{
    for(int i = 0; i < n; i++) {
        sumtype_t sum = sums[i];
        sum += bs[i];
        switch(act){    //activation func
        case TM_ACT_RELU:
        case TM_ACT_RELU6: //treat relu6 as relu in float mode //speed up
            sum = sum>0?sum:0;
            break;
        //    sum = sum>0?sum:0;
        //    sum = sum>6?6:sum;
        //    break;
        default:
            break;
        }
        outp[i] = (mtype_t)sum;
    }
    return;
}

#elif (TM_MDL_TYPE==TM_MDL_INT8) || (TM_MDL_TYPE==TM_MDL_INT16) 

#if !TM_FASTSCALE
TM_INLINE void tm_postprocess_sum(int n, sumtype_t* sums, btype_t* bs, int act, mtype_t* outp, sctype_t* scales, sctype_t out_s_inv, zptype_t out_zp)
#else
TM_INLINE void tm_postprocess_sum(int n, sumtype_t* sums, btype_t* bs, int act, mtype_t* outp, int32_t* scales, int32_t out_s, zptype_t out_zp)
#endif
{
    for(int i = 0; i < n; i++) {
        sumtype_t sum = sums[i];
        sum += bs[i];
        #if !TM_FASTSCALE
            float sumf = sum*scales[i];
        #else 
            sumtype_t sumf = (sum<<TM_FASTSCALE_SHIFT)/scales[i];
        #endif
        switch(act){    //activation func
        case TM_ACT_RELU:
            sumf = sumf>0?sumf:0;
            break;
        case TM_ACT_RELU6:
            sumf = sumf>0?sumf:0;
        #if (!TM_FASTSCALE)
            sumf = sumf>6?6:sumf;
        #else
            sumf = sumf>(6<<TM_FASTSCALE_SHIFT)?(6<<TM_FASTSCALE_SHIFT):sumf;
        #endif
            break;
        default:
            break;
        }
        #if !TM_FASTSCALE
            outp[i] = (mtype_t)(sumf*out_s_inv + out_zp);  //(mtype_t)((int)(sumf/out_s) + out_zp) //(mtype_t)((int)(sumf/out_s +0.5) + out_zp)
        #else 
            outp[i] = (mtype_t)(((sumf*out_s)>>(TM_FASTSCALE_SHIFT+TM_FASTSCALE_SHIFT))+out_zp);
        #endif
    }
    return;
}
#endif