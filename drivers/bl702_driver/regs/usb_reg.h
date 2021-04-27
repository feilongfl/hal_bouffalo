/**
  ******************************************************************************
  * @file    usb_reg.h
  * @version V1.2
  * @date    2020-09-04
  * @brief   This file is the description of.IP register
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2020 Bouffalo Lab</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of Bouffalo Lab nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
#ifndef  __USB_REG_H__
#define  __USB_REG_H__

#include "bl702.h"

/* 0x0 : usb_config */
#define USB_CONFIG_OFFSET                                       (0x0)
#define USB_CR_USB_EN                                           USB_CR_USB_EN
#define USB_CR_USB_EN_POS                                       (0U)
#define USB_CR_USB_EN_LEN                                       (1U)
#define USB_CR_USB_EN_MSK                                       (((1U<<USB_CR_USB_EN_LEN)-1)<<USB_CR_USB_EN_POS)
#define USB_CR_USB_EN_UMSK                                      (~(((1U<<USB_CR_USB_EN_LEN)-1)<<USB_CR_USB_EN_POS))
#define USB_CR_USB_ROM_DCT_EN                                   USB_CR_USB_ROM_DCT_EN
#define USB_CR_USB_ROM_DCT_EN_POS                               (4U)
#define USB_CR_USB_ROM_DCT_EN_LEN                               (1U)
#define USB_CR_USB_ROM_DCT_EN_MSK                               (((1U<<USB_CR_USB_ROM_DCT_EN_LEN)-1)<<USB_CR_USB_ROM_DCT_EN_POS)
#define USB_CR_USB_ROM_DCT_EN_UMSK                              (~(((1U<<USB_CR_USB_ROM_DCT_EN_LEN)-1)<<USB_CR_USB_ROM_DCT_EN_POS))
#define USB_CR_USB_EP0_SW_CTRL                                  USB_CR_USB_EP0_SW_CTRL
#define USB_CR_USB_EP0_SW_CTRL_POS                              (8U)
#define USB_CR_USB_EP0_SW_CTRL_LEN                              (1U)
#define USB_CR_USB_EP0_SW_CTRL_MSK                              (((1U<<USB_CR_USB_EP0_SW_CTRL_LEN)-1)<<USB_CR_USB_EP0_SW_CTRL_POS)
#define USB_CR_USB_EP0_SW_CTRL_UMSK                             (~(((1U<<USB_CR_USB_EP0_SW_CTRL_LEN)-1)<<USB_CR_USB_EP0_SW_CTRL_POS))
#define USB_CR_USB_EP0_SW_ADDR                                  USB_CR_USB_EP0_SW_ADDR
#define USB_CR_USB_EP0_SW_ADDR_POS                              (9U)
#define USB_CR_USB_EP0_SW_ADDR_LEN                              (7U)
#define USB_CR_USB_EP0_SW_ADDR_MSK                              (((1U<<USB_CR_USB_EP0_SW_ADDR_LEN)-1)<<USB_CR_USB_EP0_SW_ADDR_POS)
#define USB_CR_USB_EP0_SW_ADDR_UMSK                             (~(((1U<<USB_CR_USB_EP0_SW_ADDR_LEN)-1)<<USB_CR_USB_EP0_SW_ADDR_POS))
#define USB_CR_USB_EP0_SW_SIZE                                  USB_CR_USB_EP0_SW_SIZE
#define USB_CR_USB_EP0_SW_SIZE_POS                              (16U)
#define USB_CR_USB_EP0_SW_SIZE_LEN                              (8U)
#define USB_CR_USB_EP0_SW_SIZE_MSK                              (((1U<<USB_CR_USB_EP0_SW_SIZE_LEN)-1)<<USB_CR_USB_EP0_SW_SIZE_POS)
#define USB_CR_USB_EP0_SW_SIZE_UMSK                             (~(((1U<<USB_CR_USB_EP0_SW_SIZE_LEN)-1)<<USB_CR_USB_EP0_SW_SIZE_POS))
#define USB_CR_USB_EP0_SW_STALL                                 USB_CR_USB_EP0_SW_STALL
#define USB_CR_USB_EP0_SW_STALL_POS                             (24U)
#define USB_CR_USB_EP0_SW_STALL_LEN                             (1U)
#define USB_CR_USB_EP0_SW_STALL_MSK                             (((1U<<USB_CR_USB_EP0_SW_STALL_LEN)-1)<<USB_CR_USB_EP0_SW_STALL_POS)
#define USB_CR_USB_EP0_SW_STALL_UMSK                            (~(((1U<<USB_CR_USB_EP0_SW_STALL_LEN)-1)<<USB_CR_USB_EP0_SW_STALL_POS))
#define USB_CR_USB_EP0_SW_NACK_IN                               USB_CR_USB_EP0_SW_NACK_IN
#define USB_CR_USB_EP0_SW_NACK_IN_POS                           (25U)
#define USB_CR_USB_EP0_SW_NACK_IN_LEN                           (1U)
#define USB_CR_USB_EP0_SW_NACK_IN_MSK                           (((1U<<USB_CR_USB_EP0_SW_NACK_IN_LEN)-1)<<USB_CR_USB_EP0_SW_NACK_IN_POS)
#define USB_CR_USB_EP0_SW_NACK_IN_UMSK                          (~(((1U<<USB_CR_USB_EP0_SW_NACK_IN_LEN)-1)<<USB_CR_USB_EP0_SW_NACK_IN_POS))
#define USB_CR_USB_EP0_SW_NACK_OUT                              USB_CR_USB_EP0_SW_NACK_OUT
#define USB_CR_USB_EP0_SW_NACK_OUT_POS                          (26U)
#define USB_CR_USB_EP0_SW_NACK_OUT_LEN                          (1U)
#define USB_CR_USB_EP0_SW_NACK_OUT_MSK                          (((1U<<USB_CR_USB_EP0_SW_NACK_OUT_LEN)-1)<<USB_CR_USB_EP0_SW_NACK_OUT_POS)
#define USB_CR_USB_EP0_SW_NACK_OUT_UMSK                         (~(((1U<<USB_CR_USB_EP0_SW_NACK_OUT_LEN)-1)<<USB_CR_USB_EP0_SW_NACK_OUT_POS))
#define USB_CR_USB_EP0_SW_RDY                                   USB_CR_USB_EP0_SW_RDY
#define USB_CR_USB_EP0_SW_RDY_POS                               (27U)
#define USB_CR_USB_EP0_SW_RDY_LEN                               (1U)
#define USB_CR_USB_EP0_SW_RDY_MSK                               (((1U<<USB_CR_USB_EP0_SW_RDY_LEN)-1)<<USB_CR_USB_EP0_SW_RDY_POS)
#define USB_CR_USB_EP0_SW_RDY_UMSK                              (~(((1U<<USB_CR_USB_EP0_SW_RDY_LEN)-1)<<USB_CR_USB_EP0_SW_RDY_POS))
#define USB_STS_USB_EP0_SW_RDY                                  USB_STS_USB_EP0_SW_RDY
#define USB_STS_USB_EP0_SW_RDY_POS                              (28U)
#define USB_STS_USB_EP0_SW_RDY_LEN                              (1U)
#define USB_STS_USB_EP0_SW_RDY_MSK                              (((1U<<USB_STS_USB_EP0_SW_RDY_LEN)-1)<<USB_STS_USB_EP0_SW_RDY_POS)
#define USB_STS_USB_EP0_SW_RDY_UMSK                             (~(((1U<<USB_STS_USB_EP0_SW_RDY_LEN)-1)<<USB_STS_USB_EP0_SW_RDY_POS))

/* 0x4 : usb_lpm_config */
#define USB_LPM_CONFIG_OFFSET                                   (0x4)
#define USB_CR_LPM_EN                                           USB_CR_LPM_EN
#define USB_CR_LPM_EN_POS                                       (0U)
#define USB_CR_LPM_EN_LEN                                       (1U)
#define USB_CR_LPM_EN_MSK                                       (((1U<<USB_CR_LPM_EN_LEN)-1)<<USB_CR_LPM_EN_POS)
#define USB_CR_LPM_EN_UMSK                                      (~(((1U<<USB_CR_LPM_EN_LEN)-1)<<USB_CR_LPM_EN_POS))
#define USB_CR_LPM_RESP_UPD                                     USB_CR_LPM_RESP_UPD
#define USB_CR_LPM_RESP_UPD_POS                                 (1U)
#define USB_CR_LPM_RESP_UPD_LEN                                 (1U)
#define USB_CR_LPM_RESP_UPD_MSK                                 (((1U<<USB_CR_LPM_RESP_UPD_LEN)-1)<<USB_CR_LPM_RESP_UPD_POS)
#define USB_CR_LPM_RESP_UPD_UMSK                                (~(((1U<<USB_CR_LPM_RESP_UPD_LEN)-1)<<USB_CR_LPM_RESP_UPD_POS))
#define USB_CR_LPM_RESP                                         USB_CR_LPM_RESP
#define USB_CR_LPM_RESP_POS                                     (2U)
#define USB_CR_LPM_RESP_LEN                                     (2U)
#define USB_CR_LPM_RESP_MSK                                     (((1U<<USB_CR_LPM_RESP_LEN)-1)<<USB_CR_LPM_RESP_POS)
#define USB_CR_LPM_RESP_UMSK                                    (~(((1U<<USB_CR_LPM_RESP_LEN)-1)<<USB_CR_LPM_RESP_POS))
#define USB_STS_LPM_ATTR                                        USB_STS_LPM_ATTR
#define USB_STS_LPM_ATTR_POS                                    (20U)
#define USB_STS_LPM_ATTR_LEN                                    (11U)
#define USB_STS_LPM_ATTR_MSK                                    (((1U<<USB_STS_LPM_ATTR_LEN)-1)<<USB_STS_LPM_ATTR_POS)
#define USB_STS_LPM_ATTR_UMSK                                   (~(((1U<<USB_STS_LPM_ATTR_LEN)-1)<<USB_STS_LPM_ATTR_POS))
#define USB_STS_LPM                                             USB_STS_LPM
#define USB_STS_LPM_POS                                         (31U)
#define USB_STS_LPM_LEN                                         (1U)
#define USB_STS_LPM_MSK                                         (((1U<<USB_STS_LPM_LEN)-1)<<USB_STS_LPM_POS)
#define USB_STS_LPM_UMSK                                        (~(((1U<<USB_STS_LPM_LEN)-1)<<USB_STS_LPM_POS))

/* 0x8 : usb_resume_config */
#define USB_RESUME_CONFIG_OFFSET                                (0x8)
#define USB_CR_RES_WIDTH                                        USB_CR_RES_WIDTH
#define USB_CR_RES_WIDTH_POS                                    (0U)
#define USB_CR_RES_WIDTH_LEN                                    (11U)
#define USB_CR_RES_WIDTH_MSK                                    (((1U<<USB_CR_RES_WIDTH_LEN)-1)<<USB_CR_RES_WIDTH_POS)
#define USB_CR_RES_WIDTH_UMSK                                   (~(((1U<<USB_CR_RES_WIDTH_LEN)-1)<<USB_CR_RES_WIDTH_POS))
#define USB_CR_RES_TRIG                                         USB_CR_RES_TRIG
#define USB_CR_RES_TRIG_POS                                     (12U)
#define USB_CR_RES_TRIG_LEN                                     (1U)
#define USB_CR_RES_TRIG_MSK                                     (((1U<<USB_CR_RES_TRIG_LEN)-1)<<USB_CR_RES_TRIG_POS)
#define USB_CR_RES_TRIG_UMSK                                    (~(((1U<<USB_CR_RES_TRIG_LEN)-1)<<USB_CR_RES_TRIG_POS))
#define USB_CR_RES_FORCE                                        USB_CR_RES_FORCE
#define USB_CR_RES_FORCE_POS                                    (31U)
#define USB_CR_RES_FORCE_LEN                                    (1U)
#define USB_CR_RES_FORCE_MSK                                    (((1U<<USB_CR_RES_FORCE_LEN)-1)<<USB_CR_RES_FORCE_POS)
#define USB_CR_RES_FORCE_UMSK                                   (~(((1U<<USB_CR_RES_FORCE_LEN)-1)<<USB_CR_RES_FORCE_POS))

/* 0x10 : usb_setup_data_0 */
#define USB_SETUP_DATA_0_OFFSET                                 (0x10)
#define USB_STS_SETUP_DATA_B0                                   USB_STS_SETUP_DATA_B0
#define USB_STS_SETUP_DATA_B0_POS                               (0U)
#define USB_STS_SETUP_DATA_B0_LEN                               (8U)
#define USB_STS_SETUP_DATA_B0_MSK                               (((1U<<USB_STS_SETUP_DATA_B0_LEN)-1)<<USB_STS_SETUP_DATA_B0_POS)
#define USB_STS_SETUP_DATA_B0_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B0_LEN)-1)<<USB_STS_SETUP_DATA_B0_POS))
#define USB_STS_SETUP_DATA_B1                                   USB_STS_SETUP_DATA_B1
#define USB_STS_SETUP_DATA_B1_POS                               (8U)
#define USB_STS_SETUP_DATA_B1_LEN                               (8U)
#define USB_STS_SETUP_DATA_B1_MSK                               (((1U<<USB_STS_SETUP_DATA_B1_LEN)-1)<<USB_STS_SETUP_DATA_B1_POS)
#define USB_STS_SETUP_DATA_B1_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B1_LEN)-1)<<USB_STS_SETUP_DATA_B1_POS))
#define USB_STS_SETUP_DATA_B2                                   USB_STS_SETUP_DATA_B2
#define USB_STS_SETUP_DATA_B2_POS                               (16U)
#define USB_STS_SETUP_DATA_B2_LEN                               (8U)
#define USB_STS_SETUP_DATA_B2_MSK                               (((1U<<USB_STS_SETUP_DATA_B2_LEN)-1)<<USB_STS_SETUP_DATA_B2_POS)
#define USB_STS_SETUP_DATA_B2_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B2_LEN)-1)<<USB_STS_SETUP_DATA_B2_POS))
#define USB_STS_SETUP_DATA_B3                                   USB_STS_SETUP_DATA_B3
#define USB_STS_SETUP_DATA_B3_POS                               (24U)
#define USB_STS_SETUP_DATA_B3_LEN                               (8U)
#define USB_STS_SETUP_DATA_B3_MSK                               (((1U<<USB_STS_SETUP_DATA_B3_LEN)-1)<<USB_STS_SETUP_DATA_B3_POS)
#define USB_STS_SETUP_DATA_B3_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B3_LEN)-1)<<USB_STS_SETUP_DATA_B3_POS))

/* 0x14 : usb_setup_data_1 */
#define USB_SETUP_DATA_1_OFFSET                                 (0x14)
#define USB_STS_SETUP_DATA_B4                                   USB_STS_SETUP_DATA_B4
#define USB_STS_SETUP_DATA_B4_POS                               (0U)
#define USB_STS_SETUP_DATA_B4_LEN                               (8U)
#define USB_STS_SETUP_DATA_B4_MSK                               (((1U<<USB_STS_SETUP_DATA_B4_LEN)-1)<<USB_STS_SETUP_DATA_B4_POS)
#define USB_STS_SETUP_DATA_B4_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B4_LEN)-1)<<USB_STS_SETUP_DATA_B4_POS))
#define USB_STS_SETUP_DATA_B5                                   USB_STS_SETUP_DATA_B5
#define USB_STS_SETUP_DATA_B5_POS                               (8U)
#define USB_STS_SETUP_DATA_B5_LEN                               (8U)
#define USB_STS_SETUP_DATA_B5_MSK                               (((1U<<USB_STS_SETUP_DATA_B5_LEN)-1)<<USB_STS_SETUP_DATA_B5_POS)
#define USB_STS_SETUP_DATA_B5_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B5_LEN)-1)<<USB_STS_SETUP_DATA_B5_POS))
#define USB_STS_SETUP_DATA_B6                                   USB_STS_SETUP_DATA_B6
#define USB_STS_SETUP_DATA_B6_POS                               (16U)
#define USB_STS_SETUP_DATA_B6_LEN                               (8U)
#define USB_STS_SETUP_DATA_B6_MSK                               (((1U<<USB_STS_SETUP_DATA_B6_LEN)-1)<<USB_STS_SETUP_DATA_B6_POS)
#define USB_STS_SETUP_DATA_B6_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B6_LEN)-1)<<USB_STS_SETUP_DATA_B6_POS))
#define USB_STS_SETUP_DATA_B7                                   USB_STS_SETUP_DATA_B7
#define USB_STS_SETUP_DATA_B7_POS                               (24U)
#define USB_STS_SETUP_DATA_B7_LEN                               (8U)
#define USB_STS_SETUP_DATA_B7_MSK                               (((1U<<USB_STS_SETUP_DATA_B7_LEN)-1)<<USB_STS_SETUP_DATA_B7_POS)
#define USB_STS_SETUP_DATA_B7_UMSK                              (~(((1U<<USB_STS_SETUP_DATA_B7_LEN)-1)<<USB_STS_SETUP_DATA_B7_POS))

/* 0x18 : usb_frame_no */
#define USB_FRAME_NO_OFFSET                                     (0x18)
#define USB_STS_FRAME_NO                                        USB_STS_FRAME_NO
#define USB_STS_FRAME_NO_POS                                    (0U)
#define USB_STS_FRAME_NO_LEN                                    (11U)
#define USB_STS_FRAME_NO_MSK                                    (((1U<<USB_STS_FRAME_NO_LEN)-1)<<USB_STS_FRAME_NO_POS)
#define USB_STS_FRAME_NO_UMSK                                   (~(((1U<<USB_STS_FRAME_NO_LEN)-1)<<USB_STS_FRAME_NO_POS))
#define USB_STS_PID                                             USB_STS_PID
#define USB_STS_PID_POS                                         (12U)
#define USB_STS_PID_LEN                                         (4U)
#define USB_STS_PID_MSK                                         (((1U<<USB_STS_PID_LEN)-1)<<USB_STS_PID_POS)
#define USB_STS_PID_UMSK                                        (~(((1U<<USB_STS_PID_LEN)-1)<<USB_STS_PID_POS))
#define USB_STS_EP_NO                                           USB_STS_EP_NO
#define USB_STS_EP_NO_POS                                       (16U)
#define USB_STS_EP_NO_LEN                                       (4U)
#define USB_STS_EP_NO_MSK                                       (((1U<<USB_STS_EP_NO_LEN)-1)<<USB_STS_EP_NO_POS)
#define USB_STS_EP_NO_UMSK                                      (~(((1U<<USB_STS_EP_NO_LEN)-1)<<USB_STS_EP_NO_POS))

/* 0x1C : usb_error */
#define USB_ERROR_OFFSET                                        (0x1C)
#define USB_UTMI_RX_ERR                                         USB_UTMI_RX_ERR
#define USB_UTMI_RX_ERR_POS                                     (0U)
#define USB_UTMI_RX_ERR_LEN                                     (1U)
#define USB_UTMI_RX_ERR_MSK                                     (((1U<<USB_UTMI_RX_ERR_LEN)-1)<<USB_UTMI_RX_ERR_POS)
#define USB_UTMI_RX_ERR_UMSK                                    (~(((1U<<USB_UTMI_RX_ERR_LEN)-1)<<USB_UTMI_RX_ERR_POS))
#define USB_XFER_TO_ERR                                         USB_XFER_TO_ERR
#define USB_XFER_TO_ERR_POS                                     (1U)
#define USB_XFER_TO_ERR_LEN                                     (1U)
#define USB_XFER_TO_ERR_MSK                                     (((1U<<USB_XFER_TO_ERR_LEN)-1)<<USB_XFER_TO_ERR_POS)
#define USB_XFER_TO_ERR_UMSK                                    (~(((1U<<USB_XFER_TO_ERR_LEN)-1)<<USB_XFER_TO_ERR_POS))
#define USB_IVLD_EP_ERR                                         USB_IVLD_EP_ERR
#define USB_IVLD_EP_ERR_POS                                     (2U)
#define USB_IVLD_EP_ERR_LEN                                     (1U)
#define USB_IVLD_EP_ERR_MSK                                     (((1U<<USB_IVLD_EP_ERR_LEN)-1)<<USB_IVLD_EP_ERR_POS)
#define USB_IVLD_EP_ERR_UMSK                                    (~(((1U<<USB_IVLD_EP_ERR_LEN)-1)<<USB_IVLD_EP_ERR_POS))
#define USB_PID_SEQ_ERR                                         USB_PID_SEQ_ERR
#define USB_PID_SEQ_ERR_POS                                     (3U)
#define USB_PID_SEQ_ERR_LEN                                     (1U)
#define USB_PID_SEQ_ERR_MSK                                     (((1U<<USB_PID_SEQ_ERR_LEN)-1)<<USB_PID_SEQ_ERR_POS)
#define USB_PID_SEQ_ERR_UMSK                                    (~(((1U<<USB_PID_SEQ_ERR_LEN)-1)<<USB_PID_SEQ_ERR_POS))
#define USB_PID_CKS_ERR                                         USB_PID_CKS_ERR
#define USB_PID_CKS_ERR_POS                                     (4U)
#define USB_PID_CKS_ERR_LEN                                     (1U)
#define USB_PID_CKS_ERR_MSK                                     (((1U<<USB_PID_CKS_ERR_LEN)-1)<<USB_PID_CKS_ERR_POS)
#define USB_PID_CKS_ERR_UMSK                                    (~(((1U<<USB_PID_CKS_ERR_LEN)-1)<<USB_PID_CKS_ERR_POS))
#define USB_CRC5_ERR                                            USB_CRC5_ERR
#define USB_CRC5_ERR_POS                                        (5U)
#define USB_CRC5_ERR_LEN                                        (1U)
#define USB_CRC5_ERR_MSK                                        (((1U<<USB_CRC5_ERR_LEN)-1)<<USB_CRC5_ERR_POS)
#define USB_CRC5_ERR_UMSK                                       (~(((1U<<USB_CRC5_ERR_LEN)-1)<<USB_CRC5_ERR_POS))
#define USB_CRC16_ERR                                           USB_CRC16_ERR
#define USB_CRC16_ERR_POS                                       (6U)
#define USB_CRC16_ERR_LEN                                       (1U)
#define USB_CRC16_ERR_MSK                                       (((1U<<USB_CRC16_ERR_LEN)-1)<<USB_CRC16_ERR_POS)
#define USB_CRC16_ERR_UMSK                                      (~(((1U<<USB_CRC16_ERR_LEN)-1)<<USB_CRC16_ERR_POS))

/* 0x20 : USB interrupt enable */
#define USB_INT_EN_OFFSET                                       (0x20)
#define USB_CR_SOF_EN                                           USB_CR_SOF_EN
#define USB_CR_SOF_EN_POS                                       (0U)
#define USB_CR_SOF_EN_LEN                                       (1U)
#define USB_CR_SOF_EN_MSK                                       (((1U<<USB_CR_SOF_EN_LEN)-1)<<USB_CR_SOF_EN_POS)
#define USB_CR_SOF_EN_UMSK                                      (~(((1U<<USB_CR_SOF_EN_LEN)-1)<<USB_CR_SOF_EN_POS))
#define USB_CR_USB_RESET_EN                                     USB_CR_USB_RESET_EN
#define USB_CR_USB_RESET_EN_POS                                 (1U)
#define USB_CR_USB_RESET_EN_LEN                                 (1U)
#define USB_CR_USB_RESET_EN_MSK                                 (((1U<<USB_CR_USB_RESET_EN_LEN)-1)<<USB_CR_USB_RESET_EN_POS)
#define USB_CR_USB_RESET_EN_UMSK                                (~(((1U<<USB_CR_USB_RESET_EN_LEN)-1)<<USB_CR_USB_RESET_EN_POS))
#define USB_CR_VBUS_TGL_EN                                      USB_CR_VBUS_TGL_EN
#define USB_CR_VBUS_TGL_EN_POS                                  (2U)
#define USB_CR_VBUS_TGL_EN_LEN                                  (1U)
#define USB_CR_VBUS_TGL_EN_MSK                                  (((1U<<USB_CR_VBUS_TGL_EN_LEN)-1)<<USB_CR_VBUS_TGL_EN_POS)
#define USB_CR_VBUS_TGL_EN_UMSK                                 (~(((1U<<USB_CR_VBUS_TGL_EN_LEN)-1)<<USB_CR_VBUS_TGL_EN_POS))
#define USB_CR_GET_DCT_CMD_EN                                   USB_CR_GET_DCT_CMD_EN
#define USB_CR_GET_DCT_CMD_EN_POS                               (3U)
#define USB_CR_GET_DCT_CMD_EN_LEN                               (1U)
#define USB_CR_GET_DCT_CMD_EN_MSK                               (((1U<<USB_CR_GET_DCT_CMD_EN_LEN)-1)<<USB_CR_GET_DCT_CMD_EN_POS)
#define USB_CR_GET_DCT_CMD_EN_UMSK                              (~(((1U<<USB_CR_GET_DCT_CMD_EN_LEN)-1)<<USB_CR_GET_DCT_CMD_EN_POS))
#define USB_CR_EP0_SETUP_CMD_EN                                 USB_CR_EP0_SETUP_CMD_EN
#define USB_CR_EP0_SETUP_CMD_EN_POS                             (4U)
#define USB_CR_EP0_SETUP_CMD_EN_LEN                             (1U)
#define USB_CR_EP0_SETUP_CMD_EN_MSK                             (((1U<<USB_CR_EP0_SETUP_CMD_EN_LEN)-1)<<USB_CR_EP0_SETUP_CMD_EN_POS)
#define USB_CR_EP0_SETUP_CMD_EN_UMSK                            (~(((1U<<USB_CR_EP0_SETUP_CMD_EN_LEN)-1)<<USB_CR_EP0_SETUP_CMD_EN_POS))
#define USB_CR_EP0_SETUP_DONE_EN                                USB_CR_EP0_SETUP_DONE_EN
#define USB_CR_EP0_SETUP_DONE_EN_POS                            (5U)
#define USB_CR_EP0_SETUP_DONE_EN_LEN                            (1U)
#define USB_CR_EP0_SETUP_DONE_EN_MSK                            (((1U<<USB_CR_EP0_SETUP_DONE_EN_LEN)-1)<<USB_CR_EP0_SETUP_DONE_EN_POS)
#define USB_CR_EP0_SETUP_DONE_EN_UMSK                           (~(((1U<<USB_CR_EP0_SETUP_DONE_EN_LEN)-1)<<USB_CR_EP0_SETUP_DONE_EN_POS))
#define USB_CR_EP0_IN_CMD_EN                                    USB_CR_EP0_IN_CMD_EN
#define USB_CR_EP0_IN_CMD_EN_POS                                (6U)
#define USB_CR_EP0_IN_CMD_EN_LEN                                (1U)
#define USB_CR_EP0_IN_CMD_EN_MSK                                (((1U<<USB_CR_EP0_IN_CMD_EN_LEN)-1)<<USB_CR_EP0_IN_CMD_EN_POS)
#define USB_CR_EP0_IN_CMD_EN_UMSK                               (~(((1U<<USB_CR_EP0_IN_CMD_EN_LEN)-1)<<USB_CR_EP0_IN_CMD_EN_POS))
#define USB_CR_EP0_IN_DONE_EN                                   USB_CR_EP0_IN_DONE_EN
#define USB_CR_EP0_IN_DONE_EN_POS                               (7U)
#define USB_CR_EP0_IN_DONE_EN_LEN                               (1U)
#define USB_CR_EP0_IN_DONE_EN_MSK                               (((1U<<USB_CR_EP0_IN_DONE_EN_LEN)-1)<<USB_CR_EP0_IN_DONE_EN_POS)
#define USB_CR_EP0_IN_DONE_EN_UMSK                              (~(((1U<<USB_CR_EP0_IN_DONE_EN_LEN)-1)<<USB_CR_EP0_IN_DONE_EN_POS))
#define USB_CR_EP0_OUT_CMD_EN                                   USB_CR_EP0_OUT_CMD_EN
#define USB_CR_EP0_OUT_CMD_EN_POS                               (8U)
#define USB_CR_EP0_OUT_CMD_EN_LEN                               (1U)
#define USB_CR_EP0_OUT_CMD_EN_MSK                               (((1U<<USB_CR_EP0_OUT_CMD_EN_LEN)-1)<<USB_CR_EP0_OUT_CMD_EN_POS)
#define USB_CR_EP0_OUT_CMD_EN_UMSK                              (~(((1U<<USB_CR_EP0_OUT_CMD_EN_LEN)-1)<<USB_CR_EP0_OUT_CMD_EN_POS))
#define USB_CR_EP0_OUT_DONE_EN                                  USB_CR_EP0_OUT_DONE_EN
#define USB_CR_EP0_OUT_DONE_EN_POS                              (9U)
#define USB_CR_EP0_OUT_DONE_EN_LEN                              (1U)
#define USB_CR_EP0_OUT_DONE_EN_MSK                              (((1U<<USB_CR_EP0_OUT_DONE_EN_LEN)-1)<<USB_CR_EP0_OUT_DONE_EN_POS)
#define USB_CR_EP0_OUT_DONE_EN_UMSK                             (~(((1U<<USB_CR_EP0_OUT_DONE_EN_LEN)-1)<<USB_CR_EP0_OUT_DONE_EN_POS))
#define USB_CR_EP1_CMD_EN                                       USB_CR_EP1_CMD_EN
#define USB_CR_EP1_CMD_EN_POS                                   (10U)
#define USB_CR_EP1_CMD_EN_LEN                                   (1U)
#define USB_CR_EP1_CMD_EN_MSK                                   (((1U<<USB_CR_EP1_CMD_EN_LEN)-1)<<USB_CR_EP1_CMD_EN_POS)
#define USB_CR_EP1_CMD_EN_UMSK                                  (~(((1U<<USB_CR_EP1_CMD_EN_LEN)-1)<<USB_CR_EP1_CMD_EN_POS))
#define USB_CR_EP1_DONE_EN                                      USB_CR_EP1_DONE_EN
#define USB_CR_EP1_DONE_EN_POS                                  (11U)
#define USB_CR_EP1_DONE_EN_LEN                                  (1U)
#define USB_CR_EP1_DONE_EN_MSK                                  (((1U<<USB_CR_EP1_DONE_EN_LEN)-1)<<USB_CR_EP1_DONE_EN_POS)
#define USB_CR_EP1_DONE_EN_UMSK                                 (~(((1U<<USB_CR_EP1_DONE_EN_LEN)-1)<<USB_CR_EP1_DONE_EN_POS))
#define USB_CR_EP2_CMD_EN                                       USB_CR_EP2_CMD_EN
#define USB_CR_EP2_CMD_EN_POS                                   (12U)
#define USB_CR_EP2_CMD_EN_LEN                                   (1U)
#define USB_CR_EP2_CMD_EN_MSK                                   (((1U<<USB_CR_EP2_CMD_EN_LEN)-1)<<USB_CR_EP2_CMD_EN_POS)
#define USB_CR_EP2_CMD_EN_UMSK                                  (~(((1U<<USB_CR_EP2_CMD_EN_LEN)-1)<<USB_CR_EP2_CMD_EN_POS))
#define USB_CR_EP2_DONE_EN                                      USB_CR_EP2_DONE_EN
#define USB_CR_EP2_DONE_EN_POS                                  (13U)
#define USB_CR_EP2_DONE_EN_LEN                                  (1U)
#define USB_CR_EP2_DONE_EN_MSK                                  (((1U<<USB_CR_EP2_DONE_EN_LEN)-1)<<USB_CR_EP2_DONE_EN_POS)
#define USB_CR_EP2_DONE_EN_UMSK                                 (~(((1U<<USB_CR_EP2_DONE_EN_LEN)-1)<<USB_CR_EP2_DONE_EN_POS))
#define USB_CR_EP3_CMD_EN                                       USB_CR_EP3_CMD_EN
#define USB_CR_EP3_CMD_EN_POS                                   (14U)
#define USB_CR_EP3_CMD_EN_LEN                                   (1U)
#define USB_CR_EP3_CMD_EN_MSK                                   (((1U<<USB_CR_EP3_CMD_EN_LEN)-1)<<USB_CR_EP3_CMD_EN_POS)
#define USB_CR_EP3_CMD_EN_UMSK                                  (~(((1U<<USB_CR_EP3_CMD_EN_LEN)-1)<<USB_CR_EP3_CMD_EN_POS))
#define USB_CR_EP3_DONE_EN                                      USB_CR_EP3_DONE_EN
#define USB_CR_EP3_DONE_EN_POS                                  (15U)
#define USB_CR_EP3_DONE_EN_LEN                                  (1U)
#define USB_CR_EP3_DONE_EN_MSK                                  (((1U<<USB_CR_EP3_DONE_EN_LEN)-1)<<USB_CR_EP3_DONE_EN_POS)
#define USB_CR_EP3_DONE_EN_UMSK                                 (~(((1U<<USB_CR_EP3_DONE_EN_LEN)-1)<<USB_CR_EP3_DONE_EN_POS))
#define USB_CR_EP4_CMD_EN                                       USB_CR_EP4_CMD_EN
#define USB_CR_EP4_CMD_EN_POS                                   (16U)
#define USB_CR_EP4_CMD_EN_LEN                                   (1U)
#define USB_CR_EP4_CMD_EN_MSK                                   (((1U<<USB_CR_EP4_CMD_EN_LEN)-1)<<USB_CR_EP4_CMD_EN_POS)
#define USB_CR_EP4_CMD_EN_UMSK                                  (~(((1U<<USB_CR_EP4_CMD_EN_LEN)-1)<<USB_CR_EP4_CMD_EN_POS))
#define USB_CR_EP4_DONE_EN                                      USB_CR_EP4_DONE_EN
#define USB_CR_EP4_DONE_EN_POS                                  (17U)
#define USB_CR_EP4_DONE_EN_LEN                                  (1U)
#define USB_CR_EP4_DONE_EN_MSK                                  (((1U<<USB_CR_EP4_DONE_EN_LEN)-1)<<USB_CR_EP4_DONE_EN_POS)
#define USB_CR_EP4_DONE_EN_UMSK                                 (~(((1U<<USB_CR_EP4_DONE_EN_LEN)-1)<<USB_CR_EP4_DONE_EN_POS))
#define USB_CR_EP5_CMD_EN                                       USB_CR_EP5_CMD_EN
#define USB_CR_EP5_CMD_EN_POS                                   (18U)
#define USB_CR_EP5_CMD_EN_LEN                                   (1U)
#define USB_CR_EP5_CMD_EN_MSK                                   (((1U<<USB_CR_EP5_CMD_EN_LEN)-1)<<USB_CR_EP5_CMD_EN_POS)
#define USB_CR_EP5_CMD_EN_UMSK                                  (~(((1U<<USB_CR_EP5_CMD_EN_LEN)-1)<<USB_CR_EP5_CMD_EN_POS))
#define USB_CR_EP5_DONE_EN                                      USB_CR_EP5_DONE_EN
#define USB_CR_EP5_DONE_EN_POS                                  (19U)
#define USB_CR_EP5_DONE_EN_LEN                                  (1U)
#define USB_CR_EP5_DONE_EN_MSK                                  (((1U<<USB_CR_EP5_DONE_EN_LEN)-1)<<USB_CR_EP5_DONE_EN_POS)
#define USB_CR_EP5_DONE_EN_UMSK                                 (~(((1U<<USB_CR_EP5_DONE_EN_LEN)-1)<<USB_CR_EP5_DONE_EN_POS))
#define USB_CR_EP6_CMD_EN                                       USB_CR_EP6_CMD_EN
#define USB_CR_EP6_CMD_EN_POS                                   (20U)
#define USB_CR_EP6_CMD_EN_LEN                                   (1U)
#define USB_CR_EP6_CMD_EN_MSK                                   (((1U<<USB_CR_EP6_CMD_EN_LEN)-1)<<USB_CR_EP6_CMD_EN_POS)
#define USB_CR_EP6_CMD_EN_UMSK                                  (~(((1U<<USB_CR_EP6_CMD_EN_LEN)-1)<<USB_CR_EP6_CMD_EN_POS))
#define USB_CR_EP6_DONE_EN                                      USB_CR_EP6_DONE_EN
#define USB_CR_EP6_DONE_EN_POS                                  (21U)
#define USB_CR_EP6_DONE_EN_LEN                                  (1U)
#define USB_CR_EP6_DONE_EN_MSK                                  (((1U<<USB_CR_EP6_DONE_EN_LEN)-1)<<USB_CR_EP6_DONE_EN_POS)
#define USB_CR_EP6_DONE_EN_UMSK                                 (~(((1U<<USB_CR_EP6_DONE_EN_LEN)-1)<<USB_CR_EP6_DONE_EN_POS))
#define USB_CR_EP7_CMD_EN                                       USB_CR_EP7_CMD_EN
#define USB_CR_EP7_CMD_EN_POS                                   (22U)
#define USB_CR_EP7_CMD_EN_LEN                                   (1U)
#define USB_CR_EP7_CMD_EN_MSK                                   (((1U<<USB_CR_EP7_CMD_EN_LEN)-1)<<USB_CR_EP7_CMD_EN_POS)
#define USB_CR_EP7_CMD_EN_UMSK                                  (~(((1U<<USB_CR_EP7_CMD_EN_LEN)-1)<<USB_CR_EP7_CMD_EN_POS))
#define USB_CR_EP7_DONE_EN                                      USB_CR_EP7_DONE_EN
#define USB_CR_EP7_DONE_EN_POS                                  (23U)
#define USB_CR_EP7_DONE_EN_LEN                                  (1U)
#define USB_CR_EP7_DONE_EN_MSK                                  (((1U<<USB_CR_EP7_DONE_EN_LEN)-1)<<USB_CR_EP7_DONE_EN_POS)
#define USB_CR_EP7_DONE_EN_UMSK                                 (~(((1U<<USB_CR_EP7_DONE_EN_LEN)-1)<<USB_CR_EP7_DONE_EN_POS))
#define USB_CR_USB_REND_EN                                      USB_CR_USB_REND_EN
#define USB_CR_USB_REND_EN_POS                                  (27U)
#define USB_CR_USB_REND_EN_LEN                                  (1U)
#define USB_CR_USB_REND_EN_MSK                                  (((1U<<USB_CR_USB_REND_EN_LEN)-1)<<USB_CR_USB_REND_EN_POS)
#define USB_CR_USB_REND_EN_UMSK                                 (~(((1U<<USB_CR_USB_REND_EN_LEN)-1)<<USB_CR_USB_REND_EN_POS))
#define USB_CR_LPM_WKUP_EN                                      USB_CR_LPM_WKUP_EN
#define USB_CR_LPM_WKUP_EN_POS                                  (28U)
#define USB_CR_LPM_WKUP_EN_LEN                                  (1U)
#define USB_CR_LPM_WKUP_EN_MSK                                  (((1U<<USB_CR_LPM_WKUP_EN_LEN)-1)<<USB_CR_LPM_WKUP_EN_POS)
#define USB_CR_LPM_WKUP_EN_UMSK                                 (~(((1U<<USB_CR_LPM_WKUP_EN_LEN)-1)<<USB_CR_LPM_WKUP_EN_POS))
#define USB_CR_LPM_PKT_EN                                       USB_CR_LPM_PKT_EN
#define USB_CR_LPM_PKT_EN_POS                                   (29U)
#define USB_CR_LPM_PKT_EN_LEN                                   (1U)
#define USB_CR_LPM_PKT_EN_MSK                                   (((1U<<USB_CR_LPM_PKT_EN_LEN)-1)<<USB_CR_LPM_PKT_EN_POS)
#define USB_CR_LPM_PKT_EN_UMSK                                  (~(((1U<<USB_CR_LPM_PKT_EN_LEN)-1)<<USB_CR_LPM_PKT_EN_POS))
#define USB_CR_SOF_3MS_EN                                       USB_CR_SOF_3MS_EN
#define USB_CR_SOF_3MS_EN_POS                                   (30U)
#define USB_CR_SOF_3MS_EN_LEN                                   (1U)
#define USB_CR_SOF_3MS_EN_MSK                                   (((1U<<USB_CR_SOF_3MS_EN_LEN)-1)<<USB_CR_SOF_3MS_EN_POS)
#define USB_CR_SOF_3MS_EN_UMSK                                  (~(((1U<<USB_CR_SOF_3MS_EN_LEN)-1)<<USB_CR_SOF_3MS_EN_POS))
#define USB_CR_USB_ERR_EN                                       USB_CR_USB_ERR_EN
#define USB_CR_USB_ERR_EN_POS                                   (31U)
#define USB_CR_USB_ERR_EN_LEN                                   (1U)
#define USB_CR_USB_ERR_EN_MSK                                   (((1U<<USB_CR_USB_ERR_EN_LEN)-1)<<USB_CR_USB_ERR_EN_POS)
#define USB_CR_USB_ERR_EN_UMSK                                  (~(((1U<<USB_CR_USB_ERR_EN_LEN)-1)<<USB_CR_USB_ERR_EN_POS))

/* 0x24 : USB interrupt status */
#define USB_INT_STS_OFFSET                                      (0x24)
#define USB_SOF_INT                                             USB_SOF_INT
#define USB_SOF_INT_POS                                         (0U)
#define USB_SOF_INT_LEN                                         (1U)
#define USB_SOF_INT_MSK                                         (((1U<<USB_SOF_INT_LEN)-1)<<USB_SOF_INT_POS)
#define USB_SOF_INT_UMSK                                        (~(((1U<<USB_SOF_INT_LEN)-1)<<USB_SOF_INT_POS))
#define USB_RESET_INT                                           USB_RESET_INT
#define USB_RESET_INT_POS                                       (1U)
#define USB_RESET_INT_LEN                                       (1U)
#define USB_RESET_INT_MSK                                       (((1U<<USB_RESET_INT_LEN)-1)<<USB_RESET_INT_POS)
#define USB_RESET_INT_UMSK                                      (~(((1U<<USB_RESET_INT_LEN)-1)<<USB_RESET_INT_POS))
#define USB_VBUS_TGL_INT                                        USB_VBUS_TGL_INT
#define USB_VBUS_TGL_INT_POS                                    (2U)
#define USB_VBUS_TGL_INT_LEN                                    (1U)
#define USB_VBUS_TGL_INT_MSK                                    (((1U<<USB_VBUS_TGL_INT_LEN)-1)<<USB_VBUS_TGL_INT_POS)
#define USB_VBUS_TGL_INT_UMSK                                   (~(((1U<<USB_VBUS_TGL_INT_LEN)-1)<<USB_VBUS_TGL_INT_POS))
#define USB_GET_DCT_CMD_INT                                     USB_GET_DCT_CMD_INT
#define USB_GET_DCT_CMD_INT_POS                                 (3U)
#define USB_GET_DCT_CMD_INT_LEN                                 (1U)
#define USB_GET_DCT_CMD_INT_MSK                                 (((1U<<USB_GET_DCT_CMD_INT_LEN)-1)<<USB_GET_DCT_CMD_INT_POS)
#define USB_GET_DCT_CMD_INT_UMSK                                (~(((1U<<USB_GET_DCT_CMD_INT_LEN)-1)<<USB_GET_DCT_CMD_INT_POS))
#define USB_EP0_SETUP_CMD_INT                                   USB_EP0_SETUP_CMD_INT
#define USB_EP0_SETUP_CMD_INT_POS                               (4U)
#define USB_EP0_SETUP_CMD_INT_LEN                               (1U)
#define USB_EP0_SETUP_CMD_INT_MSK                               (((1U<<USB_EP0_SETUP_CMD_INT_LEN)-1)<<USB_EP0_SETUP_CMD_INT_POS)
#define USB_EP0_SETUP_CMD_INT_UMSK                              (~(((1U<<USB_EP0_SETUP_CMD_INT_LEN)-1)<<USB_EP0_SETUP_CMD_INT_POS))
#define USB_EP0_SETUP_DONE_INT                                  USB_EP0_SETUP_DONE_INT
#define USB_EP0_SETUP_DONE_INT_POS                              (5U)
#define USB_EP0_SETUP_DONE_INT_LEN                              (1U)
#define USB_EP0_SETUP_DONE_INT_MSK                              (((1U<<USB_EP0_SETUP_DONE_INT_LEN)-1)<<USB_EP0_SETUP_DONE_INT_POS)
#define USB_EP0_SETUP_DONE_INT_UMSK                             (~(((1U<<USB_EP0_SETUP_DONE_INT_LEN)-1)<<USB_EP0_SETUP_DONE_INT_POS))
#define USB_EP0_IN_CMD_INT                                      USB_EP0_IN_CMD_INT
#define USB_EP0_IN_CMD_INT_POS                                  (6U)
#define USB_EP0_IN_CMD_INT_LEN                                  (1U)
#define USB_EP0_IN_CMD_INT_MSK                                  (((1U<<USB_EP0_IN_CMD_INT_LEN)-1)<<USB_EP0_IN_CMD_INT_POS)
#define USB_EP0_IN_CMD_INT_UMSK                                 (~(((1U<<USB_EP0_IN_CMD_INT_LEN)-1)<<USB_EP0_IN_CMD_INT_POS))
#define USB_EP0_IN_DONE_INT                                     USB_EP0_IN_DONE_INT
#define USB_EP0_IN_DONE_INT_POS                                 (7U)
#define USB_EP0_IN_DONE_INT_LEN                                 (1U)
#define USB_EP0_IN_DONE_INT_MSK                                 (((1U<<USB_EP0_IN_DONE_INT_LEN)-1)<<USB_EP0_IN_DONE_INT_POS)
#define USB_EP0_IN_DONE_INT_UMSK                                (~(((1U<<USB_EP0_IN_DONE_INT_LEN)-1)<<USB_EP0_IN_DONE_INT_POS))
#define USB_EP0_OUT_CMD_INT                                     USB_EP0_OUT_CMD_INT
#define USB_EP0_OUT_CMD_INT_POS                                 (8U)
#define USB_EP0_OUT_CMD_INT_LEN                                 (1U)
#define USB_EP0_OUT_CMD_INT_MSK                                 (((1U<<USB_EP0_OUT_CMD_INT_LEN)-1)<<USB_EP0_OUT_CMD_INT_POS)
#define USB_EP0_OUT_CMD_INT_UMSK                                (~(((1U<<USB_EP0_OUT_CMD_INT_LEN)-1)<<USB_EP0_OUT_CMD_INT_POS))
#define USB_EP0_OUT_DONE_INT                                    USB_EP0_OUT_DONE_INT
#define USB_EP0_OUT_DONE_INT_POS                                (9U)
#define USB_EP0_OUT_DONE_INT_LEN                                (1U)
#define USB_EP0_OUT_DONE_INT_MSK                                (((1U<<USB_EP0_OUT_DONE_INT_LEN)-1)<<USB_EP0_OUT_DONE_INT_POS)
#define USB_EP0_OUT_DONE_INT_UMSK                               (~(((1U<<USB_EP0_OUT_DONE_INT_LEN)-1)<<USB_EP0_OUT_DONE_INT_POS))
#define USB_EP1_CMD_INT                                         USB_EP1_CMD_INT
#define USB_EP1_CMD_INT_POS                                     (10U)
#define USB_EP1_CMD_INT_LEN                                     (1U)
#define USB_EP1_CMD_INT_MSK                                     (((1U<<USB_EP1_CMD_INT_LEN)-1)<<USB_EP1_CMD_INT_POS)
#define USB_EP1_CMD_INT_UMSK                                    (~(((1U<<USB_EP1_CMD_INT_LEN)-1)<<USB_EP1_CMD_INT_POS))
#define USB_EP1_DONE_INT                                        USB_EP1_DONE_INT
#define USB_EP1_DONE_INT_POS                                    (11U)
#define USB_EP1_DONE_INT_LEN                                    (1U)
#define USB_EP1_DONE_INT_MSK                                    (((1U<<USB_EP1_DONE_INT_LEN)-1)<<USB_EP1_DONE_INT_POS)
#define USB_EP1_DONE_INT_UMSK                                   (~(((1U<<USB_EP1_DONE_INT_LEN)-1)<<USB_EP1_DONE_INT_POS))
#define USB_EP2_CMD_INT                                         USB_EP2_CMD_INT
#define USB_EP2_CMD_INT_POS                                     (12U)
#define USB_EP2_CMD_INT_LEN                                     (1U)
#define USB_EP2_CMD_INT_MSK                                     (((1U<<USB_EP2_CMD_INT_LEN)-1)<<USB_EP2_CMD_INT_POS)
#define USB_EP2_CMD_INT_UMSK                                    (~(((1U<<USB_EP2_CMD_INT_LEN)-1)<<USB_EP2_CMD_INT_POS))
#define USB_EP2_DONE_INT                                        USB_EP2_DONE_INT
#define USB_EP2_DONE_INT_POS                                    (13U)
#define USB_EP2_DONE_INT_LEN                                    (1U)
#define USB_EP2_DONE_INT_MSK                                    (((1U<<USB_EP2_DONE_INT_LEN)-1)<<USB_EP2_DONE_INT_POS)
#define USB_EP2_DONE_INT_UMSK                                   (~(((1U<<USB_EP2_DONE_INT_LEN)-1)<<USB_EP2_DONE_INT_POS))
#define USB_EP3_CMD_INT                                         USB_EP3_CMD_INT
#define USB_EP3_CMD_INT_POS                                     (14U)
#define USB_EP3_CMD_INT_LEN                                     (1U)
#define USB_EP3_CMD_INT_MSK                                     (((1U<<USB_EP3_CMD_INT_LEN)-1)<<USB_EP3_CMD_INT_POS)
#define USB_EP3_CMD_INT_UMSK                                    (~(((1U<<USB_EP3_CMD_INT_LEN)-1)<<USB_EP3_CMD_INT_POS))
#define USB_EP3_DONE_INT                                        USB_EP3_DONE_INT
#define USB_EP3_DONE_INT_POS                                    (15U)
#define USB_EP3_DONE_INT_LEN                                    (1U)
#define USB_EP3_DONE_INT_MSK                                    (((1U<<USB_EP3_DONE_INT_LEN)-1)<<USB_EP3_DONE_INT_POS)
#define USB_EP3_DONE_INT_UMSK                                   (~(((1U<<USB_EP3_DONE_INT_LEN)-1)<<USB_EP3_DONE_INT_POS))
#define USB_EP4_CMD_INT                                         USB_EP4_CMD_INT
#define USB_EP4_CMD_INT_POS                                     (16U)
#define USB_EP4_CMD_INT_LEN                                     (1U)
#define USB_EP4_CMD_INT_MSK                                     (((1U<<USB_EP4_CMD_INT_LEN)-1)<<USB_EP4_CMD_INT_POS)
#define USB_EP4_CMD_INT_UMSK                                    (~(((1U<<USB_EP4_CMD_INT_LEN)-1)<<USB_EP4_CMD_INT_POS))
#define USB_EP4_DONE_INT                                        USB_EP4_DONE_INT
#define USB_EP4_DONE_INT_POS                                    (17U)
#define USB_EP4_DONE_INT_LEN                                    (1U)
#define USB_EP4_DONE_INT_MSK                                    (((1U<<USB_EP4_DONE_INT_LEN)-1)<<USB_EP4_DONE_INT_POS)
#define USB_EP4_DONE_INT_UMSK                                   (~(((1U<<USB_EP4_DONE_INT_LEN)-1)<<USB_EP4_DONE_INT_POS))
#define USB_EP5_CMD_INT                                         USB_EP5_CMD_INT
#define USB_EP5_CMD_INT_POS                                     (18U)
#define USB_EP5_CMD_INT_LEN                                     (1U)
#define USB_EP5_CMD_INT_MSK                                     (((1U<<USB_EP5_CMD_INT_LEN)-1)<<USB_EP5_CMD_INT_POS)
#define USB_EP5_CMD_INT_UMSK                                    (~(((1U<<USB_EP5_CMD_INT_LEN)-1)<<USB_EP5_CMD_INT_POS))
#define USB_EP5_DONE_INT                                        USB_EP5_DONE_INT
#define USB_EP5_DONE_INT_POS                                    (19U)
#define USB_EP5_DONE_INT_LEN                                    (1U)
#define USB_EP5_DONE_INT_MSK                                    (((1U<<USB_EP5_DONE_INT_LEN)-1)<<USB_EP5_DONE_INT_POS)
#define USB_EP5_DONE_INT_UMSK                                   (~(((1U<<USB_EP5_DONE_INT_LEN)-1)<<USB_EP5_DONE_INT_POS))
#define USB_EP6_CMD_INT                                         USB_EP6_CMD_INT
#define USB_EP6_CMD_INT_POS                                     (20U)
#define USB_EP6_CMD_INT_LEN                                     (1U)
#define USB_EP6_CMD_INT_MSK                                     (((1U<<USB_EP6_CMD_INT_LEN)-1)<<USB_EP6_CMD_INT_POS)
#define USB_EP6_CMD_INT_UMSK                                    (~(((1U<<USB_EP6_CMD_INT_LEN)-1)<<USB_EP6_CMD_INT_POS))
#define USB_EP6_DONE_INT                                        USB_EP6_DONE_INT
#define USB_EP6_DONE_INT_POS                                    (21U)
#define USB_EP6_DONE_INT_LEN                                    (1U)
#define USB_EP6_DONE_INT_MSK                                    (((1U<<USB_EP6_DONE_INT_LEN)-1)<<USB_EP6_DONE_INT_POS)
#define USB_EP6_DONE_INT_UMSK                                   (~(((1U<<USB_EP6_DONE_INT_LEN)-1)<<USB_EP6_DONE_INT_POS))
#define USB_EP7_CMD_INT                                         USB_EP7_CMD_INT
#define USB_EP7_CMD_INT_POS                                     (22U)
#define USB_EP7_CMD_INT_LEN                                     (1U)
#define USB_EP7_CMD_INT_MSK                                     (((1U<<USB_EP7_CMD_INT_LEN)-1)<<USB_EP7_CMD_INT_POS)
#define USB_EP7_CMD_INT_UMSK                                    (~(((1U<<USB_EP7_CMD_INT_LEN)-1)<<USB_EP7_CMD_INT_POS))
#define USB_EP7_DONE_INT                                        USB_EP7_DONE_INT
#define USB_EP7_DONE_INT_POS                                    (23U)
#define USB_EP7_DONE_INT_LEN                                    (1U)
#define USB_EP7_DONE_INT_MSK                                    (((1U<<USB_EP7_DONE_INT_LEN)-1)<<USB_EP7_DONE_INT_POS)
#define USB_EP7_DONE_INT_UMSK                                   (~(((1U<<USB_EP7_DONE_INT_LEN)-1)<<USB_EP7_DONE_INT_POS))
#define USB_REND_INT                                            USB_REND_INT
#define USB_REND_INT_POS                                        (27U)
#define USB_REND_INT_LEN                                        (1U)
#define USB_REND_INT_MSK                                        (((1U<<USB_REND_INT_LEN)-1)<<USB_REND_INT_POS)
#define USB_REND_INT_UMSK                                       (~(((1U<<USB_REND_INT_LEN)-1)<<USB_REND_INT_POS))
#define USB_LPM_WKUP_INT                                        USB_LPM_WKUP_INT
#define USB_LPM_WKUP_INT_POS                                    (28U)
#define USB_LPM_WKUP_INT_LEN                                    (1U)
#define USB_LPM_WKUP_INT_MSK                                    (((1U<<USB_LPM_WKUP_INT_LEN)-1)<<USB_LPM_WKUP_INT_POS)
#define USB_LPM_WKUP_INT_UMSK                                   (~(((1U<<USB_LPM_WKUP_INT_LEN)-1)<<USB_LPM_WKUP_INT_POS))
#define USB_LPM_PKT_INT                                         USB_LPM_PKT_INT
#define USB_LPM_PKT_INT_POS                                     (29U)
#define USB_LPM_PKT_INT_LEN                                     (1U)
#define USB_LPM_PKT_INT_MSK                                     (((1U<<USB_LPM_PKT_INT_LEN)-1)<<USB_LPM_PKT_INT_POS)
#define USB_LPM_PKT_INT_UMSK                                    (~(((1U<<USB_LPM_PKT_INT_LEN)-1)<<USB_LPM_PKT_INT_POS))
#define USB_SOF_3MS_INT                                         USB_SOF_3MS_INT
#define USB_SOF_3MS_INT_POS                                     (30U)
#define USB_SOF_3MS_INT_LEN                                     (1U)
#define USB_SOF_3MS_INT_MSK                                     (((1U<<USB_SOF_3MS_INT_LEN)-1)<<USB_SOF_3MS_INT_POS)
#define USB_SOF_3MS_INT_UMSK                                    (~(((1U<<USB_SOF_3MS_INT_LEN)-1)<<USB_SOF_3MS_INT_POS))
#define USB_ERR_INT                                             USB_ERR_INT
#define USB_ERR_INT_POS                                         (31U)
#define USB_ERR_INT_LEN                                         (1U)
#define USB_ERR_INT_MSK                                         (((1U<<USB_ERR_INT_LEN)-1)<<USB_ERR_INT_POS)
#define USB_ERR_INT_UMSK                                        (~(((1U<<USB_ERR_INT_LEN)-1)<<USB_ERR_INT_POS))

/* 0x28 : USB interrupt mask */
#define USB_INT_MASK_OFFSET                                     (0x28)
#define USB_CR_SOF_MASK                                         USB_CR_SOF_MASK
#define USB_CR_SOF_MASK_POS                                     (0U)
#define USB_CR_SOF_MASK_LEN                                     (1U)
#define USB_CR_SOF_MASK_MSK                                     (((1U<<USB_CR_SOF_MASK_LEN)-1)<<USB_CR_SOF_MASK_POS)
#define USB_CR_SOF_MASK_UMSK                                    (~(((1U<<USB_CR_SOF_MASK_LEN)-1)<<USB_CR_SOF_MASK_POS))
#define USB_CR_USB_RESET_MASK                                   USB_CR_USB_RESET_MASK
#define USB_CR_USB_RESET_MASK_POS                               (1U)
#define USB_CR_USB_RESET_MASK_LEN                               (1U)
#define USB_CR_USB_RESET_MASK_MSK                               (((1U<<USB_CR_USB_RESET_MASK_LEN)-1)<<USB_CR_USB_RESET_MASK_POS)
#define USB_CR_USB_RESET_MASK_UMSK                              (~(((1U<<USB_CR_USB_RESET_MASK_LEN)-1)<<USB_CR_USB_RESET_MASK_POS))
#define USB_CR_VBUS_TGL_MASK                                    USB_CR_VBUS_TGL_MASK
#define USB_CR_VBUS_TGL_MASK_POS                                (2U)
#define USB_CR_VBUS_TGL_MASK_LEN                                (1U)
#define USB_CR_VBUS_TGL_MASK_MSK                                (((1U<<USB_CR_VBUS_TGL_MASK_LEN)-1)<<USB_CR_VBUS_TGL_MASK_POS)
#define USB_CR_VBUS_TGL_MASK_UMSK                               (~(((1U<<USB_CR_VBUS_TGL_MASK_LEN)-1)<<USB_CR_VBUS_TGL_MASK_POS))
#define USB_CR_GET_DCT_CMD_MASK                                 USB_CR_GET_DCT_CMD_MASK
#define USB_CR_GET_DCT_CMD_MASK_POS                             (3U)
#define USB_CR_GET_DCT_CMD_MASK_LEN                             (1U)
#define USB_CR_GET_DCT_CMD_MASK_MSK                             (((1U<<USB_CR_GET_DCT_CMD_MASK_LEN)-1)<<USB_CR_GET_DCT_CMD_MASK_POS)
#define USB_CR_GET_DCT_CMD_MASK_UMSK                            (~(((1U<<USB_CR_GET_DCT_CMD_MASK_LEN)-1)<<USB_CR_GET_DCT_CMD_MASK_POS))
#define USB_CR_EP0_SETUP_CMD_MASK                               USB_CR_EP0_SETUP_CMD_MASK
#define USB_CR_EP0_SETUP_CMD_MASK_POS                           (4U)
#define USB_CR_EP0_SETUP_CMD_MASK_LEN                           (1U)
#define USB_CR_EP0_SETUP_CMD_MASK_MSK                           (((1U<<USB_CR_EP0_SETUP_CMD_MASK_LEN)-1)<<USB_CR_EP0_SETUP_CMD_MASK_POS)
#define USB_CR_EP0_SETUP_CMD_MASK_UMSK                          (~(((1U<<USB_CR_EP0_SETUP_CMD_MASK_LEN)-1)<<USB_CR_EP0_SETUP_CMD_MASK_POS))
#define USB_CR_EP0_SETUP_DONE_MASK                              USB_CR_EP0_SETUP_DONE_MASK
#define USB_CR_EP0_SETUP_DONE_MASK_POS                          (5U)
#define USB_CR_EP0_SETUP_DONE_MASK_LEN                          (1U)
#define USB_CR_EP0_SETUP_DONE_MASK_MSK                          (((1U<<USB_CR_EP0_SETUP_DONE_MASK_LEN)-1)<<USB_CR_EP0_SETUP_DONE_MASK_POS)
#define USB_CR_EP0_SETUP_DONE_MASK_UMSK                         (~(((1U<<USB_CR_EP0_SETUP_DONE_MASK_LEN)-1)<<USB_CR_EP0_SETUP_DONE_MASK_POS))
#define USB_CR_EP0_IN_CMD_MASK                                  USB_CR_EP0_IN_CMD_MASK
#define USB_CR_EP0_IN_CMD_MASK_POS                              (6U)
#define USB_CR_EP0_IN_CMD_MASK_LEN                              (1U)
#define USB_CR_EP0_IN_CMD_MASK_MSK                              (((1U<<USB_CR_EP0_IN_CMD_MASK_LEN)-1)<<USB_CR_EP0_IN_CMD_MASK_POS)
#define USB_CR_EP0_IN_CMD_MASK_UMSK                             (~(((1U<<USB_CR_EP0_IN_CMD_MASK_LEN)-1)<<USB_CR_EP0_IN_CMD_MASK_POS))
#define USB_CR_EP0_IN_DONE_MASK                                 USB_CR_EP0_IN_DONE_MASK
#define USB_CR_EP0_IN_DONE_MASK_POS                             (7U)
#define USB_CR_EP0_IN_DONE_MASK_LEN                             (1U)
#define USB_CR_EP0_IN_DONE_MASK_MSK                             (((1U<<USB_CR_EP0_IN_DONE_MASK_LEN)-1)<<USB_CR_EP0_IN_DONE_MASK_POS)
#define USB_CR_EP0_IN_DONE_MASK_UMSK                            (~(((1U<<USB_CR_EP0_IN_DONE_MASK_LEN)-1)<<USB_CR_EP0_IN_DONE_MASK_POS))
#define USB_CR_EP0_OUT_CMD_MASK                                 USB_CR_EP0_OUT_CMD_MASK
#define USB_CR_EP0_OUT_CMD_MASK_POS                             (8U)
#define USB_CR_EP0_OUT_CMD_MASK_LEN                             (1U)
#define USB_CR_EP0_OUT_CMD_MASK_MSK                             (((1U<<USB_CR_EP0_OUT_CMD_MASK_LEN)-1)<<USB_CR_EP0_OUT_CMD_MASK_POS)
#define USB_CR_EP0_OUT_CMD_MASK_UMSK                            (~(((1U<<USB_CR_EP0_OUT_CMD_MASK_LEN)-1)<<USB_CR_EP0_OUT_CMD_MASK_POS))
#define USB_CR_EP0_OUT_DONE_MASK                                USB_CR_EP0_OUT_DONE_MASK
#define USB_CR_EP0_OUT_DONE_MASK_POS                            (9U)
#define USB_CR_EP0_OUT_DONE_MASK_LEN                            (1U)
#define USB_CR_EP0_OUT_DONE_MASK_MSK                            (((1U<<USB_CR_EP0_OUT_DONE_MASK_LEN)-1)<<USB_CR_EP0_OUT_DONE_MASK_POS)
#define USB_CR_EP0_OUT_DONE_MASK_UMSK                           (~(((1U<<USB_CR_EP0_OUT_DONE_MASK_LEN)-1)<<USB_CR_EP0_OUT_DONE_MASK_POS))
#define USB_CR_EP1_CMD_MASK                                     USB_CR_EP1_CMD_MASK
#define USB_CR_EP1_CMD_MASK_POS                                 (10U)
#define USB_CR_EP1_CMD_MASK_LEN                                 (1U)
#define USB_CR_EP1_CMD_MASK_MSK                                 (((1U<<USB_CR_EP1_CMD_MASK_LEN)-1)<<USB_CR_EP1_CMD_MASK_POS)
#define USB_CR_EP1_CMD_MASK_UMSK                                (~(((1U<<USB_CR_EP1_CMD_MASK_LEN)-1)<<USB_CR_EP1_CMD_MASK_POS))
#define USB_CR_EP1_DONE_MASK                                    USB_CR_EP1_DONE_MASK
#define USB_CR_EP1_DONE_MASK_POS                                (11U)
#define USB_CR_EP1_DONE_MASK_LEN                                (1U)
#define USB_CR_EP1_DONE_MASK_MSK                                (((1U<<USB_CR_EP1_DONE_MASK_LEN)-1)<<USB_CR_EP1_DONE_MASK_POS)
#define USB_CR_EP1_DONE_MASK_UMSK                               (~(((1U<<USB_CR_EP1_DONE_MASK_LEN)-1)<<USB_CR_EP1_DONE_MASK_POS))
#define USB_CR_EP2_CMD_MASK                                     USB_CR_EP2_CMD_MASK
#define USB_CR_EP2_CMD_MASK_POS                                 (12U)
#define USB_CR_EP2_CMD_MASK_LEN                                 (1U)
#define USB_CR_EP2_CMD_MASK_MSK                                 (((1U<<USB_CR_EP2_CMD_MASK_LEN)-1)<<USB_CR_EP2_CMD_MASK_POS)
#define USB_CR_EP2_CMD_MASK_UMSK                                (~(((1U<<USB_CR_EP2_CMD_MASK_LEN)-1)<<USB_CR_EP2_CMD_MASK_POS))
#define USB_CR_EP2_DONE_MASK                                    USB_CR_EP2_DONE_MASK
#define USB_CR_EP2_DONE_MASK_POS                                (13U)
#define USB_CR_EP2_DONE_MASK_LEN                                (1U)
#define USB_CR_EP2_DONE_MASK_MSK                                (((1U<<USB_CR_EP2_DONE_MASK_LEN)-1)<<USB_CR_EP2_DONE_MASK_POS)
#define USB_CR_EP2_DONE_MASK_UMSK                               (~(((1U<<USB_CR_EP2_DONE_MASK_LEN)-1)<<USB_CR_EP2_DONE_MASK_POS))
#define USB_CR_EP3_CMD_MASK                                     USB_CR_EP3_CMD_MASK
#define USB_CR_EP3_CMD_MASK_POS                                 (14U)
#define USB_CR_EP3_CMD_MASK_LEN                                 (1U)
#define USB_CR_EP3_CMD_MASK_MSK                                 (((1U<<USB_CR_EP3_CMD_MASK_LEN)-1)<<USB_CR_EP3_CMD_MASK_POS)
#define USB_CR_EP3_CMD_MASK_UMSK                                (~(((1U<<USB_CR_EP3_CMD_MASK_LEN)-1)<<USB_CR_EP3_CMD_MASK_POS))
#define USB_CR_EP3_DONE_MASK                                    USB_CR_EP3_DONE_MASK
#define USB_CR_EP3_DONE_MASK_POS                                (15U)
#define USB_CR_EP3_DONE_MASK_LEN                                (1U)
#define USB_CR_EP3_DONE_MASK_MSK                                (((1U<<USB_CR_EP3_DONE_MASK_LEN)-1)<<USB_CR_EP3_DONE_MASK_POS)
#define USB_CR_EP3_DONE_MASK_UMSK                               (~(((1U<<USB_CR_EP3_DONE_MASK_LEN)-1)<<USB_CR_EP3_DONE_MASK_POS))
#define USB_CR_EP4_CMD_MASK                                     USB_CR_EP4_CMD_MASK
#define USB_CR_EP4_CMD_MASK_POS                                 (16U)
#define USB_CR_EP4_CMD_MASK_LEN                                 (1U)
#define USB_CR_EP4_CMD_MASK_MSK                                 (((1U<<USB_CR_EP4_CMD_MASK_LEN)-1)<<USB_CR_EP4_CMD_MASK_POS)
#define USB_CR_EP4_CMD_MASK_UMSK                                (~(((1U<<USB_CR_EP4_CMD_MASK_LEN)-1)<<USB_CR_EP4_CMD_MASK_POS))
#define USB_CR_EP4_DONE_MASK                                    USB_CR_EP4_DONE_MASK
#define USB_CR_EP4_DONE_MASK_POS                                (17U)
#define USB_CR_EP4_DONE_MASK_LEN                                (1U)
#define USB_CR_EP4_DONE_MASK_MSK                                (((1U<<USB_CR_EP4_DONE_MASK_LEN)-1)<<USB_CR_EP4_DONE_MASK_POS)
#define USB_CR_EP4_DONE_MASK_UMSK                               (~(((1U<<USB_CR_EP4_DONE_MASK_LEN)-1)<<USB_CR_EP4_DONE_MASK_POS))
#define USB_CR_EP5_CMD_MASK                                     USB_CR_EP5_CMD_MASK
#define USB_CR_EP5_CMD_MASK_POS                                 (18U)
#define USB_CR_EP5_CMD_MASK_LEN                                 (1U)
#define USB_CR_EP5_CMD_MASK_MSK                                 (((1U<<USB_CR_EP5_CMD_MASK_LEN)-1)<<USB_CR_EP5_CMD_MASK_POS)
#define USB_CR_EP5_CMD_MASK_UMSK                                (~(((1U<<USB_CR_EP5_CMD_MASK_LEN)-1)<<USB_CR_EP5_CMD_MASK_POS))
#define USB_CR_EP5_DONE_MASK                                    USB_CR_EP5_DONE_MASK
#define USB_CR_EP5_DONE_MASK_POS                                (19U)
#define USB_CR_EP5_DONE_MASK_LEN                                (1U)
#define USB_CR_EP5_DONE_MASK_MSK                                (((1U<<USB_CR_EP5_DONE_MASK_LEN)-1)<<USB_CR_EP5_DONE_MASK_POS)
#define USB_CR_EP5_DONE_MASK_UMSK                               (~(((1U<<USB_CR_EP5_DONE_MASK_LEN)-1)<<USB_CR_EP5_DONE_MASK_POS))
#define USB_CR_EP6_CMD_MASK                                     USB_CR_EP6_CMD_MASK
#define USB_CR_EP6_CMD_MASK_POS                                 (20U)
#define USB_CR_EP6_CMD_MASK_LEN                                 (1U)
#define USB_CR_EP6_CMD_MASK_MSK                                 (((1U<<USB_CR_EP6_CMD_MASK_LEN)-1)<<USB_CR_EP6_CMD_MASK_POS)
#define USB_CR_EP6_CMD_MASK_UMSK                                (~(((1U<<USB_CR_EP6_CMD_MASK_LEN)-1)<<USB_CR_EP6_CMD_MASK_POS))
#define USB_CR_EP6_DONE_MASK                                    USB_CR_EP6_DONE_MASK
#define USB_CR_EP6_DONE_MASK_POS                                (21U)
#define USB_CR_EP6_DONE_MASK_LEN                                (1U)
#define USB_CR_EP6_DONE_MASK_MSK                                (((1U<<USB_CR_EP6_DONE_MASK_LEN)-1)<<USB_CR_EP6_DONE_MASK_POS)
#define USB_CR_EP6_DONE_MASK_UMSK                               (~(((1U<<USB_CR_EP6_DONE_MASK_LEN)-1)<<USB_CR_EP6_DONE_MASK_POS))
#define USB_CR_EP7_CMD_MASK                                     USB_CR_EP7_CMD_MASK
#define USB_CR_EP7_CMD_MASK_POS                                 (22U)
#define USB_CR_EP7_CMD_MASK_LEN                                 (1U)
#define USB_CR_EP7_CMD_MASK_MSK                                 (((1U<<USB_CR_EP7_CMD_MASK_LEN)-1)<<USB_CR_EP7_CMD_MASK_POS)
#define USB_CR_EP7_CMD_MASK_UMSK                                (~(((1U<<USB_CR_EP7_CMD_MASK_LEN)-1)<<USB_CR_EP7_CMD_MASK_POS))
#define USB_CR_EP7_DONE_MASK                                    USB_CR_EP7_DONE_MASK
#define USB_CR_EP7_DONE_MASK_POS                                (23U)
#define USB_CR_EP7_DONE_MASK_LEN                                (1U)
#define USB_CR_EP7_DONE_MASK_MSK                                (((1U<<USB_CR_EP7_DONE_MASK_LEN)-1)<<USB_CR_EP7_DONE_MASK_POS)
#define USB_CR_EP7_DONE_MASK_UMSK                               (~(((1U<<USB_CR_EP7_DONE_MASK_LEN)-1)<<USB_CR_EP7_DONE_MASK_POS))
#define USB_CR_USB_REND_MASK                                    USB_CR_USB_REND_MASK
#define USB_CR_USB_REND_MASK_POS                                (27U)
#define USB_CR_USB_REND_MASK_LEN                                (1U)
#define USB_CR_USB_REND_MASK_MSK                                (((1U<<USB_CR_USB_REND_MASK_LEN)-1)<<USB_CR_USB_REND_MASK_POS)
#define USB_CR_USB_REND_MASK_UMSK                               (~(((1U<<USB_CR_USB_REND_MASK_LEN)-1)<<USB_CR_USB_REND_MASK_POS))
#define USB_CR_LPM_WKUP_MASK                                    USB_CR_LPM_WKUP_MASK
#define USB_CR_LPM_WKUP_MASK_POS                                (28U)
#define USB_CR_LPM_WKUP_MASK_LEN                                (1U)
#define USB_CR_LPM_WKUP_MASK_MSK                                (((1U<<USB_CR_LPM_WKUP_MASK_LEN)-1)<<USB_CR_LPM_WKUP_MASK_POS)
#define USB_CR_LPM_WKUP_MASK_UMSK                               (~(((1U<<USB_CR_LPM_WKUP_MASK_LEN)-1)<<USB_CR_LPM_WKUP_MASK_POS))
#define USB_CR_LPM_PKT_MASK                                     USB_CR_LPM_PKT_MASK
#define USB_CR_LPM_PKT_MASK_POS                                 (29U)
#define USB_CR_LPM_PKT_MASK_LEN                                 (1U)
#define USB_CR_LPM_PKT_MASK_MSK                                 (((1U<<USB_CR_LPM_PKT_MASK_LEN)-1)<<USB_CR_LPM_PKT_MASK_POS)
#define USB_CR_LPM_PKT_MASK_UMSK                                (~(((1U<<USB_CR_LPM_PKT_MASK_LEN)-1)<<USB_CR_LPM_PKT_MASK_POS))
#define USB_CR_SOF_3MS_MASK                                     USB_CR_SOF_3MS_MASK
#define USB_CR_SOF_3MS_MASK_POS                                 (30U)
#define USB_CR_SOF_3MS_MASK_LEN                                 (1U)
#define USB_CR_SOF_3MS_MASK_MSK                                 (((1U<<USB_CR_SOF_3MS_MASK_LEN)-1)<<USB_CR_SOF_3MS_MASK_POS)
#define USB_CR_SOF_3MS_MASK_UMSK                                (~(((1U<<USB_CR_SOF_3MS_MASK_LEN)-1)<<USB_CR_SOF_3MS_MASK_POS))
#define USB_CR_USB_ERR_MASK                                     USB_CR_USB_ERR_MASK
#define USB_CR_USB_ERR_MASK_POS                                 (31U)
#define USB_CR_USB_ERR_MASK_LEN                                 (1U)
#define USB_CR_USB_ERR_MASK_MSK                                 (((1U<<USB_CR_USB_ERR_MASK_LEN)-1)<<USB_CR_USB_ERR_MASK_POS)
#define USB_CR_USB_ERR_MASK_UMSK                                (~(((1U<<USB_CR_USB_ERR_MASK_LEN)-1)<<USB_CR_USB_ERR_MASK_POS))

/* 0x2C : USB interrupt clear */
#define USB_INT_CLEAR_OFFSET                                    (0x2C)
#define USB_CR_SOF_CLR                                          USB_CR_SOF_CLR
#define USB_CR_SOF_CLR_POS                                      (0U)
#define USB_CR_SOF_CLR_LEN                                      (1U)
#define USB_CR_SOF_CLR_MSK                                      (((1U<<USB_CR_SOF_CLR_LEN)-1)<<USB_CR_SOF_CLR_POS)
#define USB_CR_SOF_CLR_UMSK                                     (~(((1U<<USB_CR_SOF_CLR_LEN)-1)<<USB_CR_SOF_CLR_POS))
#define USB_CR_USB_RESET_CLR                                    USB_CR_USB_RESET_CLR
#define USB_CR_USB_RESET_CLR_POS                                (1U)
#define USB_CR_USB_RESET_CLR_LEN                                (1U)
#define USB_CR_USB_RESET_CLR_MSK                                (((1U<<USB_CR_USB_RESET_CLR_LEN)-1)<<USB_CR_USB_RESET_CLR_POS)
#define USB_CR_USB_RESET_CLR_UMSK                               (~(((1U<<USB_CR_USB_RESET_CLR_LEN)-1)<<USB_CR_USB_RESET_CLR_POS))
#define USB_CR_VBUS_TGL_CLR                                     USB_CR_VBUS_TGL_CLR
#define USB_CR_VBUS_TGL_CLR_POS                                 (2U)
#define USB_CR_VBUS_TGL_CLR_LEN                                 (1U)
#define USB_CR_VBUS_TGL_CLR_MSK                                 (((1U<<USB_CR_VBUS_TGL_CLR_LEN)-1)<<USB_CR_VBUS_TGL_CLR_POS)
#define USB_CR_VBUS_TGL_CLR_UMSK                                (~(((1U<<USB_CR_VBUS_TGL_CLR_LEN)-1)<<USB_CR_VBUS_TGL_CLR_POS))
#define USB_CR_GET_DCT_CMD_CLR                                  USB_CR_GET_DCT_CMD_CLR
#define USB_CR_GET_DCT_CMD_CLR_POS                              (3U)
#define USB_CR_GET_DCT_CMD_CLR_LEN                              (1U)
#define USB_CR_GET_DCT_CMD_CLR_MSK                              (((1U<<USB_CR_GET_DCT_CMD_CLR_LEN)-1)<<USB_CR_GET_DCT_CMD_CLR_POS)
#define USB_CR_GET_DCT_CMD_CLR_UMSK                             (~(((1U<<USB_CR_GET_DCT_CMD_CLR_LEN)-1)<<USB_CR_GET_DCT_CMD_CLR_POS))
#define USB_CR_EP0_SETUP_CMD_CLR                                USB_CR_EP0_SETUP_CMD_CLR
#define USB_CR_EP0_SETUP_CMD_CLR_POS                            (4U)
#define USB_CR_EP0_SETUP_CMD_CLR_LEN                            (1U)
#define USB_CR_EP0_SETUP_CMD_CLR_MSK                            (((1U<<USB_CR_EP0_SETUP_CMD_CLR_LEN)-1)<<USB_CR_EP0_SETUP_CMD_CLR_POS)
#define USB_CR_EP0_SETUP_CMD_CLR_UMSK                           (~(((1U<<USB_CR_EP0_SETUP_CMD_CLR_LEN)-1)<<USB_CR_EP0_SETUP_CMD_CLR_POS))
#define USB_CR_EP0_SETUP_DONE_CLR                               USB_CR_EP0_SETUP_DONE_CLR
#define USB_CR_EP0_SETUP_DONE_CLR_POS                           (5U)
#define USB_CR_EP0_SETUP_DONE_CLR_LEN                           (1U)
#define USB_CR_EP0_SETUP_DONE_CLR_MSK                           (((1U<<USB_CR_EP0_SETUP_DONE_CLR_LEN)-1)<<USB_CR_EP0_SETUP_DONE_CLR_POS)
#define USB_CR_EP0_SETUP_DONE_CLR_UMSK                          (~(((1U<<USB_CR_EP0_SETUP_DONE_CLR_LEN)-1)<<USB_CR_EP0_SETUP_DONE_CLR_POS))
#define USB_CR_EP0_IN_CMD_CLR                                   USB_CR_EP0_IN_CMD_CLR
#define USB_CR_EP0_IN_CMD_CLR_POS                               (6U)
#define USB_CR_EP0_IN_CMD_CLR_LEN                               (1U)
#define USB_CR_EP0_IN_CMD_CLR_MSK                               (((1U<<USB_CR_EP0_IN_CMD_CLR_LEN)-1)<<USB_CR_EP0_IN_CMD_CLR_POS)
#define USB_CR_EP0_IN_CMD_CLR_UMSK                              (~(((1U<<USB_CR_EP0_IN_CMD_CLR_LEN)-1)<<USB_CR_EP0_IN_CMD_CLR_POS))
#define USB_CR_EP0_IN_DONE_CLR                                  USB_CR_EP0_IN_DONE_CLR
#define USB_CR_EP0_IN_DONE_CLR_POS                              (7U)
#define USB_CR_EP0_IN_DONE_CLR_LEN                              (1U)
#define USB_CR_EP0_IN_DONE_CLR_MSK                              (((1U<<USB_CR_EP0_IN_DONE_CLR_LEN)-1)<<USB_CR_EP0_IN_DONE_CLR_POS)
#define USB_CR_EP0_IN_DONE_CLR_UMSK                             (~(((1U<<USB_CR_EP0_IN_DONE_CLR_LEN)-1)<<USB_CR_EP0_IN_DONE_CLR_POS))
#define USB_CR_EP0_OUT_CMD_CLR                                  USB_CR_EP0_OUT_CMD_CLR
#define USB_CR_EP0_OUT_CMD_CLR_POS                              (8U)
#define USB_CR_EP0_OUT_CMD_CLR_LEN                              (1U)
#define USB_CR_EP0_OUT_CMD_CLR_MSK                              (((1U<<USB_CR_EP0_OUT_CMD_CLR_LEN)-1)<<USB_CR_EP0_OUT_CMD_CLR_POS)
#define USB_CR_EP0_OUT_CMD_CLR_UMSK                             (~(((1U<<USB_CR_EP0_OUT_CMD_CLR_LEN)-1)<<USB_CR_EP0_OUT_CMD_CLR_POS))
#define USB_CR_EP0_OUT_DONE_CLR                                 USB_CR_EP0_OUT_DONE_CLR
#define USB_CR_EP0_OUT_DONE_CLR_POS                             (9U)
#define USB_CR_EP0_OUT_DONE_CLR_LEN                             (1U)
#define USB_CR_EP0_OUT_DONE_CLR_MSK                             (((1U<<USB_CR_EP0_OUT_DONE_CLR_LEN)-1)<<USB_CR_EP0_OUT_DONE_CLR_POS)
#define USB_CR_EP0_OUT_DONE_CLR_UMSK                            (~(((1U<<USB_CR_EP0_OUT_DONE_CLR_LEN)-1)<<USB_CR_EP0_OUT_DONE_CLR_POS))
#define USB_CR_EP1_CMD_CLR                                      USB_CR_EP1_CMD_CLR
#define USB_CR_EP1_CMD_CLR_POS                                  (10U)
#define USB_CR_EP1_CMD_CLR_LEN                                  (1U)
#define USB_CR_EP1_CMD_CLR_MSK                                  (((1U<<USB_CR_EP1_CMD_CLR_LEN)-1)<<USB_CR_EP1_CMD_CLR_POS)
#define USB_CR_EP1_CMD_CLR_UMSK                                 (~(((1U<<USB_CR_EP1_CMD_CLR_LEN)-1)<<USB_CR_EP1_CMD_CLR_POS))
#define USB_CR_EP1_DONE_CLR                                     USB_CR_EP1_DONE_CLR
#define USB_CR_EP1_DONE_CLR_POS                                 (11U)
#define USB_CR_EP1_DONE_CLR_LEN                                 (1U)
#define USB_CR_EP1_DONE_CLR_MSK                                 (((1U<<USB_CR_EP1_DONE_CLR_LEN)-1)<<USB_CR_EP1_DONE_CLR_POS)
#define USB_CR_EP1_DONE_CLR_UMSK                                (~(((1U<<USB_CR_EP1_DONE_CLR_LEN)-1)<<USB_CR_EP1_DONE_CLR_POS))
#define USB_CR_EP2_CMD_CLR                                      USB_CR_EP2_CMD_CLR
#define USB_CR_EP2_CMD_CLR_POS                                  (12U)
#define USB_CR_EP2_CMD_CLR_LEN                                  (1U)
#define USB_CR_EP2_CMD_CLR_MSK                                  (((1U<<USB_CR_EP2_CMD_CLR_LEN)-1)<<USB_CR_EP2_CMD_CLR_POS)
#define USB_CR_EP2_CMD_CLR_UMSK                                 (~(((1U<<USB_CR_EP2_CMD_CLR_LEN)-1)<<USB_CR_EP2_CMD_CLR_POS))
#define USB_CR_EP2_DONE_CLR                                     USB_CR_EP2_DONE_CLR
#define USB_CR_EP2_DONE_CLR_POS                                 (13U)
#define USB_CR_EP2_DONE_CLR_LEN                                 (1U)
#define USB_CR_EP2_DONE_CLR_MSK                                 (((1U<<USB_CR_EP2_DONE_CLR_LEN)-1)<<USB_CR_EP2_DONE_CLR_POS)
#define USB_CR_EP2_DONE_CLR_UMSK                                (~(((1U<<USB_CR_EP2_DONE_CLR_LEN)-1)<<USB_CR_EP2_DONE_CLR_POS))
#define USB_CR_EP3_CMD_CLR                                      USB_CR_EP3_CMD_CLR
#define USB_CR_EP3_CMD_CLR_POS                                  (14U)
#define USB_CR_EP3_CMD_CLR_LEN                                  (1U)
#define USB_CR_EP3_CMD_CLR_MSK                                  (((1U<<USB_CR_EP3_CMD_CLR_LEN)-1)<<USB_CR_EP3_CMD_CLR_POS)
#define USB_CR_EP3_CMD_CLR_UMSK                                 (~(((1U<<USB_CR_EP3_CMD_CLR_LEN)-1)<<USB_CR_EP3_CMD_CLR_POS))
#define USB_CR_EP3_DONE_CLR                                     USB_CR_EP3_DONE_CLR
#define USB_CR_EP3_DONE_CLR_POS                                 (15U)
#define USB_CR_EP3_DONE_CLR_LEN                                 (1U)
#define USB_CR_EP3_DONE_CLR_MSK                                 (((1U<<USB_CR_EP3_DONE_CLR_LEN)-1)<<USB_CR_EP3_DONE_CLR_POS)
#define USB_CR_EP3_DONE_CLR_UMSK                                (~(((1U<<USB_CR_EP3_DONE_CLR_LEN)-1)<<USB_CR_EP3_DONE_CLR_POS))
#define USB_CR_EP4_CMD_CLR                                      USB_CR_EP4_CMD_CLR
#define USB_CR_EP4_CMD_CLR_POS                                  (16U)
#define USB_CR_EP4_CMD_CLR_LEN                                  (1U)
#define USB_CR_EP4_CMD_CLR_MSK                                  (((1U<<USB_CR_EP4_CMD_CLR_LEN)-1)<<USB_CR_EP4_CMD_CLR_POS)
#define USB_CR_EP4_CMD_CLR_UMSK                                 (~(((1U<<USB_CR_EP4_CMD_CLR_LEN)-1)<<USB_CR_EP4_CMD_CLR_POS))
#define USB_CR_EP4_DONE_CLR                                     USB_CR_EP4_DONE_CLR
#define USB_CR_EP4_DONE_CLR_POS                                 (17U)
#define USB_CR_EP4_DONE_CLR_LEN                                 (1U)
#define USB_CR_EP4_DONE_CLR_MSK                                 (((1U<<USB_CR_EP4_DONE_CLR_LEN)-1)<<USB_CR_EP4_DONE_CLR_POS)
#define USB_CR_EP4_DONE_CLR_UMSK                                (~(((1U<<USB_CR_EP4_DONE_CLR_LEN)-1)<<USB_CR_EP4_DONE_CLR_POS))
#define USB_CR_EP5_CMD_CLR                                      USB_CR_EP5_CMD_CLR
#define USB_CR_EP5_CMD_CLR_POS                                  (18U)
#define USB_CR_EP5_CMD_CLR_LEN                                  (1U)
#define USB_CR_EP5_CMD_CLR_MSK                                  (((1U<<USB_CR_EP5_CMD_CLR_LEN)-1)<<USB_CR_EP5_CMD_CLR_POS)
#define USB_CR_EP5_CMD_CLR_UMSK                                 (~(((1U<<USB_CR_EP5_CMD_CLR_LEN)-1)<<USB_CR_EP5_CMD_CLR_POS))
#define USB_CR_EP5_DONE_CLR                                     USB_CR_EP5_DONE_CLR
#define USB_CR_EP5_DONE_CLR_POS                                 (19U)
#define USB_CR_EP5_DONE_CLR_LEN                                 (1U)
#define USB_CR_EP5_DONE_CLR_MSK                                 (((1U<<USB_CR_EP5_DONE_CLR_LEN)-1)<<USB_CR_EP5_DONE_CLR_POS)
#define USB_CR_EP5_DONE_CLR_UMSK                                (~(((1U<<USB_CR_EP5_DONE_CLR_LEN)-1)<<USB_CR_EP5_DONE_CLR_POS))
#define USB_CR_EP6_CMD_CLR                                      USB_CR_EP6_CMD_CLR
#define USB_CR_EP6_CMD_CLR_POS                                  (20U)
#define USB_CR_EP6_CMD_CLR_LEN                                  (1U)
#define USB_CR_EP6_CMD_CLR_MSK                                  (((1U<<USB_CR_EP6_CMD_CLR_LEN)-1)<<USB_CR_EP6_CMD_CLR_POS)
#define USB_CR_EP6_CMD_CLR_UMSK                                 (~(((1U<<USB_CR_EP6_CMD_CLR_LEN)-1)<<USB_CR_EP6_CMD_CLR_POS))
#define USB_CR_EP6_DONE_CLR                                     USB_CR_EP6_DONE_CLR
#define USB_CR_EP6_DONE_CLR_POS                                 (21U)
#define USB_CR_EP6_DONE_CLR_LEN                                 (1U)
#define USB_CR_EP6_DONE_CLR_MSK                                 (((1U<<USB_CR_EP6_DONE_CLR_LEN)-1)<<USB_CR_EP6_DONE_CLR_POS)
#define USB_CR_EP6_DONE_CLR_UMSK                                (~(((1U<<USB_CR_EP6_DONE_CLR_LEN)-1)<<USB_CR_EP6_DONE_CLR_POS))
#define USB_CR_EP7_CMD_CLR                                      USB_CR_EP7_CMD_CLR
#define USB_CR_EP7_CMD_CLR_POS                                  (22U)
#define USB_CR_EP7_CMD_CLR_LEN                                  (1U)
#define USB_CR_EP7_CMD_CLR_MSK                                  (((1U<<USB_CR_EP7_CMD_CLR_LEN)-1)<<USB_CR_EP7_CMD_CLR_POS)
#define USB_CR_EP7_CMD_CLR_UMSK                                 (~(((1U<<USB_CR_EP7_CMD_CLR_LEN)-1)<<USB_CR_EP7_CMD_CLR_POS))
#define USB_CR_EP7_DONE_CLR                                     USB_CR_EP7_DONE_CLR
#define USB_CR_EP7_DONE_CLR_POS                                 (23U)
#define USB_CR_EP7_DONE_CLR_LEN                                 (1U)
#define USB_CR_EP7_DONE_CLR_MSK                                 (((1U<<USB_CR_EP7_DONE_CLR_LEN)-1)<<USB_CR_EP7_DONE_CLR_POS)
#define USB_CR_EP7_DONE_CLR_UMSK                                (~(((1U<<USB_CR_EP7_DONE_CLR_LEN)-1)<<USB_CR_EP7_DONE_CLR_POS))
#define USB_CR_USB_REND_CLR                                     USB_CR_USB_REND_CLR
#define USB_CR_USB_REND_CLR_POS                                 (27U)
#define USB_CR_USB_REND_CLR_LEN                                 (1U)
#define USB_CR_USB_REND_CLR_MSK                                 (((1U<<USB_CR_USB_REND_CLR_LEN)-1)<<USB_CR_USB_REND_CLR_POS)
#define USB_CR_USB_REND_CLR_UMSK                                (~(((1U<<USB_CR_USB_REND_CLR_LEN)-1)<<USB_CR_USB_REND_CLR_POS))
#define USB_CR_LPM_WKUP_CLR                                     USB_CR_LPM_WKUP_CLR
#define USB_CR_LPM_WKUP_CLR_POS                                 (28U)
#define USB_CR_LPM_WKUP_CLR_LEN                                 (1U)
#define USB_CR_LPM_WKUP_CLR_MSK                                 (((1U<<USB_CR_LPM_WKUP_CLR_LEN)-1)<<USB_CR_LPM_WKUP_CLR_POS)
#define USB_CR_LPM_WKUP_CLR_UMSK                                (~(((1U<<USB_CR_LPM_WKUP_CLR_LEN)-1)<<USB_CR_LPM_WKUP_CLR_POS))
#define USB_CR_LPM_PKT_CLR                                      USB_CR_LPM_PKT_CLR
#define USB_CR_LPM_PKT_CLR_POS                                  (29U)
#define USB_CR_LPM_PKT_CLR_LEN                                  (1U)
#define USB_CR_LPM_PKT_CLR_MSK                                  (((1U<<USB_CR_LPM_PKT_CLR_LEN)-1)<<USB_CR_LPM_PKT_CLR_POS)
#define USB_CR_LPM_PKT_CLR_UMSK                                 (~(((1U<<USB_CR_LPM_PKT_CLR_LEN)-1)<<USB_CR_LPM_PKT_CLR_POS))
#define USB_CR_SOF_3MS_CLR                                      USB_CR_SOF_3MS_CLR
#define USB_CR_SOF_3MS_CLR_POS                                  (30U)
#define USB_CR_SOF_3MS_CLR_LEN                                  (1U)
#define USB_CR_SOF_3MS_CLR_MSK                                  (((1U<<USB_CR_SOF_3MS_CLR_LEN)-1)<<USB_CR_SOF_3MS_CLR_POS)
#define USB_CR_SOF_3MS_CLR_UMSK                                 (~(((1U<<USB_CR_SOF_3MS_CLR_LEN)-1)<<USB_CR_SOF_3MS_CLR_POS))
#define USB_CR_USB_ERR_CLR                                      USB_CR_USB_ERR_CLR
#define USB_CR_USB_ERR_CLR_POS                                  (31U)
#define USB_CR_USB_ERR_CLR_LEN                                  (1U)
#define USB_CR_USB_ERR_CLR_MSK                                  (((1U<<USB_CR_USB_ERR_CLR_LEN)-1)<<USB_CR_USB_ERR_CLR_POS)
#define USB_CR_USB_ERR_CLR_UMSK                                 (~(((1U<<USB_CR_USB_ERR_CLR_LEN)-1)<<USB_CR_USB_ERR_CLR_POS))

/* 0x40 : ep1_config */
#define USB_EP1_CONFIG_OFFSET                                   (0x40)
#define USB_CR_EP1_SIZE                                         USB_CR_EP1_SIZE
#define USB_CR_EP1_SIZE_POS                                     (0U)
#define USB_CR_EP1_SIZE_LEN                                     (11U)
#define USB_CR_EP1_SIZE_MSK                                     (((1U<<USB_CR_EP1_SIZE_LEN)-1)<<USB_CR_EP1_SIZE_POS)
#define USB_CR_EP1_SIZE_UMSK                                    (~(((1U<<USB_CR_EP1_SIZE_LEN)-1)<<USB_CR_EP1_SIZE_POS))
#define USB_CR_EP1_DIR                                          USB_CR_EP1_DIR
#define USB_CR_EP1_DIR_POS                                      (11U)
#define USB_CR_EP1_DIR_LEN                                      (2U)
#define USB_CR_EP1_DIR_MSK                                      (((1U<<USB_CR_EP1_DIR_LEN)-1)<<USB_CR_EP1_DIR_POS)
#define USB_CR_EP1_DIR_UMSK                                     (~(((1U<<USB_CR_EP1_DIR_LEN)-1)<<USB_CR_EP1_DIR_POS))
#define USB_CR_EP1_TYPE                                         USB_CR_EP1_TYPE
#define USB_CR_EP1_TYPE_POS                                     (13U)
#define USB_CR_EP1_TYPE_LEN                                     (3U)
#define USB_CR_EP1_TYPE_MSK                                     (((1U<<USB_CR_EP1_TYPE_LEN)-1)<<USB_CR_EP1_TYPE_POS)
#define USB_CR_EP1_TYPE_UMSK                                    (~(((1U<<USB_CR_EP1_TYPE_LEN)-1)<<USB_CR_EP1_TYPE_POS))
#define USB_CR_EP1_STALL                                        USB_CR_EP1_STALL
#define USB_CR_EP1_STALL_POS                                    (16U)
#define USB_CR_EP1_STALL_LEN                                    (1U)
#define USB_CR_EP1_STALL_MSK                                    (((1U<<USB_CR_EP1_STALL_LEN)-1)<<USB_CR_EP1_STALL_POS)
#define USB_CR_EP1_STALL_UMSK                                   (~(((1U<<USB_CR_EP1_STALL_LEN)-1)<<USB_CR_EP1_STALL_POS))
#define USB_CR_EP1_NACK                                         USB_CR_EP1_NACK
#define USB_CR_EP1_NACK_POS                                     (17U)
#define USB_CR_EP1_NACK_LEN                                     (1U)
#define USB_CR_EP1_NACK_MSK                                     (((1U<<USB_CR_EP1_NACK_LEN)-1)<<USB_CR_EP1_NACK_POS)
#define USB_CR_EP1_NACK_UMSK                                    (~(((1U<<USB_CR_EP1_NACK_LEN)-1)<<USB_CR_EP1_NACK_POS))
#define USB_CR_EP1_RDY                                          USB_CR_EP1_RDY
#define USB_CR_EP1_RDY_POS                                      (18U)
#define USB_CR_EP1_RDY_LEN                                      (1U)
#define USB_CR_EP1_RDY_MSK                                      (((1U<<USB_CR_EP1_RDY_LEN)-1)<<USB_CR_EP1_RDY_POS)
#define USB_CR_EP1_RDY_UMSK                                     (~(((1U<<USB_CR_EP1_RDY_LEN)-1)<<USB_CR_EP1_RDY_POS))
#define USB_STS_EP1_RDY                                         USB_STS_EP1_RDY
#define USB_STS_EP1_RDY_POS                                     (19U)
#define USB_STS_EP1_RDY_LEN                                     (1U)
#define USB_STS_EP1_RDY_MSK                                     (((1U<<USB_STS_EP1_RDY_LEN)-1)<<USB_STS_EP1_RDY_POS)
#define USB_STS_EP1_RDY_UMSK                                    (~(((1U<<USB_STS_EP1_RDY_LEN)-1)<<USB_STS_EP1_RDY_POS))

/* 0x44 : ep2_config */
#define USB_EP2_CONFIG_OFFSET                                   (0x44)
#define USB_CR_EP2_SIZE                                         USB_CR_EP2_SIZE
#define USB_CR_EP2_SIZE_POS                                     (0U)
#define USB_CR_EP2_SIZE_LEN                                     (11U)
#define USB_CR_EP2_SIZE_MSK                                     (((1U<<USB_CR_EP2_SIZE_LEN)-1)<<USB_CR_EP2_SIZE_POS)
#define USB_CR_EP2_SIZE_UMSK                                    (~(((1U<<USB_CR_EP2_SIZE_LEN)-1)<<USB_CR_EP2_SIZE_POS))
#define USB_CR_EP2_DIR                                          USB_CR_EP2_DIR
#define USB_CR_EP2_DIR_POS                                      (11U)
#define USB_CR_EP2_DIR_LEN                                      (2U)
#define USB_CR_EP2_DIR_MSK                                      (((1U<<USB_CR_EP2_DIR_LEN)-1)<<USB_CR_EP2_DIR_POS)
#define USB_CR_EP2_DIR_UMSK                                     (~(((1U<<USB_CR_EP2_DIR_LEN)-1)<<USB_CR_EP2_DIR_POS))
#define USB_CR_EP2_TYPE                                         USB_CR_EP2_TYPE
#define USB_CR_EP2_TYPE_POS                                     (13U)
#define USB_CR_EP2_TYPE_LEN                                     (3U)
#define USB_CR_EP2_TYPE_MSK                                     (((1U<<USB_CR_EP2_TYPE_LEN)-1)<<USB_CR_EP2_TYPE_POS)
#define USB_CR_EP2_TYPE_UMSK                                    (~(((1U<<USB_CR_EP2_TYPE_LEN)-1)<<USB_CR_EP2_TYPE_POS))
#define USB_CR_EP2_STALL                                        USB_CR_EP2_STALL
#define USB_CR_EP2_STALL_POS                                    (16U)
#define USB_CR_EP2_STALL_LEN                                    (1U)
#define USB_CR_EP2_STALL_MSK                                    (((1U<<USB_CR_EP2_STALL_LEN)-1)<<USB_CR_EP2_STALL_POS)
#define USB_CR_EP2_STALL_UMSK                                   (~(((1U<<USB_CR_EP2_STALL_LEN)-1)<<USB_CR_EP2_STALL_POS))
#define USB_CR_EP2_NACK                                         USB_CR_EP2_NACK
#define USB_CR_EP2_NACK_POS                                     (17U)
#define USB_CR_EP2_NACK_LEN                                     (1U)
#define USB_CR_EP2_NACK_MSK                                     (((1U<<USB_CR_EP2_NACK_LEN)-1)<<USB_CR_EP2_NACK_POS)
#define USB_CR_EP2_NACK_UMSK                                    (~(((1U<<USB_CR_EP2_NACK_LEN)-1)<<USB_CR_EP2_NACK_POS))
#define USB_CR_EP2_RDY                                          USB_CR_EP2_RDY
#define USB_CR_EP2_RDY_POS                                      (18U)
#define USB_CR_EP2_RDY_LEN                                      (1U)
#define USB_CR_EP2_RDY_MSK                                      (((1U<<USB_CR_EP2_RDY_LEN)-1)<<USB_CR_EP2_RDY_POS)
#define USB_CR_EP2_RDY_UMSK                                     (~(((1U<<USB_CR_EP2_RDY_LEN)-1)<<USB_CR_EP2_RDY_POS))
#define USB_STS_EP2_RDY                                         USB_STS_EP2_RDY
#define USB_STS_EP2_RDY_POS                                     (19U)
#define USB_STS_EP2_RDY_LEN                                     (1U)
#define USB_STS_EP2_RDY_MSK                                     (((1U<<USB_STS_EP2_RDY_LEN)-1)<<USB_STS_EP2_RDY_POS)
#define USB_STS_EP2_RDY_UMSK                                    (~(((1U<<USB_STS_EP2_RDY_LEN)-1)<<USB_STS_EP2_RDY_POS))

/* 0x48 : ep3_config */
#define USB_EP3_CONFIG_OFFSET                                   (0x48)
#define USB_CR_EP3_SIZE                                         USB_CR_EP3_SIZE
#define USB_CR_EP3_SIZE_POS                                     (0U)
#define USB_CR_EP3_SIZE_LEN                                     (11U)
#define USB_CR_EP3_SIZE_MSK                                     (((1U<<USB_CR_EP3_SIZE_LEN)-1)<<USB_CR_EP3_SIZE_POS)
#define USB_CR_EP3_SIZE_UMSK                                    (~(((1U<<USB_CR_EP3_SIZE_LEN)-1)<<USB_CR_EP3_SIZE_POS))
#define USB_CR_EP3_DIR                                          USB_CR_EP3_DIR
#define USB_CR_EP3_DIR_POS                                      (11U)
#define USB_CR_EP3_DIR_LEN                                      (2U)
#define USB_CR_EP3_DIR_MSK                                      (((1U<<USB_CR_EP3_DIR_LEN)-1)<<USB_CR_EP3_DIR_POS)
#define USB_CR_EP3_DIR_UMSK                                     (~(((1U<<USB_CR_EP3_DIR_LEN)-1)<<USB_CR_EP3_DIR_POS))
#define USB_CR_EP3_TYPE                                         USB_CR_EP3_TYPE
#define USB_CR_EP3_TYPE_POS                                     (13U)
#define USB_CR_EP3_TYPE_LEN                                     (3U)
#define USB_CR_EP3_TYPE_MSK                                     (((1U<<USB_CR_EP3_TYPE_LEN)-1)<<USB_CR_EP3_TYPE_POS)
#define USB_CR_EP3_TYPE_UMSK                                    (~(((1U<<USB_CR_EP3_TYPE_LEN)-1)<<USB_CR_EP3_TYPE_POS))
#define USB_CR_EP3_STALL                                        USB_CR_EP3_STALL
#define USB_CR_EP3_STALL_POS                                    (16U)
#define USB_CR_EP3_STALL_LEN                                    (1U)
#define USB_CR_EP3_STALL_MSK                                    (((1U<<USB_CR_EP3_STALL_LEN)-1)<<USB_CR_EP3_STALL_POS)
#define USB_CR_EP3_STALL_UMSK                                   (~(((1U<<USB_CR_EP3_STALL_LEN)-1)<<USB_CR_EP3_STALL_POS))
#define USB_CR_EP3_NACK                                         USB_CR_EP3_NACK
#define USB_CR_EP3_NACK_POS                                     (17U)
#define USB_CR_EP3_NACK_LEN                                     (1U)
#define USB_CR_EP3_NACK_MSK                                     (((1U<<USB_CR_EP3_NACK_LEN)-1)<<USB_CR_EP3_NACK_POS)
#define USB_CR_EP3_NACK_UMSK                                    (~(((1U<<USB_CR_EP3_NACK_LEN)-1)<<USB_CR_EP3_NACK_POS))
#define USB_CR_EP3_RDY                                          USB_CR_EP3_RDY
#define USB_CR_EP3_RDY_POS                                      (18U)
#define USB_CR_EP3_RDY_LEN                                      (1U)
#define USB_CR_EP3_RDY_MSK                                      (((1U<<USB_CR_EP3_RDY_LEN)-1)<<USB_CR_EP3_RDY_POS)
#define USB_CR_EP3_RDY_UMSK                                     (~(((1U<<USB_CR_EP3_RDY_LEN)-1)<<USB_CR_EP3_RDY_POS))
#define USB_STS_EP3_RDY                                         USB_STS_EP3_RDY
#define USB_STS_EP3_RDY_POS                                     (19U)
#define USB_STS_EP3_RDY_LEN                                     (1U)
#define USB_STS_EP3_RDY_MSK                                     (((1U<<USB_STS_EP3_RDY_LEN)-1)<<USB_STS_EP3_RDY_POS)
#define USB_STS_EP3_RDY_UMSK                                    (~(((1U<<USB_STS_EP3_RDY_LEN)-1)<<USB_STS_EP3_RDY_POS))

/* 0x4C : ep4_config */
#define USB_EP4_CONFIG_OFFSET                                   (0x4C)
#define USB_CR_EP4_SIZE                                         USB_CR_EP4_SIZE
#define USB_CR_EP4_SIZE_POS                                     (0U)
#define USB_CR_EP4_SIZE_LEN                                     (11U)
#define USB_CR_EP4_SIZE_MSK                                     (((1U<<USB_CR_EP4_SIZE_LEN)-1)<<USB_CR_EP4_SIZE_POS)
#define USB_CR_EP4_SIZE_UMSK                                    (~(((1U<<USB_CR_EP4_SIZE_LEN)-1)<<USB_CR_EP4_SIZE_POS))
#define USB_CR_EP4_DIR                                          USB_CR_EP4_DIR
#define USB_CR_EP4_DIR_POS                                      (11U)
#define USB_CR_EP4_DIR_LEN                                      (2U)
#define USB_CR_EP4_DIR_MSK                                      (((1U<<USB_CR_EP4_DIR_LEN)-1)<<USB_CR_EP4_DIR_POS)
#define USB_CR_EP4_DIR_UMSK                                     (~(((1U<<USB_CR_EP4_DIR_LEN)-1)<<USB_CR_EP4_DIR_POS))
#define USB_CR_EP4_TYPE                                         USB_CR_EP4_TYPE
#define USB_CR_EP4_TYPE_POS                                     (13U)
#define USB_CR_EP4_TYPE_LEN                                     (3U)
#define USB_CR_EP4_TYPE_MSK                                     (((1U<<USB_CR_EP4_TYPE_LEN)-1)<<USB_CR_EP4_TYPE_POS)
#define USB_CR_EP4_TYPE_UMSK                                    (~(((1U<<USB_CR_EP4_TYPE_LEN)-1)<<USB_CR_EP4_TYPE_POS))
#define USB_CR_EP4_STALL                                        USB_CR_EP4_STALL
#define USB_CR_EP4_STALL_POS                                    (16U)
#define USB_CR_EP4_STALL_LEN                                    (1U)
#define USB_CR_EP4_STALL_MSK                                    (((1U<<USB_CR_EP4_STALL_LEN)-1)<<USB_CR_EP4_STALL_POS)
#define USB_CR_EP4_STALL_UMSK                                   (~(((1U<<USB_CR_EP4_STALL_LEN)-1)<<USB_CR_EP4_STALL_POS))
#define USB_CR_EP4_NACK                                         USB_CR_EP4_NACK
#define USB_CR_EP4_NACK_POS                                     (17U)
#define USB_CR_EP4_NACK_LEN                                     (1U)
#define USB_CR_EP4_NACK_MSK                                     (((1U<<USB_CR_EP4_NACK_LEN)-1)<<USB_CR_EP4_NACK_POS)
#define USB_CR_EP4_NACK_UMSK                                    (~(((1U<<USB_CR_EP4_NACK_LEN)-1)<<USB_CR_EP4_NACK_POS))
#define USB_CR_EP4_RDY                                          USB_CR_EP4_RDY
#define USB_CR_EP4_RDY_POS                                      (18U)
#define USB_CR_EP4_RDY_LEN                                      (1U)
#define USB_CR_EP4_RDY_MSK                                      (((1U<<USB_CR_EP4_RDY_LEN)-1)<<USB_CR_EP4_RDY_POS)
#define USB_CR_EP4_RDY_UMSK                                     (~(((1U<<USB_CR_EP4_RDY_LEN)-1)<<USB_CR_EP4_RDY_POS))
#define USB_STS_EP4_RDY                                         USB_STS_EP4_RDY
#define USB_STS_EP4_RDY_POS                                     (19U)
#define USB_STS_EP4_RDY_LEN                                     (1U)
#define USB_STS_EP4_RDY_MSK                                     (((1U<<USB_STS_EP4_RDY_LEN)-1)<<USB_STS_EP4_RDY_POS)
#define USB_STS_EP4_RDY_UMSK                                    (~(((1U<<USB_STS_EP4_RDY_LEN)-1)<<USB_STS_EP4_RDY_POS))

/* 0x50 : ep5_config */
#define USB_EP5_CONFIG_OFFSET                                   (0x50)
#define USB_CR_EP5_SIZE                                         USB_CR_EP5_SIZE
#define USB_CR_EP5_SIZE_POS                                     (0U)
#define USB_CR_EP5_SIZE_LEN                                     (11U)
#define USB_CR_EP5_SIZE_MSK                                     (((1U<<USB_CR_EP5_SIZE_LEN)-1)<<USB_CR_EP5_SIZE_POS)
#define USB_CR_EP5_SIZE_UMSK                                    (~(((1U<<USB_CR_EP5_SIZE_LEN)-1)<<USB_CR_EP5_SIZE_POS))
#define USB_CR_EP5_DIR                                          USB_CR_EP5_DIR
#define USB_CR_EP5_DIR_POS                                      (11U)
#define USB_CR_EP5_DIR_LEN                                      (2U)
#define USB_CR_EP5_DIR_MSK                                      (((1U<<USB_CR_EP5_DIR_LEN)-1)<<USB_CR_EP5_DIR_POS)
#define USB_CR_EP5_DIR_UMSK                                     (~(((1U<<USB_CR_EP5_DIR_LEN)-1)<<USB_CR_EP5_DIR_POS))
#define USB_CR_EP5_TYPE                                         USB_CR_EP5_TYPE
#define USB_CR_EP5_TYPE_POS                                     (13U)
#define USB_CR_EP5_TYPE_LEN                                     (3U)
#define USB_CR_EP5_TYPE_MSK                                     (((1U<<USB_CR_EP5_TYPE_LEN)-1)<<USB_CR_EP5_TYPE_POS)
#define USB_CR_EP5_TYPE_UMSK                                    (~(((1U<<USB_CR_EP5_TYPE_LEN)-1)<<USB_CR_EP5_TYPE_POS))
#define USB_CR_EP5_STALL                                        USB_CR_EP5_STALL
#define USB_CR_EP5_STALL_POS                                    (16U)
#define USB_CR_EP5_STALL_LEN                                    (1U)
#define USB_CR_EP5_STALL_MSK                                    (((1U<<USB_CR_EP5_STALL_LEN)-1)<<USB_CR_EP5_STALL_POS)
#define USB_CR_EP5_STALL_UMSK                                   (~(((1U<<USB_CR_EP5_STALL_LEN)-1)<<USB_CR_EP5_STALL_POS))
#define USB_CR_EP5_NACK                                         USB_CR_EP5_NACK
#define USB_CR_EP5_NACK_POS                                     (17U)
#define USB_CR_EP5_NACK_LEN                                     (1U)
#define USB_CR_EP5_NACK_MSK                                     (((1U<<USB_CR_EP5_NACK_LEN)-1)<<USB_CR_EP5_NACK_POS)
#define USB_CR_EP5_NACK_UMSK                                    (~(((1U<<USB_CR_EP5_NACK_LEN)-1)<<USB_CR_EP5_NACK_POS))
#define USB_CR_EP5_RDY                                          USB_CR_EP5_RDY
#define USB_CR_EP5_RDY_POS                                      (18U)
#define USB_CR_EP5_RDY_LEN                                      (1U)
#define USB_CR_EP5_RDY_MSK                                      (((1U<<USB_CR_EP5_RDY_LEN)-1)<<USB_CR_EP5_RDY_POS)
#define USB_CR_EP5_RDY_UMSK                                     (~(((1U<<USB_CR_EP5_RDY_LEN)-1)<<USB_CR_EP5_RDY_POS))
#define USB_STS_EP5_RDY                                         USB_STS_EP5_RDY
#define USB_STS_EP5_RDY_POS                                     (19U)
#define USB_STS_EP5_RDY_LEN                                     (1U)
#define USB_STS_EP5_RDY_MSK                                     (((1U<<USB_STS_EP5_RDY_LEN)-1)<<USB_STS_EP5_RDY_POS)
#define USB_STS_EP5_RDY_UMSK                                    (~(((1U<<USB_STS_EP5_RDY_LEN)-1)<<USB_STS_EP5_RDY_POS))

/* 0x54 : ep6_config */
#define USB_EP6_CONFIG_OFFSET                                   (0x54)
#define USB_CR_EP6_SIZE                                         USB_CR_EP6_SIZE
#define USB_CR_EP6_SIZE_POS                                     (0U)
#define USB_CR_EP6_SIZE_LEN                                     (11U)
#define USB_CR_EP6_SIZE_MSK                                     (((1U<<USB_CR_EP6_SIZE_LEN)-1)<<USB_CR_EP6_SIZE_POS)
#define USB_CR_EP6_SIZE_UMSK                                    (~(((1U<<USB_CR_EP6_SIZE_LEN)-1)<<USB_CR_EP6_SIZE_POS))
#define USB_CR_EP6_DIR                                          USB_CR_EP6_DIR
#define USB_CR_EP6_DIR_POS                                      (11U)
#define USB_CR_EP6_DIR_LEN                                      (2U)
#define USB_CR_EP6_DIR_MSK                                      (((1U<<USB_CR_EP6_DIR_LEN)-1)<<USB_CR_EP6_DIR_POS)
#define USB_CR_EP6_DIR_UMSK                                     (~(((1U<<USB_CR_EP6_DIR_LEN)-1)<<USB_CR_EP6_DIR_POS))
#define USB_CR_EP6_TYPE                                         USB_CR_EP6_TYPE
#define USB_CR_EP6_TYPE_POS                                     (13U)
#define USB_CR_EP6_TYPE_LEN                                     (3U)
#define USB_CR_EP6_TYPE_MSK                                     (((1U<<USB_CR_EP6_TYPE_LEN)-1)<<USB_CR_EP6_TYPE_POS)
#define USB_CR_EP6_TYPE_UMSK                                    (~(((1U<<USB_CR_EP6_TYPE_LEN)-1)<<USB_CR_EP6_TYPE_POS))
#define USB_CR_EP6_STALL                                        USB_CR_EP6_STALL
#define USB_CR_EP6_STALL_POS                                    (16U)
#define USB_CR_EP6_STALL_LEN                                    (1U)
#define USB_CR_EP6_STALL_MSK                                    (((1U<<USB_CR_EP6_STALL_LEN)-1)<<USB_CR_EP6_STALL_POS)
#define USB_CR_EP6_STALL_UMSK                                   (~(((1U<<USB_CR_EP6_STALL_LEN)-1)<<USB_CR_EP6_STALL_POS))
#define USB_CR_EP6_NACK                                         USB_CR_EP6_NACK
#define USB_CR_EP6_NACK_POS                                     (17U)
#define USB_CR_EP6_NACK_LEN                                     (1U)
#define USB_CR_EP6_NACK_MSK                                     (((1U<<USB_CR_EP6_NACK_LEN)-1)<<USB_CR_EP6_NACK_POS)
#define USB_CR_EP6_NACK_UMSK                                    (~(((1U<<USB_CR_EP6_NACK_LEN)-1)<<USB_CR_EP6_NACK_POS))
#define USB_CR_EP6_RDY                                          USB_CR_EP6_RDY
#define USB_CR_EP6_RDY_POS                                      (18U)
#define USB_CR_EP6_RDY_LEN                                      (1U)
#define USB_CR_EP6_RDY_MSK                                      (((1U<<USB_CR_EP6_RDY_LEN)-1)<<USB_CR_EP6_RDY_POS)
#define USB_CR_EP6_RDY_UMSK                                     (~(((1U<<USB_CR_EP6_RDY_LEN)-1)<<USB_CR_EP6_RDY_POS))
#define USB_STS_EP6_RDY                                         USB_STS_EP6_RDY
#define USB_STS_EP6_RDY_POS                                     (19U)
#define USB_STS_EP6_RDY_LEN                                     (1U)
#define USB_STS_EP6_RDY_MSK                                     (((1U<<USB_STS_EP6_RDY_LEN)-1)<<USB_STS_EP6_RDY_POS)
#define USB_STS_EP6_RDY_UMSK                                    (~(((1U<<USB_STS_EP6_RDY_LEN)-1)<<USB_STS_EP6_RDY_POS))

/* 0x58 : ep7_config */
#define USB_EP7_CONFIG_OFFSET                                   (0x58)
#define USB_CR_EP7_SIZE                                         USB_CR_EP7_SIZE
#define USB_CR_EP7_SIZE_POS                                     (0U)
#define USB_CR_EP7_SIZE_LEN                                     (11U)
#define USB_CR_EP7_SIZE_MSK                                     (((1U<<USB_CR_EP7_SIZE_LEN)-1)<<USB_CR_EP7_SIZE_POS)
#define USB_CR_EP7_SIZE_UMSK                                    (~(((1U<<USB_CR_EP7_SIZE_LEN)-1)<<USB_CR_EP7_SIZE_POS))
#define USB_CR_EP7_DIR                                          USB_CR_EP7_DIR
#define USB_CR_EP7_DIR_POS                                      (11U)
#define USB_CR_EP7_DIR_LEN                                      (2U)
#define USB_CR_EP7_DIR_MSK                                      (((1U<<USB_CR_EP7_DIR_LEN)-1)<<USB_CR_EP7_DIR_POS)
#define USB_CR_EP7_DIR_UMSK                                     (~(((1U<<USB_CR_EP7_DIR_LEN)-1)<<USB_CR_EP7_DIR_POS))
#define USB_CR_EP7_TYPE                                         USB_CR_EP7_TYPE
#define USB_CR_EP7_TYPE_POS                                     (13U)
#define USB_CR_EP7_TYPE_LEN                                     (3U)
#define USB_CR_EP7_TYPE_MSK                                     (((1U<<USB_CR_EP7_TYPE_LEN)-1)<<USB_CR_EP7_TYPE_POS)
#define USB_CR_EP7_TYPE_UMSK                                    (~(((1U<<USB_CR_EP7_TYPE_LEN)-1)<<USB_CR_EP7_TYPE_POS))
#define USB_CR_EP7_STALL                                        USB_CR_EP7_STALL
#define USB_CR_EP7_STALL_POS                                    (16U)
#define USB_CR_EP7_STALL_LEN                                    (1U)
#define USB_CR_EP7_STALL_MSK                                    (((1U<<USB_CR_EP7_STALL_LEN)-1)<<USB_CR_EP7_STALL_POS)
#define USB_CR_EP7_STALL_UMSK                                   (~(((1U<<USB_CR_EP7_STALL_LEN)-1)<<USB_CR_EP7_STALL_POS))
#define USB_CR_EP7_NACK                                         USB_CR_EP7_NACK
#define USB_CR_EP7_NACK_POS                                     (17U)
#define USB_CR_EP7_NACK_LEN                                     (1U)
#define USB_CR_EP7_NACK_MSK                                     (((1U<<USB_CR_EP7_NACK_LEN)-1)<<USB_CR_EP7_NACK_POS)
#define USB_CR_EP7_NACK_UMSK                                    (~(((1U<<USB_CR_EP7_NACK_LEN)-1)<<USB_CR_EP7_NACK_POS))
#define USB_CR_EP7_RDY                                          USB_CR_EP7_RDY
#define USB_CR_EP7_RDY_POS                                      (18U)
#define USB_CR_EP7_RDY_LEN                                      (1U)
#define USB_CR_EP7_RDY_MSK                                      (((1U<<USB_CR_EP7_RDY_LEN)-1)<<USB_CR_EP7_RDY_POS)
#define USB_CR_EP7_RDY_UMSK                                     (~(((1U<<USB_CR_EP7_RDY_LEN)-1)<<USB_CR_EP7_RDY_POS))
#define USB_STS_EP7_RDY                                         USB_STS_EP7_RDY
#define USB_STS_EP7_RDY_POS                                     (19U)
#define USB_STS_EP7_RDY_LEN                                     (1U)
#define USB_STS_EP7_RDY_MSK                                     (((1U<<USB_STS_EP7_RDY_LEN)-1)<<USB_STS_EP7_RDY_POS)
#define USB_STS_EP7_RDY_UMSK                                    (~(((1U<<USB_STS_EP7_RDY_LEN)-1)<<USB_STS_EP7_RDY_POS))

/* 0x100 : ep0_fifo_config */
#define USB_EP0_FIFO_CONFIG_OFFSET                              (0x100)
#define USB_EP0_DMA_TX_EN                                       USB_EP0_DMA_TX_EN
#define USB_EP0_DMA_TX_EN_POS                                   (0U)
#define USB_EP0_DMA_TX_EN_LEN                                   (1U)
#define USB_EP0_DMA_TX_EN_MSK                                   (((1U<<USB_EP0_DMA_TX_EN_LEN)-1)<<USB_EP0_DMA_TX_EN_POS)
#define USB_EP0_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP0_DMA_TX_EN_LEN)-1)<<USB_EP0_DMA_TX_EN_POS))
#define USB_EP0_DMA_RX_EN                                       USB_EP0_DMA_RX_EN
#define USB_EP0_DMA_RX_EN_POS                                   (1U)
#define USB_EP0_DMA_RX_EN_LEN                                   (1U)
#define USB_EP0_DMA_RX_EN_MSK                                   (((1U<<USB_EP0_DMA_RX_EN_LEN)-1)<<USB_EP0_DMA_RX_EN_POS)
#define USB_EP0_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP0_DMA_RX_EN_LEN)-1)<<USB_EP0_DMA_RX_EN_POS))
#define USB_EP0_TX_FIFO_CLR                                     USB_EP0_TX_FIFO_CLR
#define USB_EP0_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP0_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP0_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP0_TX_FIFO_CLR_LEN)-1)<<USB_EP0_TX_FIFO_CLR_POS)
#define USB_EP0_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP0_TX_FIFO_CLR_LEN)-1)<<USB_EP0_TX_FIFO_CLR_POS))
#define USB_EP0_RX_FIFO_CLR                                     USB_EP0_RX_FIFO_CLR
#define USB_EP0_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP0_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP0_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP0_RX_FIFO_CLR_LEN)-1)<<USB_EP0_RX_FIFO_CLR_POS)
#define USB_EP0_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP0_RX_FIFO_CLR_LEN)-1)<<USB_EP0_RX_FIFO_CLR_POS))
#define USB_EP0_TX_FIFO_OVERFLOW                                USB_EP0_TX_FIFO_OVERFLOW
#define USB_EP0_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP0_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP0_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP0_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP0_TX_FIFO_OVERFLOW_POS)
#define USB_EP0_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP0_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP0_TX_FIFO_OVERFLOW_POS))
#define USB_EP0_TX_FIFO_UNDERFLOW                               USB_EP0_TX_FIFO_UNDERFLOW
#define USB_EP0_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP0_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP0_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP0_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP0_TX_FIFO_UNDERFLOW_POS)
#define USB_EP0_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP0_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP0_TX_FIFO_UNDERFLOW_POS))
#define USB_EP0_RX_FIFO_OVERFLOW                                USB_EP0_RX_FIFO_OVERFLOW
#define USB_EP0_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP0_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP0_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP0_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP0_RX_FIFO_OVERFLOW_POS)
#define USB_EP0_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP0_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP0_RX_FIFO_OVERFLOW_POS))
#define USB_EP0_RX_FIFO_UNDERFLOW                               USB_EP0_RX_FIFO_UNDERFLOW
#define USB_EP0_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP0_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP0_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP0_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP0_RX_FIFO_UNDERFLOW_POS)
#define USB_EP0_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP0_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP0_RX_FIFO_UNDERFLOW_POS))

/* 0x104 : ep0_fifo_status */
#define USB_EP0_FIFO_STATUS_OFFSET                              (0x104)
#define USB_EP0_TX_FIFO_CNT                                     USB_EP0_TX_FIFO_CNT
#define USB_EP0_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP0_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP0_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP0_TX_FIFO_CNT_LEN)-1)<<USB_EP0_TX_FIFO_CNT_POS)
#define USB_EP0_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP0_TX_FIFO_CNT_LEN)-1)<<USB_EP0_TX_FIFO_CNT_POS))
#define USB_EP0_TX_FIFO_EMPTY                                   USB_EP0_TX_FIFO_EMPTY
#define USB_EP0_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP0_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP0_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP0_TX_FIFO_EMPTY_LEN)-1)<<USB_EP0_TX_FIFO_EMPTY_POS)
#define USB_EP0_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP0_TX_FIFO_EMPTY_LEN)-1)<<USB_EP0_TX_FIFO_EMPTY_POS))
#define USB_EP0_TX_FIFO_FULL                                    USB_EP0_TX_FIFO_FULL
#define USB_EP0_TX_FIFO_FULL_POS                                (15U)
#define USB_EP0_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP0_TX_FIFO_FULL_MSK                                (((1U<<USB_EP0_TX_FIFO_FULL_LEN)-1)<<USB_EP0_TX_FIFO_FULL_POS)
#define USB_EP0_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP0_TX_FIFO_FULL_LEN)-1)<<USB_EP0_TX_FIFO_FULL_POS))
#define USB_EP0_RX_FIFO_CNT                                     USB_EP0_RX_FIFO_CNT
#define USB_EP0_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP0_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP0_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP0_RX_FIFO_CNT_LEN)-1)<<USB_EP0_RX_FIFO_CNT_POS)
#define USB_EP0_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP0_RX_FIFO_CNT_LEN)-1)<<USB_EP0_RX_FIFO_CNT_POS))
#define USB_EP0_RX_FIFO_EMPTY                                   USB_EP0_RX_FIFO_EMPTY
#define USB_EP0_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP0_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP0_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP0_RX_FIFO_EMPTY_LEN)-1)<<USB_EP0_RX_FIFO_EMPTY_POS)
#define USB_EP0_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP0_RX_FIFO_EMPTY_LEN)-1)<<USB_EP0_RX_FIFO_EMPTY_POS))
#define USB_EP0_RX_FIFO_FULL                                    USB_EP0_RX_FIFO_FULL
#define USB_EP0_RX_FIFO_FULL_POS                                (31U)
#define USB_EP0_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP0_RX_FIFO_FULL_MSK                                (((1U<<USB_EP0_RX_FIFO_FULL_LEN)-1)<<USB_EP0_RX_FIFO_FULL_POS)
#define USB_EP0_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP0_RX_FIFO_FULL_LEN)-1)<<USB_EP0_RX_FIFO_FULL_POS))

/* 0x108 : ep0_tx_fifo_wdata */
#define USB_EP0_TX_FIFO_WDATA_OFFSET                            (0x108)
#define USB_EP0_TX_FIFO_WDATA                                   USB_EP0_TX_FIFO_WDATA
#define USB_EP0_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP0_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP0_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP0_TX_FIFO_WDATA_LEN)-1)<<USB_EP0_TX_FIFO_WDATA_POS)
#define USB_EP0_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP0_TX_FIFO_WDATA_LEN)-1)<<USB_EP0_TX_FIFO_WDATA_POS))

/* 0x10C : ep0_rx_fifo_rdata */
#define USB_EP0_RX_FIFO_RDATA_OFFSET                            (0x10C)
#define USB_EP0_RX_FIFO_RDATA                                   USB_EP0_RX_FIFO_RDATA
#define USB_EP0_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP0_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP0_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP0_RX_FIFO_RDATA_LEN)-1)<<USB_EP0_RX_FIFO_RDATA_POS)
#define USB_EP0_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP0_RX_FIFO_RDATA_LEN)-1)<<USB_EP0_RX_FIFO_RDATA_POS))

/* 0x110 : ep1_fifo_config */
#define USB_EP1_FIFO_CONFIG_OFFSET                              (0x110)
#define USB_EP1_DMA_TX_EN                                       USB_EP1_DMA_TX_EN
#define USB_EP1_DMA_TX_EN_POS                                   (0U)
#define USB_EP1_DMA_TX_EN_LEN                                   (1U)
#define USB_EP1_DMA_TX_EN_MSK                                   (((1U<<USB_EP1_DMA_TX_EN_LEN)-1)<<USB_EP1_DMA_TX_EN_POS)
#define USB_EP1_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP1_DMA_TX_EN_LEN)-1)<<USB_EP1_DMA_TX_EN_POS))
#define USB_EP1_DMA_RX_EN                                       USB_EP1_DMA_RX_EN
#define USB_EP1_DMA_RX_EN_POS                                   (1U)
#define USB_EP1_DMA_RX_EN_LEN                                   (1U)
#define USB_EP1_DMA_RX_EN_MSK                                   (((1U<<USB_EP1_DMA_RX_EN_LEN)-1)<<USB_EP1_DMA_RX_EN_POS)
#define USB_EP1_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP1_DMA_RX_EN_LEN)-1)<<USB_EP1_DMA_RX_EN_POS))
#define USB_EP1_TX_FIFO_CLR                                     USB_EP1_TX_FIFO_CLR
#define USB_EP1_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP1_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP1_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP1_TX_FIFO_CLR_LEN)-1)<<USB_EP1_TX_FIFO_CLR_POS)
#define USB_EP1_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP1_TX_FIFO_CLR_LEN)-1)<<USB_EP1_TX_FIFO_CLR_POS))
#define USB_EP1_RX_FIFO_CLR                                     USB_EP1_RX_FIFO_CLR
#define USB_EP1_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP1_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP1_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP1_RX_FIFO_CLR_LEN)-1)<<USB_EP1_RX_FIFO_CLR_POS)
#define USB_EP1_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP1_RX_FIFO_CLR_LEN)-1)<<USB_EP1_RX_FIFO_CLR_POS))
#define USB_EP1_TX_FIFO_OVERFLOW                                USB_EP1_TX_FIFO_OVERFLOW
#define USB_EP1_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP1_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP1_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP1_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP1_TX_FIFO_OVERFLOW_POS)
#define USB_EP1_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP1_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP1_TX_FIFO_OVERFLOW_POS))
#define USB_EP1_TX_FIFO_UNDERFLOW                               USB_EP1_TX_FIFO_UNDERFLOW
#define USB_EP1_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP1_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP1_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP1_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP1_TX_FIFO_UNDERFLOW_POS)
#define USB_EP1_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP1_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP1_TX_FIFO_UNDERFLOW_POS))
#define USB_EP1_RX_FIFO_OVERFLOW                                USB_EP1_RX_FIFO_OVERFLOW
#define USB_EP1_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP1_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP1_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP1_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP1_RX_FIFO_OVERFLOW_POS)
#define USB_EP1_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP1_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP1_RX_FIFO_OVERFLOW_POS))
#define USB_EP1_RX_FIFO_UNDERFLOW                               USB_EP1_RX_FIFO_UNDERFLOW
#define USB_EP1_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP1_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP1_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP1_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP1_RX_FIFO_UNDERFLOW_POS)
#define USB_EP1_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP1_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP1_RX_FIFO_UNDERFLOW_POS))

/* 0x114 : ep1_fifo_status */
#define USB_EP1_FIFO_STATUS_OFFSET                              (0x114)
#define USB_EP1_TX_FIFO_CNT                                     USB_EP1_TX_FIFO_CNT
#define USB_EP1_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP1_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP1_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP1_TX_FIFO_CNT_LEN)-1)<<USB_EP1_TX_FIFO_CNT_POS)
#define USB_EP1_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP1_TX_FIFO_CNT_LEN)-1)<<USB_EP1_TX_FIFO_CNT_POS))
#define USB_EP1_TX_FIFO_EMPTY                                   USB_EP1_TX_FIFO_EMPTY
#define USB_EP1_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP1_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP1_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP1_TX_FIFO_EMPTY_LEN)-1)<<USB_EP1_TX_FIFO_EMPTY_POS)
#define USB_EP1_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP1_TX_FIFO_EMPTY_LEN)-1)<<USB_EP1_TX_FIFO_EMPTY_POS))
#define USB_EP1_TX_FIFO_FULL                                    USB_EP1_TX_FIFO_FULL
#define USB_EP1_TX_FIFO_FULL_POS                                (15U)
#define USB_EP1_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP1_TX_FIFO_FULL_MSK                                (((1U<<USB_EP1_TX_FIFO_FULL_LEN)-1)<<USB_EP1_TX_FIFO_FULL_POS)
#define USB_EP1_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP1_TX_FIFO_FULL_LEN)-1)<<USB_EP1_TX_FIFO_FULL_POS))
#define USB_EP1_RX_FIFO_CNT                                     USB_EP1_RX_FIFO_CNT
#define USB_EP1_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP1_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP1_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP1_RX_FIFO_CNT_LEN)-1)<<USB_EP1_RX_FIFO_CNT_POS)
#define USB_EP1_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP1_RX_FIFO_CNT_LEN)-1)<<USB_EP1_RX_FIFO_CNT_POS))
#define USB_EP1_RX_FIFO_EMPTY                                   USB_EP1_RX_FIFO_EMPTY
#define USB_EP1_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP1_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP1_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP1_RX_FIFO_EMPTY_LEN)-1)<<USB_EP1_RX_FIFO_EMPTY_POS)
#define USB_EP1_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP1_RX_FIFO_EMPTY_LEN)-1)<<USB_EP1_RX_FIFO_EMPTY_POS))
#define USB_EP1_RX_FIFO_FULL                                    USB_EP1_RX_FIFO_FULL
#define USB_EP1_RX_FIFO_FULL_POS                                (31U)
#define USB_EP1_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP1_RX_FIFO_FULL_MSK                                (((1U<<USB_EP1_RX_FIFO_FULL_LEN)-1)<<USB_EP1_RX_FIFO_FULL_POS)
#define USB_EP1_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP1_RX_FIFO_FULL_LEN)-1)<<USB_EP1_RX_FIFO_FULL_POS))

/* 0x118 : ep1_tx_fifo_wdata */
#define USB_EP1_TX_FIFO_WDATA_OFFSET                            (0x118)
#define USB_EP1_TX_FIFO_WDATA                                   USB_EP1_TX_FIFO_WDATA
#define USB_EP1_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP1_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP1_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP1_TX_FIFO_WDATA_LEN)-1)<<USB_EP1_TX_FIFO_WDATA_POS)
#define USB_EP1_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP1_TX_FIFO_WDATA_LEN)-1)<<USB_EP1_TX_FIFO_WDATA_POS))

/* 0x11C : ep1_rx_fifo_rdata */
#define USB_EP1_RX_FIFO_RDATA_OFFSET                            (0x11C)
#define USB_EP1_RX_FIFO_RDATA                                   USB_EP1_RX_FIFO_RDATA
#define USB_EP1_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP1_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP1_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP1_RX_FIFO_RDATA_LEN)-1)<<USB_EP1_RX_FIFO_RDATA_POS)
#define USB_EP1_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP1_RX_FIFO_RDATA_LEN)-1)<<USB_EP1_RX_FIFO_RDATA_POS))

/* 0x120 : ep2_fifo_config */
#define USB_EP2_FIFO_CONFIG_OFFSET                              (0x120)
#define USB_EP2_DMA_TX_EN                                       USB_EP2_DMA_TX_EN
#define USB_EP2_DMA_TX_EN_POS                                   (0U)
#define USB_EP2_DMA_TX_EN_LEN                                   (1U)
#define USB_EP2_DMA_TX_EN_MSK                                   (((1U<<USB_EP2_DMA_TX_EN_LEN)-1)<<USB_EP2_DMA_TX_EN_POS)
#define USB_EP2_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP2_DMA_TX_EN_LEN)-1)<<USB_EP2_DMA_TX_EN_POS))
#define USB_EP2_DMA_RX_EN                                       USB_EP2_DMA_RX_EN
#define USB_EP2_DMA_RX_EN_POS                                   (1U)
#define USB_EP2_DMA_RX_EN_LEN                                   (1U)
#define USB_EP2_DMA_RX_EN_MSK                                   (((1U<<USB_EP2_DMA_RX_EN_LEN)-1)<<USB_EP2_DMA_RX_EN_POS)
#define USB_EP2_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP2_DMA_RX_EN_LEN)-1)<<USB_EP2_DMA_RX_EN_POS))
#define USB_EP2_TX_FIFO_CLR                                     USB_EP2_TX_FIFO_CLR
#define USB_EP2_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP2_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP2_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP2_TX_FIFO_CLR_LEN)-1)<<USB_EP2_TX_FIFO_CLR_POS)
#define USB_EP2_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP2_TX_FIFO_CLR_LEN)-1)<<USB_EP2_TX_FIFO_CLR_POS))
#define USB_EP2_RX_FIFO_CLR                                     USB_EP2_RX_FIFO_CLR
#define USB_EP2_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP2_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP2_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP2_RX_FIFO_CLR_LEN)-1)<<USB_EP2_RX_FIFO_CLR_POS)
#define USB_EP2_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP2_RX_FIFO_CLR_LEN)-1)<<USB_EP2_RX_FIFO_CLR_POS))
#define USB_EP2_TX_FIFO_OVERFLOW                                USB_EP2_TX_FIFO_OVERFLOW
#define USB_EP2_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP2_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP2_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP2_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP2_TX_FIFO_OVERFLOW_POS)
#define USB_EP2_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP2_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP2_TX_FIFO_OVERFLOW_POS))
#define USB_EP2_TX_FIFO_UNDERFLOW                               USB_EP2_TX_FIFO_UNDERFLOW
#define USB_EP2_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP2_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP2_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP2_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP2_TX_FIFO_UNDERFLOW_POS)
#define USB_EP2_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP2_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP2_TX_FIFO_UNDERFLOW_POS))
#define USB_EP2_RX_FIFO_OVERFLOW                                USB_EP2_RX_FIFO_OVERFLOW
#define USB_EP2_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP2_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP2_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP2_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP2_RX_FIFO_OVERFLOW_POS)
#define USB_EP2_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP2_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP2_RX_FIFO_OVERFLOW_POS))
#define USB_EP2_RX_FIFO_UNDERFLOW                               USB_EP2_RX_FIFO_UNDERFLOW
#define USB_EP2_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP2_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP2_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP2_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP2_RX_FIFO_UNDERFLOW_POS)
#define USB_EP2_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP2_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP2_RX_FIFO_UNDERFLOW_POS))

/* 0x124 : ep2_fifo_status */
#define USB_EP2_FIFO_STATUS_OFFSET                              (0x124)
#define USB_EP2_TX_FIFO_CNT                                     USB_EP2_TX_FIFO_CNT
#define USB_EP2_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP2_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP2_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP2_TX_FIFO_CNT_LEN)-1)<<USB_EP2_TX_FIFO_CNT_POS)
#define USB_EP2_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP2_TX_FIFO_CNT_LEN)-1)<<USB_EP2_TX_FIFO_CNT_POS))
#define USB_EP2_TX_FIFO_EMPTY                                   USB_EP2_TX_FIFO_EMPTY
#define USB_EP2_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP2_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP2_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP2_TX_FIFO_EMPTY_LEN)-1)<<USB_EP2_TX_FIFO_EMPTY_POS)
#define USB_EP2_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP2_TX_FIFO_EMPTY_LEN)-1)<<USB_EP2_TX_FIFO_EMPTY_POS))
#define USB_EP2_TX_FIFO_FULL                                    USB_EP2_TX_FIFO_FULL
#define USB_EP2_TX_FIFO_FULL_POS                                (15U)
#define USB_EP2_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP2_TX_FIFO_FULL_MSK                                (((1U<<USB_EP2_TX_FIFO_FULL_LEN)-1)<<USB_EP2_TX_FIFO_FULL_POS)
#define USB_EP2_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP2_TX_FIFO_FULL_LEN)-1)<<USB_EP2_TX_FIFO_FULL_POS))
#define USB_EP2_RX_FIFO_CNT                                     USB_EP2_RX_FIFO_CNT
#define USB_EP2_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP2_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP2_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP2_RX_FIFO_CNT_LEN)-1)<<USB_EP2_RX_FIFO_CNT_POS)
#define USB_EP2_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP2_RX_FIFO_CNT_LEN)-1)<<USB_EP2_RX_FIFO_CNT_POS))
#define USB_EP2_RX_FIFO_EMPTY                                   USB_EP2_RX_FIFO_EMPTY
#define USB_EP2_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP2_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP2_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP2_RX_FIFO_EMPTY_LEN)-1)<<USB_EP2_RX_FIFO_EMPTY_POS)
#define USB_EP2_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP2_RX_FIFO_EMPTY_LEN)-1)<<USB_EP2_RX_FIFO_EMPTY_POS))
#define USB_EP2_RX_FIFO_FULL                                    USB_EP2_RX_FIFO_FULL
#define USB_EP2_RX_FIFO_FULL_POS                                (31U)
#define USB_EP2_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP2_RX_FIFO_FULL_MSK                                (((1U<<USB_EP2_RX_FIFO_FULL_LEN)-1)<<USB_EP2_RX_FIFO_FULL_POS)
#define USB_EP2_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP2_RX_FIFO_FULL_LEN)-1)<<USB_EP2_RX_FIFO_FULL_POS))

/* 0x128 : ep2_tx_fifo_wdata */
#define USB_EP2_TX_FIFO_WDATA_OFFSET                            (0x128)
#define USB_EP2_TX_FIFO_WDATA                                   USB_EP2_TX_FIFO_WDATA
#define USB_EP2_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP2_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP2_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP2_TX_FIFO_WDATA_LEN)-1)<<USB_EP2_TX_FIFO_WDATA_POS)
#define USB_EP2_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP2_TX_FIFO_WDATA_LEN)-1)<<USB_EP2_TX_FIFO_WDATA_POS))

/* 0x12C : ep2_rx_fifo_rdata */
#define USB_EP2_RX_FIFO_RDATA_OFFSET                            (0x12C)
#define USB_EP2_RX_FIFO_RDATA                                   USB_EP2_RX_FIFO_RDATA
#define USB_EP2_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP2_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP2_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP2_RX_FIFO_RDATA_LEN)-1)<<USB_EP2_RX_FIFO_RDATA_POS)
#define USB_EP2_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP2_RX_FIFO_RDATA_LEN)-1)<<USB_EP2_RX_FIFO_RDATA_POS))

/* 0x130 : ep3_fifo_config */
#define USB_EP3_FIFO_CONFIG_OFFSET                              (0x130)
#define USB_EP3_DMA_TX_EN                                       USB_EP3_DMA_TX_EN
#define USB_EP3_DMA_TX_EN_POS                                   (0U)
#define USB_EP3_DMA_TX_EN_LEN                                   (1U)
#define USB_EP3_DMA_TX_EN_MSK                                   (((1U<<USB_EP3_DMA_TX_EN_LEN)-1)<<USB_EP3_DMA_TX_EN_POS)
#define USB_EP3_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP3_DMA_TX_EN_LEN)-1)<<USB_EP3_DMA_TX_EN_POS))
#define USB_EP3_DMA_RX_EN                                       USB_EP3_DMA_RX_EN
#define USB_EP3_DMA_RX_EN_POS                                   (1U)
#define USB_EP3_DMA_RX_EN_LEN                                   (1U)
#define USB_EP3_DMA_RX_EN_MSK                                   (((1U<<USB_EP3_DMA_RX_EN_LEN)-1)<<USB_EP3_DMA_RX_EN_POS)
#define USB_EP3_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP3_DMA_RX_EN_LEN)-1)<<USB_EP3_DMA_RX_EN_POS))
#define USB_EP3_TX_FIFO_CLR                                     USB_EP3_TX_FIFO_CLR
#define USB_EP3_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP3_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP3_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP3_TX_FIFO_CLR_LEN)-1)<<USB_EP3_TX_FIFO_CLR_POS)
#define USB_EP3_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP3_TX_FIFO_CLR_LEN)-1)<<USB_EP3_TX_FIFO_CLR_POS))
#define USB_EP3_RX_FIFO_CLR                                     USB_EP3_RX_FIFO_CLR
#define USB_EP3_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP3_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP3_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP3_RX_FIFO_CLR_LEN)-1)<<USB_EP3_RX_FIFO_CLR_POS)
#define USB_EP3_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP3_RX_FIFO_CLR_LEN)-1)<<USB_EP3_RX_FIFO_CLR_POS))
#define USB_EP3_TX_FIFO_OVERFLOW                                USB_EP3_TX_FIFO_OVERFLOW
#define USB_EP3_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP3_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP3_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP3_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP3_TX_FIFO_OVERFLOW_POS)
#define USB_EP3_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP3_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP3_TX_FIFO_OVERFLOW_POS))
#define USB_EP3_TX_FIFO_UNDERFLOW                               USB_EP3_TX_FIFO_UNDERFLOW
#define USB_EP3_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP3_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP3_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP3_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP3_TX_FIFO_UNDERFLOW_POS)
#define USB_EP3_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP3_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP3_TX_FIFO_UNDERFLOW_POS))
#define USB_EP3_RX_FIFO_OVERFLOW                                USB_EP3_RX_FIFO_OVERFLOW
#define USB_EP3_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP3_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP3_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP3_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP3_RX_FIFO_OVERFLOW_POS)
#define USB_EP3_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP3_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP3_RX_FIFO_OVERFLOW_POS))
#define USB_EP3_RX_FIFO_UNDERFLOW                               USB_EP3_RX_FIFO_UNDERFLOW
#define USB_EP3_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP3_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP3_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP3_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP3_RX_FIFO_UNDERFLOW_POS)
#define USB_EP3_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP3_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP3_RX_FIFO_UNDERFLOW_POS))

/* 0x134 : ep3_fifo_status */
#define USB_EP3_FIFO_STATUS_OFFSET                              (0x134)
#define USB_EP3_TX_FIFO_CNT                                     USB_EP3_TX_FIFO_CNT
#define USB_EP3_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP3_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP3_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP3_TX_FIFO_CNT_LEN)-1)<<USB_EP3_TX_FIFO_CNT_POS)
#define USB_EP3_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP3_TX_FIFO_CNT_LEN)-1)<<USB_EP3_TX_FIFO_CNT_POS))
#define USB_EP3_TX_FIFO_EMPTY                                   USB_EP3_TX_FIFO_EMPTY
#define USB_EP3_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP3_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP3_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP3_TX_FIFO_EMPTY_LEN)-1)<<USB_EP3_TX_FIFO_EMPTY_POS)
#define USB_EP3_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP3_TX_FIFO_EMPTY_LEN)-1)<<USB_EP3_TX_FIFO_EMPTY_POS))
#define USB_EP3_TX_FIFO_FULL                                    USB_EP3_TX_FIFO_FULL
#define USB_EP3_TX_FIFO_FULL_POS                                (15U)
#define USB_EP3_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP3_TX_FIFO_FULL_MSK                                (((1U<<USB_EP3_TX_FIFO_FULL_LEN)-1)<<USB_EP3_TX_FIFO_FULL_POS)
#define USB_EP3_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP3_TX_FIFO_FULL_LEN)-1)<<USB_EP3_TX_FIFO_FULL_POS))
#define USB_EP3_RX_FIFO_CNT                                     USB_EP3_RX_FIFO_CNT
#define USB_EP3_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP3_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP3_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP3_RX_FIFO_CNT_LEN)-1)<<USB_EP3_RX_FIFO_CNT_POS)
#define USB_EP3_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP3_RX_FIFO_CNT_LEN)-1)<<USB_EP3_RX_FIFO_CNT_POS))
#define USB_EP3_RX_FIFO_EMPTY                                   USB_EP3_RX_FIFO_EMPTY
#define USB_EP3_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP3_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP3_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP3_RX_FIFO_EMPTY_LEN)-1)<<USB_EP3_RX_FIFO_EMPTY_POS)
#define USB_EP3_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP3_RX_FIFO_EMPTY_LEN)-1)<<USB_EP3_RX_FIFO_EMPTY_POS))
#define USB_EP3_RX_FIFO_FULL                                    USB_EP3_RX_FIFO_FULL
#define USB_EP3_RX_FIFO_FULL_POS                                (31U)
#define USB_EP3_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP3_RX_FIFO_FULL_MSK                                (((1U<<USB_EP3_RX_FIFO_FULL_LEN)-1)<<USB_EP3_RX_FIFO_FULL_POS)
#define USB_EP3_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP3_RX_FIFO_FULL_LEN)-1)<<USB_EP3_RX_FIFO_FULL_POS))

/* 0x138 : ep3_tx_fifo_wdata */
#define USB_EP3_TX_FIFO_WDATA_OFFSET                            (0x138)
#define USB_EP3_TX_FIFO_WDATA                                   USB_EP3_TX_FIFO_WDATA
#define USB_EP3_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP3_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP3_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP3_TX_FIFO_WDATA_LEN)-1)<<USB_EP3_TX_FIFO_WDATA_POS)
#define USB_EP3_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP3_TX_FIFO_WDATA_LEN)-1)<<USB_EP3_TX_FIFO_WDATA_POS))

/* 0x13C : ep3_rx_fifo_rdata */
#define USB_EP3_RX_FIFO_RDATA_OFFSET                            (0x13C)
#define USB_EP3_RX_FIFO_RDATA                                   USB_EP3_RX_FIFO_RDATA
#define USB_EP3_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP3_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP3_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP3_RX_FIFO_RDATA_LEN)-1)<<USB_EP3_RX_FIFO_RDATA_POS)
#define USB_EP3_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP3_RX_FIFO_RDATA_LEN)-1)<<USB_EP3_RX_FIFO_RDATA_POS))

/* 0x140 : ep4_fifo_config */
#define USB_EP4_FIFO_CONFIG_OFFSET                              (0x140)
#define USB_EP4_DMA_TX_EN                                       USB_EP4_DMA_TX_EN
#define USB_EP4_DMA_TX_EN_POS                                   (0U)
#define USB_EP4_DMA_TX_EN_LEN                                   (1U)
#define USB_EP4_DMA_TX_EN_MSK                                   (((1U<<USB_EP4_DMA_TX_EN_LEN)-1)<<USB_EP4_DMA_TX_EN_POS)
#define USB_EP4_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP4_DMA_TX_EN_LEN)-1)<<USB_EP4_DMA_TX_EN_POS))
#define USB_EP4_DMA_RX_EN                                       USB_EP4_DMA_RX_EN
#define USB_EP4_DMA_RX_EN_POS                                   (1U)
#define USB_EP4_DMA_RX_EN_LEN                                   (1U)
#define USB_EP4_DMA_RX_EN_MSK                                   (((1U<<USB_EP4_DMA_RX_EN_LEN)-1)<<USB_EP4_DMA_RX_EN_POS)
#define USB_EP4_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP4_DMA_RX_EN_LEN)-1)<<USB_EP4_DMA_RX_EN_POS))
#define USB_EP4_TX_FIFO_CLR                                     USB_EP4_TX_FIFO_CLR
#define USB_EP4_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP4_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP4_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP4_TX_FIFO_CLR_LEN)-1)<<USB_EP4_TX_FIFO_CLR_POS)
#define USB_EP4_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP4_TX_FIFO_CLR_LEN)-1)<<USB_EP4_TX_FIFO_CLR_POS))
#define USB_EP4_RX_FIFO_CLR                                     USB_EP4_RX_FIFO_CLR
#define USB_EP4_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP4_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP4_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP4_RX_FIFO_CLR_LEN)-1)<<USB_EP4_RX_FIFO_CLR_POS)
#define USB_EP4_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP4_RX_FIFO_CLR_LEN)-1)<<USB_EP4_RX_FIFO_CLR_POS))
#define USB_EP4_TX_FIFO_OVERFLOW                                USB_EP4_TX_FIFO_OVERFLOW
#define USB_EP4_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP4_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP4_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP4_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP4_TX_FIFO_OVERFLOW_POS)
#define USB_EP4_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP4_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP4_TX_FIFO_OVERFLOW_POS))
#define USB_EP4_TX_FIFO_UNDERFLOW                               USB_EP4_TX_FIFO_UNDERFLOW
#define USB_EP4_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP4_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP4_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP4_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP4_TX_FIFO_UNDERFLOW_POS)
#define USB_EP4_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP4_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP4_TX_FIFO_UNDERFLOW_POS))
#define USB_EP4_RX_FIFO_OVERFLOW                                USB_EP4_RX_FIFO_OVERFLOW
#define USB_EP4_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP4_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP4_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP4_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP4_RX_FIFO_OVERFLOW_POS)
#define USB_EP4_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP4_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP4_RX_FIFO_OVERFLOW_POS))
#define USB_EP4_RX_FIFO_UNDERFLOW                               USB_EP4_RX_FIFO_UNDERFLOW
#define USB_EP4_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP4_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP4_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP4_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP4_RX_FIFO_UNDERFLOW_POS)
#define USB_EP4_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP4_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP4_RX_FIFO_UNDERFLOW_POS))

/* 0x144 : ep4_fifo_status */
#define USB_EP4_FIFO_STATUS_OFFSET                              (0x144)
#define USB_EP4_TX_FIFO_CNT                                     USB_EP4_TX_FIFO_CNT
#define USB_EP4_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP4_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP4_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP4_TX_FIFO_CNT_LEN)-1)<<USB_EP4_TX_FIFO_CNT_POS)
#define USB_EP4_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP4_TX_FIFO_CNT_LEN)-1)<<USB_EP4_TX_FIFO_CNT_POS))
#define USB_EP4_TX_FIFO_EMPTY                                   USB_EP4_TX_FIFO_EMPTY
#define USB_EP4_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP4_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP4_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP4_TX_FIFO_EMPTY_LEN)-1)<<USB_EP4_TX_FIFO_EMPTY_POS)
#define USB_EP4_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP4_TX_FIFO_EMPTY_LEN)-1)<<USB_EP4_TX_FIFO_EMPTY_POS))
#define USB_EP4_TX_FIFO_FULL                                    USB_EP4_TX_FIFO_FULL
#define USB_EP4_TX_FIFO_FULL_POS                                (15U)
#define USB_EP4_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP4_TX_FIFO_FULL_MSK                                (((1U<<USB_EP4_TX_FIFO_FULL_LEN)-1)<<USB_EP4_TX_FIFO_FULL_POS)
#define USB_EP4_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP4_TX_FIFO_FULL_LEN)-1)<<USB_EP4_TX_FIFO_FULL_POS))
#define USB_EP4_RX_FIFO_CNT                                     USB_EP4_RX_FIFO_CNT
#define USB_EP4_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP4_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP4_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP4_RX_FIFO_CNT_LEN)-1)<<USB_EP4_RX_FIFO_CNT_POS)
#define USB_EP4_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP4_RX_FIFO_CNT_LEN)-1)<<USB_EP4_RX_FIFO_CNT_POS))
#define USB_EP4_RX_FIFO_EMPTY                                   USB_EP4_RX_FIFO_EMPTY
#define USB_EP4_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP4_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP4_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP4_RX_FIFO_EMPTY_LEN)-1)<<USB_EP4_RX_FIFO_EMPTY_POS)
#define USB_EP4_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP4_RX_FIFO_EMPTY_LEN)-1)<<USB_EP4_RX_FIFO_EMPTY_POS))
#define USB_EP4_RX_FIFO_FULL                                    USB_EP4_RX_FIFO_FULL
#define USB_EP4_RX_FIFO_FULL_POS                                (31U)
#define USB_EP4_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP4_RX_FIFO_FULL_MSK                                (((1U<<USB_EP4_RX_FIFO_FULL_LEN)-1)<<USB_EP4_RX_FIFO_FULL_POS)
#define USB_EP4_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP4_RX_FIFO_FULL_LEN)-1)<<USB_EP4_RX_FIFO_FULL_POS))

/* 0x148 : ep4_tx_fifo_wdata */
#define USB_EP4_TX_FIFO_WDATA_OFFSET                            (0x148)
#define USB_EP4_TX_FIFO_WDATA                                   USB_EP4_TX_FIFO_WDATA
#define USB_EP4_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP4_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP4_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP4_TX_FIFO_WDATA_LEN)-1)<<USB_EP4_TX_FIFO_WDATA_POS)
#define USB_EP4_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP4_TX_FIFO_WDATA_LEN)-1)<<USB_EP4_TX_FIFO_WDATA_POS))

/* 0x14C : ep4_rx_fifo_rdata */
#define USB_EP4_RX_FIFO_RDATA_OFFSET                            (0x14C)
#define USB_EP4_RX_FIFO_RDATA                                   USB_EP4_RX_FIFO_RDATA
#define USB_EP4_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP4_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP4_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP4_RX_FIFO_RDATA_LEN)-1)<<USB_EP4_RX_FIFO_RDATA_POS)
#define USB_EP4_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP4_RX_FIFO_RDATA_LEN)-1)<<USB_EP4_RX_FIFO_RDATA_POS))

/* 0x150 : ep5_fifo_config */
#define USB_EP5_FIFO_CONFIG_OFFSET                              (0x150)
#define USB_EP5_DMA_TX_EN                                       USB_EP5_DMA_TX_EN
#define USB_EP5_DMA_TX_EN_POS                                   (0U)
#define USB_EP5_DMA_TX_EN_LEN                                   (1U)
#define USB_EP5_DMA_TX_EN_MSK                                   (((1U<<USB_EP5_DMA_TX_EN_LEN)-1)<<USB_EP5_DMA_TX_EN_POS)
#define USB_EP5_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP5_DMA_TX_EN_LEN)-1)<<USB_EP5_DMA_TX_EN_POS))
#define USB_EP5_DMA_RX_EN                                       USB_EP5_DMA_RX_EN
#define USB_EP5_DMA_RX_EN_POS                                   (1U)
#define USB_EP5_DMA_RX_EN_LEN                                   (1U)
#define USB_EP5_DMA_RX_EN_MSK                                   (((1U<<USB_EP5_DMA_RX_EN_LEN)-1)<<USB_EP5_DMA_RX_EN_POS)
#define USB_EP5_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP5_DMA_RX_EN_LEN)-1)<<USB_EP5_DMA_RX_EN_POS))
#define USB_EP5_TX_FIFO_CLR                                     USB_EP5_TX_FIFO_CLR
#define USB_EP5_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP5_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP5_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP5_TX_FIFO_CLR_LEN)-1)<<USB_EP5_TX_FIFO_CLR_POS)
#define USB_EP5_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP5_TX_FIFO_CLR_LEN)-1)<<USB_EP5_TX_FIFO_CLR_POS))
#define USB_EP5_RX_FIFO_CLR                                     USB_EP5_RX_FIFO_CLR
#define USB_EP5_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP5_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP5_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP5_RX_FIFO_CLR_LEN)-1)<<USB_EP5_RX_FIFO_CLR_POS)
#define USB_EP5_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP5_RX_FIFO_CLR_LEN)-1)<<USB_EP5_RX_FIFO_CLR_POS))
#define USB_EP5_TX_FIFO_OVERFLOW                                USB_EP5_TX_FIFO_OVERFLOW
#define USB_EP5_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP5_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP5_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP5_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP5_TX_FIFO_OVERFLOW_POS)
#define USB_EP5_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP5_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP5_TX_FIFO_OVERFLOW_POS))
#define USB_EP5_TX_FIFO_UNDERFLOW                               USB_EP5_TX_FIFO_UNDERFLOW
#define USB_EP5_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP5_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP5_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP5_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP5_TX_FIFO_UNDERFLOW_POS)
#define USB_EP5_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP5_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP5_TX_FIFO_UNDERFLOW_POS))
#define USB_EP5_RX_FIFO_OVERFLOW                                USB_EP5_RX_FIFO_OVERFLOW
#define USB_EP5_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP5_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP5_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP5_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP5_RX_FIFO_OVERFLOW_POS)
#define USB_EP5_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP5_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP5_RX_FIFO_OVERFLOW_POS))
#define USB_EP5_RX_FIFO_UNDERFLOW                               USB_EP5_RX_FIFO_UNDERFLOW
#define USB_EP5_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP5_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP5_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP5_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP5_RX_FIFO_UNDERFLOW_POS)
#define USB_EP5_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP5_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP5_RX_FIFO_UNDERFLOW_POS))

/* 0x154 : ep5_fifo_status */
#define USB_EP5_FIFO_STATUS_OFFSET                              (0x154)
#define USB_EP5_TX_FIFO_CNT                                     USB_EP5_TX_FIFO_CNT
#define USB_EP5_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP5_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP5_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP5_TX_FIFO_CNT_LEN)-1)<<USB_EP5_TX_FIFO_CNT_POS)
#define USB_EP5_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP5_TX_FIFO_CNT_LEN)-1)<<USB_EP5_TX_FIFO_CNT_POS))
#define USB_EP5_TX_FIFO_EMPTY                                   USB_EP5_TX_FIFO_EMPTY
#define USB_EP5_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP5_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP5_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP5_TX_FIFO_EMPTY_LEN)-1)<<USB_EP5_TX_FIFO_EMPTY_POS)
#define USB_EP5_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP5_TX_FIFO_EMPTY_LEN)-1)<<USB_EP5_TX_FIFO_EMPTY_POS))
#define USB_EP5_TX_FIFO_FULL                                    USB_EP5_TX_FIFO_FULL
#define USB_EP5_TX_FIFO_FULL_POS                                (15U)
#define USB_EP5_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP5_TX_FIFO_FULL_MSK                                (((1U<<USB_EP5_TX_FIFO_FULL_LEN)-1)<<USB_EP5_TX_FIFO_FULL_POS)
#define USB_EP5_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP5_TX_FIFO_FULL_LEN)-1)<<USB_EP5_TX_FIFO_FULL_POS))
#define USB_EP5_RX_FIFO_CNT                                     USB_EP5_RX_FIFO_CNT
#define USB_EP5_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP5_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP5_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP5_RX_FIFO_CNT_LEN)-1)<<USB_EP5_RX_FIFO_CNT_POS)
#define USB_EP5_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP5_RX_FIFO_CNT_LEN)-1)<<USB_EP5_RX_FIFO_CNT_POS))
#define USB_EP5_RX_FIFO_EMPTY                                   USB_EP5_RX_FIFO_EMPTY
#define USB_EP5_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP5_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP5_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP5_RX_FIFO_EMPTY_LEN)-1)<<USB_EP5_RX_FIFO_EMPTY_POS)
#define USB_EP5_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP5_RX_FIFO_EMPTY_LEN)-1)<<USB_EP5_RX_FIFO_EMPTY_POS))
#define USB_EP5_RX_FIFO_FULL                                    USB_EP5_RX_FIFO_FULL
#define USB_EP5_RX_FIFO_FULL_POS                                (31U)
#define USB_EP5_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP5_RX_FIFO_FULL_MSK                                (((1U<<USB_EP5_RX_FIFO_FULL_LEN)-1)<<USB_EP5_RX_FIFO_FULL_POS)
#define USB_EP5_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP5_RX_FIFO_FULL_LEN)-1)<<USB_EP5_RX_FIFO_FULL_POS))

/* 0x158 : ep5_tx_fifo_wdata */
#define USB_EP5_TX_FIFO_WDATA_OFFSET                            (0x158)
#define USB_EP5_TX_FIFO_WDATA                                   USB_EP5_TX_FIFO_WDATA
#define USB_EP5_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP5_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP5_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP5_TX_FIFO_WDATA_LEN)-1)<<USB_EP5_TX_FIFO_WDATA_POS)
#define USB_EP5_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP5_TX_FIFO_WDATA_LEN)-1)<<USB_EP5_TX_FIFO_WDATA_POS))

/* 0x15C : ep5_rx_fifo_rdata */
#define USB_EP5_RX_FIFO_RDATA_OFFSET                            (0x15C)
#define USB_EP5_RX_FIFO_RDATA                                   USB_EP5_RX_FIFO_RDATA
#define USB_EP5_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP5_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP5_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP5_RX_FIFO_RDATA_LEN)-1)<<USB_EP5_RX_FIFO_RDATA_POS)
#define USB_EP5_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP5_RX_FIFO_RDATA_LEN)-1)<<USB_EP5_RX_FIFO_RDATA_POS))

/* 0x160 : ep6_fifo_config */
#define USB_EP6_FIFO_CONFIG_OFFSET                              (0x160)
#define USB_EP6_DMA_TX_EN                                       USB_EP6_DMA_TX_EN
#define USB_EP6_DMA_TX_EN_POS                                   (0U)
#define USB_EP6_DMA_TX_EN_LEN                                   (1U)
#define USB_EP6_DMA_TX_EN_MSK                                   (((1U<<USB_EP6_DMA_TX_EN_LEN)-1)<<USB_EP6_DMA_TX_EN_POS)
#define USB_EP6_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP6_DMA_TX_EN_LEN)-1)<<USB_EP6_DMA_TX_EN_POS))
#define USB_EP6_DMA_RX_EN                                       USB_EP6_DMA_RX_EN
#define USB_EP6_DMA_RX_EN_POS                                   (1U)
#define USB_EP6_DMA_RX_EN_LEN                                   (1U)
#define USB_EP6_DMA_RX_EN_MSK                                   (((1U<<USB_EP6_DMA_RX_EN_LEN)-1)<<USB_EP6_DMA_RX_EN_POS)
#define USB_EP6_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP6_DMA_RX_EN_LEN)-1)<<USB_EP6_DMA_RX_EN_POS))
#define USB_EP6_TX_FIFO_CLR                                     USB_EP6_TX_FIFO_CLR
#define USB_EP6_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP6_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP6_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP6_TX_FIFO_CLR_LEN)-1)<<USB_EP6_TX_FIFO_CLR_POS)
#define USB_EP6_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP6_TX_FIFO_CLR_LEN)-1)<<USB_EP6_TX_FIFO_CLR_POS))
#define USB_EP6_RX_FIFO_CLR                                     USB_EP6_RX_FIFO_CLR
#define USB_EP6_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP6_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP6_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP6_RX_FIFO_CLR_LEN)-1)<<USB_EP6_RX_FIFO_CLR_POS)
#define USB_EP6_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP6_RX_FIFO_CLR_LEN)-1)<<USB_EP6_RX_FIFO_CLR_POS))
#define USB_EP6_TX_FIFO_OVERFLOW                                USB_EP6_TX_FIFO_OVERFLOW
#define USB_EP6_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP6_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP6_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP6_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP6_TX_FIFO_OVERFLOW_POS)
#define USB_EP6_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP6_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP6_TX_FIFO_OVERFLOW_POS))
#define USB_EP6_TX_FIFO_UNDERFLOW                               USB_EP6_TX_FIFO_UNDERFLOW
#define USB_EP6_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP6_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP6_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP6_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP6_TX_FIFO_UNDERFLOW_POS)
#define USB_EP6_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP6_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP6_TX_FIFO_UNDERFLOW_POS))
#define USB_EP6_RX_FIFO_OVERFLOW                                USB_EP6_RX_FIFO_OVERFLOW
#define USB_EP6_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP6_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP6_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP6_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP6_RX_FIFO_OVERFLOW_POS)
#define USB_EP6_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP6_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP6_RX_FIFO_OVERFLOW_POS))
#define USB_EP6_RX_FIFO_UNDERFLOW                               USB_EP6_RX_FIFO_UNDERFLOW
#define USB_EP6_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP6_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP6_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP6_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP6_RX_FIFO_UNDERFLOW_POS)
#define USB_EP6_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP6_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP6_RX_FIFO_UNDERFLOW_POS))

/* 0x164 : ep6_fifo_status */
#define USB_EP6_FIFO_STATUS_OFFSET                              (0x164)
#define USB_EP6_TX_FIFO_CNT                                     USB_EP6_TX_FIFO_CNT
#define USB_EP6_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP6_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP6_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP6_TX_FIFO_CNT_LEN)-1)<<USB_EP6_TX_FIFO_CNT_POS)
#define USB_EP6_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP6_TX_FIFO_CNT_LEN)-1)<<USB_EP6_TX_FIFO_CNT_POS))
#define USB_EP6_TX_FIFO_EMPTY                                   USB_EP6_TX_FIFO_EMPTY
#define USB_EP6_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP6_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP6_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP6_TX_FIFO_EMPTY_LEN)-1)<<USB_EP6_TX_FIFO_EMPTY_POS)
#define USB_EP6_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP6_TX_FIFO_EMPTY_LEN)-1)<<USB_EP6_TX_FIFO_EMPTY_POS))
#define USB_EP6_TX_FIFO_FULL                                    USB_EP6_TX_FIFO_FULL
#define USB_EP6_TX_FIFO_FULL_POS                                (15U)
#define USB_EP6_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP6_TX_FIFO_FULL_MSK                                (((1U<<USB_EP6_TX_FIFO_FULL_LEN)-1)<<USB_EP6_TX_FIFO_FULL_POS)
#define USB_EP6_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP6_TX_FIFO_FULL_LEN)-1)<<USB_EP6_TX_FIFO_FULL_POS))
#define USB_EP6_RX_FIFO_CNT                                     USB_EP6_RX_FIFO_CNT
#define USB_EP6_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP6_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP6_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP6_RX_FIFO_CNT_LEN)-1)<<USB_EP6_RX_FIFO_CNT_POS)
#define USB_EP6_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP6_RX_FIFO_CNT_LEN)-1)<<USB_EP6_RX_FIFO_CNT_POS))
#define USB_EP6_RX_FIFO_EMPTY                                   USB_EP6_RX_FIFO_EMPTY
#define USB_EP6_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP6_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP6_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP6_RX_FIFO_EMPTY_LEN)-1)<<USB_EP6_RX_FIFO_EMPTY_POS)
#define USB_EP6_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP6_RX_FIFO_EMPTY_LEN)-1)<<USB_EP6_RX_FIFO_EMPTY_POS))
#define USB_EP6_RX_FIFO_FULL                                    USB_EP6_RX_FIFO_FULL
#define USB_EP6_RX_FIFO_FULL_POS                                (31U)
#define USB_EP6_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP6_RX_FIFO_FULL_MSK                                (((1U<<USB_EP6_RX_FIFO_FULL_LEN)-1)<<USB_EP6_RX_FIFO_FULL_POS)
#define USB_EP6_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP6_RX_FIFO_FULL_LEN)-1)<<USB_EP6_RX_FIFO_FULL_POS))

/* 0x168 : ep6_tx_fifo_wdata */
#define USB_EP6_TX_FIFO_WDATA_OFFSET                            (0x168)
#define USB_EP6_TX_FIFO_WDATA                                   USB_EP6_TX_FIFO_WDATA
#define USB_EP6_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP6_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP6_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP6_TX_FIFO_WDATA_LEN)-1)<<USB_EP6_TX_FIFO_WDATA_POS)
#define USB_EP6_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP6_TX_FIFO_WDATA_LEN)-1)<<USB_EP6_TX_FIFO_WDATA_POS))

/* 0x16C : ep6_rx_fifo_rdata */
#define USB_EP6_RX_FIFO_RDATA_OFFSET                            (0x16C)
#define USB_EP6_RX_FIFO_RDATA                                   USB_EP6_RX_FIFO_RDATA
#define USB_EP6_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP6_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP6_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP6_RX_FIFO_RDATA_LEN)-1)<<USB_EP6_RX_FIFO_RDATA_POS)
#define USB_EP6_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP6_RX_FIFO_RDATA_LEN)-1)<<USB_EP6_RX_FIFO_RDATA_POS))

/* 0x170 : ep7_fifo_config */
#define USB_EP7_FIFO_CONFIG_OFFSET                              (0x170)
#define USB_EP7_DMA_TX_EN                                       USB_EP7_DMA_TX_EN
#define USB_EP7_DMA_TX_EN_POS                                   (0U)
#define USB_EP7_DMA_TX_EN_LEN                                   (1U)
#define USB_EP7_DMA_TX_EN_MSK                                   (((1U<<USB_EP7_DMA_TX_EN_LEN)-1)<<USB_EP7_DMA_TX_EN_POS)
#define USB_EP7_DMA_TX_EN_UMSK                                  (~(((1U<<USB_EP7_DMA_TX_EN_LEN)-1)<<USB_EP7_DMA_TX_EN_POS))
#define USB_EP7_DMA_RX_EN                                       USB_EP7_DMA_RX_EN
#define USB_EP7_DMA_RX_EN_POS                                   (1U)
#define USB_EP7_DMA_RX_EN_LEN                                   (1U)
#define USB_EP7_DMA_RX_EN_MSK                                   (((1U<<USB_EP7_DMA_RX_EN_LEN)-1)<<USB_EP7_DMA_RX_EN_POS)
#define USB_EP7_DMA_RX_EN_UMSK                                  (~(((1U<<USB_EP7_DMA_RX_EN_LEN)-1)<<USB_EP7_DMA_RX_EN_POS))
#define USB_EP7_TX_FIFO_CLR                                     USB_EP7_TX_FIFO_CLR
#define USB_EP7_TX_FIFO_CLR_POS                                 (2U)
#define USB_EP7_TX_FIFO_CLR_LEN                                 (1U)
#define USB_EP7_TX_FIFO_CLR_MSK                                 (((1U<<USB_EP7_TX_FIFO_CLR_LEN)-1)<<USB_EP7_TX_FIFO_CLR_POS)
#define USB_EP7_TX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP7_TX_FIFO_CLR_LEN)-1)<<USB_EP7_TX_FIFO_CLR_POS))
#define USB_EP7_RX_FIFO_CLR                                     USB_EP7_RX_FIFO_CLR
#define USB_EP7_RX_FIFO_CLR_POS                                 (3U)
#define USB_EP7_RX_FIFO_CLR_LEN                                 (1U)
#define USB_EP7_RX_FIFO_CLR_MSK                                 (((1U<<USB_EP7_RX_FIFO_CLR_LEN)-1)<<USB_EP7_RX_FIFO_CLR_POS)
#define USB_EP7_RX_FIFO_CLR_UMSK                                (~(((1U<<USB_EP7_RX_FIFO_CLR_LEN)-1)<<USB_EP7_RX_FIFO_CLR_POS))
#define USB_EP7_TX_FIFO_OVERFLOW                                USB_EP7_TX_FIFO_OVERFLOW
#define USB_EP7_TX_FIFO_OVERFLOW_POS                            (4U)
#define USB_EP7_TX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP7_TX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP7_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP7_TX_FIFO_OVERFLOW_POS)
#define USB_EP7_TX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP7_TX_FIFO_OVERFLOW_LEN)-1)<<USB_EP7_TX_FIFO_OVERFLOW_POS))
#define USB_EP7_TX_FIFO_UNDERFLOW                               USB_EP7_TX_FIFO_UNDERFLOW
#define USB_EP7_TX_FIFO_UNDERFLOW_POS                           (5U)
#define USB_EP7_TX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP7_TX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP7_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP7_TX_FIFO_UNDERFLOW_POS)
#define USB_EP7_TX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP7_TX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP7_TX_FIFO_UNDERFLOW_POS))
#define USB_EP7_RX_FIFO_OVERFLOW                                USB_EP7_RX_FIFO_OVERFLOW
#define USB_EP7_RX_FIFO_OVERFLOW_POS                            (6U)
#define USB_EP7_RX_FIFO_OVERFLOW_LEN                            (1U)
#define USB_EP7_RX_FIFO_OVERFLOW_MSK                            (((1U<<USB_EP7_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP7_RX_FIFO_OVERFLOW_POS)
#define USB_EP7_RX_FIFO_OVERFLOW_UMSK                           (~(((1U<<USB_EP7_RX_FIFO_OVERFLOW_LEN)-1)<<USB_EP7_RX_FIFO_OVERFLOW_POS))
#define USB_EP7_RX_FIFO_UNDERFLOW                               USB_EP7_RX_FIFO_UNDERFLOW
#define USB_EP7_RX_FIFO_UNDERFLOW_POS                           (7U)
#define USB_EP7_RX_FIFO_UNDERFLOW_LEN                           (1U)
#define USB_EP7_RX_FIFO_UNDERFLOW_MSK                           (((1U<<USB_EP7_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP7_RX_FIFO_UNDERFLOW_POS)
#define USB_EP7_RX_FIFO_UNDERFLOW_UMSK                          (~(((1U<<USB_EP7_RX_FIFO_UNDERFLOW_LEN)-1)<<USB_EP7_RX_FIFO_UNDERFLOW_POS))

/* 0x174 : ep7_fifo_status */
#define USB_EP7_FIFO_STATUS_OFFSET                              (0x174)
#define USB_EP7_TX_FIFO_CNT                                     USB_EP7_TX_FIFO_CNT
#define USB_EP7_TX_FIFO_CNT_POS                                 (0U)
#define USB_EP7_TX_FIFO_CNT_LEN                                 (7U)
#define USB_EP7_TX_FIFO_CNT_MSK                                 (((1U<<USB_EP7_TX_FIFO_CNT_LEN)-1)<<USB_EP7_TX_FIFO_CNT_POS)
#define USB_EP7_TX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP7_TX_FIFO_CNT_LEN)-1)<<USB_EP7_TX_FIFO_CNT_POS))
#define USB_EP7_TX_FIFO_EMPTY                                   USB_EP7_TX_FIFO_EMPTY
#define USB_EP7_TX_FIFO_EMPTY_POS                               (14U)
#define USB_EP7_TX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP7_TX_FIFO_EMPTY_MSK                               (((1U<<USB_EP7_TX_FIFO_EMPTY_LEN)-1)<<USB_EP7_TX_FIFO_EMPTY_POS)
#define USB_EP7_TX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP7_TX_FIFO_EMPTY_LEN)-1)<<USB_EP7_TX_FIFO_EMPTY_POS))
#define USB_EP7_TX_FIFO_FULL                                    USB_EP7_TX_FIFO_FULL
#define USB_EP7_TX_FIFO_FULL_POS                                (15U)
#define USB_EP7_TX_FIFO_FULL_LEN                                (1U)
#define USB_EP7_TX_FIFO_FULL_MSK                                (((1U<<USB_EP7_TX_FIFO_FULL_LEN)-1)<<USB_EP7_TX_FIFO_FULL_POS)
#define USB_EP7_TX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP7_TX_FIFO_FULL_LEN)-1)<<USB_EP7_TX_FIFO_FULL_POS))
#define USB_EP7_RX_FIFO_CNT                                     USB_EP7_RX_FIFO_CNT
#define USB_EP7_RX_FIFO_CNT_POS                                 (16U)
#define USB_EP7_RX_FIFO_CNT_LEN                                 (7U)
#define USB_EP7_RX_FIFO_CNT_MSK                                 (((1U<<USB_EP7_RX_FIFO_CNT_LEN)-1)<<USB_EP7_RX_FIFO_CNT_POS)
#define USB_EP7_RX_FIFO_CNT_UMSK                                (~(((1U<<USB_EP7_RX_FIFO_CNT_LEN)-1)<<USB_EP7_RX_FIFO_CNT_POS))
#define USB_EP7_RX_FIFO_EMPTY                                   USB_EP7_RX_FIFO_EMPTY
#define USB_EP7_RX_FIFO_EMPTY_POS                               (30U)
#define USB_EP7_RX_FIFO_EMPTY_LEN                               (1U)
#define USB_EP7_RX_FIFO_EMPTY_MSK                               (((1U<<USB_EP7_RX_FIFO_EMPTY_LEN)-1)<<USB_EP7_RX_FIFO_EMPTY_POS)
#define USB_EP7_RX_FIFO_EMPTY_UMSK                              (~(((1U<<USB_EP7_RX_FIFO_EMPTY_LEN)-1)<<USB_EP7_RX_FIFO_EMPTY_POS))
#define USB_EP7_RX_FIFO_FULL                                    USB_EP7_RX_FIFO_FULL
#define USB_EP7_RX_FIFO_FULL_POS                                (31U)
#define USB_EP7_RX_FIFO_FULL_LEN                                (1U)
#define USB_EP7_RX_FIFO_FULL_MSK                                (((1U<<USB_EP7_RX_FIFO_FULL_LEN)-1)<<USB_EP7_RX_FIFO_FULL_POS)
#define USB_EP7_RX_FIFO_FULL_UMSK                               (~(((1U<<USB_EP7_RX_FIFO_FULL_LEN)-1)<<USB_EP7_RX_FIFO_FULL_POS))

/* 0x178 : ep7_tx_fifo_wdata */
#define USB_EP7_TX_FIFO_WDATA_OFFSET                            (0x178)
#define USB_EP7_TX_FIFO_WDATA                                   USB_EP7_TX_FIFO_WDATA
#define USB_EP7_TX_FIFO_WDATA_POS                               (0U)
#define USB_EP7_TX_FIFO_WDATA_LEN                               (8U)
#define USB_EP7_TX_FIFO_WDATA_MSK                               (((1U<<USB_EP7_TX_FIFO_WDATA_LEN)-1)<<USB_EP7_TX_FIFO_WDATA_POS)
#define USB_EP7_TX_FIFO_WDATA_UMSK                              (~(((1U<<USB_EP7_TX_FIFO_WDATA_LEN)-1)<<USB_EP7_TX_FIFO_WDATA_POS))

/* 0x17C : ep7_rx_fifo_rdata */
#define USB_EP7_RX_FIFO_RDATA_OFFSET                            (0x17C)
#define USB_EP7_RX_FIFO_RDATA                                   USB_EP7_RX_FIFO_RDATA
#define USB_EP7_RX_FIFO_RDATA_POS                               (0U)
#define USB_EP7_RX_FIFO_RDATA_LEN                               (8U)
#define USB_EP7_RX_FIFO_RDATA_MSK                               (((1U<<USB_EP7_RX_FIFO_RDATA_LEN)-1)<<USB_EP7_RX_FIFO_RDATA_POS)
#define USB_EP7_RX_FIFO_RDATA_UMSK                              (~(((1U<<USB_EP7_RX_FIFO_RDATA_LEN)-1)<<USB_EP7_RX_FIFO_RDATA_POS))

/* 0x1F0 : rsvd_0 */
#define USB_RSVD_0_OFFSET                                       (0x1F0)

/* 0x1F4 : rsvd_1 */
#define USB_RSVD_1_OFFSET                                       (0x1F4)

/* 0x1FC : xcvr_if_config */
#define USB_XCVR_IF_CONFIG_OFFSET                               (0x1FC)
#define USB_CR_XCVR_FORCE_TX_EN                                 USB_CR_XCVR_FORCE_TX_EN
#define USB_CR_XCVR_FORCE_TX_EN_POS                             (0U)
#define USB_CR_XCVR_FORCE_TX_EN_LEN                             (1U)
#define USB_CR_XCVR_FORCE_TX_EN_MSK                             (((1U<<USB_CR_XCVR_FORCE_TX_EN_LEN)-1)<<USB_CR_XCVR_FORCE_TX_EN_POS)
#define USB_CR_XCVR_FORCE_TX_EN_UMSK                            (~(((1U<<USB_CR_XCVR_FORCE_TX_EN_LEN)-1)<<USB_CR_XCVR_FORCE_TX_EN_POS))
#define USB_CR_XCVR_FORCE_TX_OE                                 USB_CR_XCVR_FORCE_TX_OE
#define USB_CR_XCVR_FORCE_TX_OE_POS                             (1U)
#define USB_CR_XCVR_FORCE_TX_OE_LEN                             (1U)
#define USB_CR_XCVR_FORCE_TX_OE_MSK                             (((1U<<USB_CR_XCVR_FORCE_TX_OE_LEN)-1)<<USB_CR_XCVR_FORCE_TX_OE_POS)
#define USB_CR_XCVR_FORCE_TX_OE_UMSK                            (~(((1U<<USB_CR_XCVR_FORCE_TX_OE_LEN)-1)<<USB_CR_XCVR_FORCE_TX_OE_POS))
#define USB_CR_XCVR_FORCE_TX_DP                                 USB_CR_XCVR_FORCE_TX_DP
#define USB_CR_XCVR_FORCE_TX_DP_POS                             (2U)
#define USB_CR_XCVR_FORCE_TX_DP_LEN                             (1U)
#define USB_CR_XCVR_FORCE_TX_DP_MSK                             (((1U<<USB_CR_XCVR_FORCE_TX_DP_LEN)-1)<<USB_CR_XCVR_FORCE_TX_DP_POS)
#define USB_CR_XCVR_FORCE_TX_DP_UMSK                            (~(((1U<<USB_CR_XCVR_FORCE_TX_DP_LEN)-1)<<USB_CR_XCVR_FORCE_TX_DP_POS))
#define USB_CR_XCVR_FORCE_TX_DN                                 USB_CR_XCVR_FORCE_TX_DN
#define USB_CR_XCVR_FORCE_TX_DN_POS                             (3U)
#define USB_CR_XCVR_FORCE_TX_DN_LEN                             (1U)
#define USB_CR_XCVR_FORCE_TX_DN_MSK                             (((1U<<USB_CR_XCVR_FORCE_TX_DN_LEN)-1)<<USB_CR_XCVR_FORCE_TX_DN_POS)
#define USB_CR_XCVR_FORCE_TX_DN_UMSK                            (~(((1U<<USB_CR_XCVR_FORCE_TX_DN_LEN)-1)<<USB_CR_XCVR_FORCE_TX_DN_POS))
#define USB_CR_XCVR_FORCE_RX_EN                                 USB_CR_XCVR_FORCE_RX_EN
#define USB_CR_XCVR_FORCE_RX_EN_POS                             (4U)
#define USB_CR_XCVR_FORCE_RX_EN_LEN                             (1U)
#define USB_CR_XCVR_FORCE_RX_EN_MSK                             (((1U<<USB_CR_XCVR_FORCE_RX_EN_LEN)-1)<<USB_CR_XCVR_FORCE_RX_EN_POS)
#define USB_CR_XCVR_FORCE_RX_EN_UMSK                            (~(((1U<<USB_CR_XCVR_FORCE_RX_EN_LEN)-1)<<USB_CR_XCVR_FORCE_RX_EN_POS))
#define USB_CR_XCVR_FORCE_RX_D                                  USB_CR_XCVR_FORCE_RX_D
#define USB_CR_XCVR_FORCE_RX_D_POS                              (5U)
#define USB_CR_XCVR_FORCE_RX_D_LEN                              (1U)
#define USB_CR_XCVR_FORCE_RX_D_MSK                              (((1U<<USB_CR_XCVR_FORCE_RX_D_LEN)-1)<<USB_CR_XCVR_FORCE_RX_D_POS)
#define USB_CR_XCVR_FORCE_RX_D_UMSK                             (~(((1U<<USB_CR_XCVR_FORCE_RX_D_LEN)-1)<<USB_CR_XCVR_FORCE_RX_D_POS))
#define USB_CR_XCVR_FORCE_RX_DP                                 USB_CR_XCVR_FORCE_RX_DP
#define USB_CR_XCVR_FORCE_RX_DP_POS                             (6U)
#define USB_CR_XCVR_FORCE_RX_DP_LEN                             (1U)
#define USB_CR_XCVR_FORCE_RX_DP_MSK                             (((1U<<USB_CR_XCVR_FORCE_RX_DP_LEN)-1)<<USB_CR_XCVR_FORCE_RX_DP_POS)
#define USB_CR_XCVR_FORCE_RX_DP_UMSK                            (~(((1U<<USB_CR_XCVR_FORCE_RX_DP_LEN)-1)<<USB_CR_XCVR_FORCE_RX_DP_POS))
#define USB_CR_XCVR_FORCE_RX_DN                                 USB_CR_XCVR_FORCE_RX_DN
#define USB_CR_XCVR_FORCE_RX_DN_POS                             (7U)
#define USB_CR_XCVR_FORCE_RX_DN_LEN                             (1U)
#define USB_CR_XCVR_FORCE_RX_DN_MSK                             (((1U<<USB_CR_XCVR_FORCE_RX_DN_LEN)-1)<<USB_CR_XCVR_FORCE_RX_DN_POS)
#define USB_CR_XCVR_FORCE_RX_DN_UMSK                            (~(((1U<<USB_CR_XCVR_FORCE_RX_DN_LEN)-1)<<USB_CR_XCVR_FORCE_RX_DN_POS))
#define USB_CR_XCVR_OM_RX_SEL                                   USB_CR_XCVR_OM_RX_SEL
#define USB_CR_XCVR_OM_RX_SEL_POS                               (8U)
#define USB_CR_XCVR_OM_RX_SEL_LEN                               (1U)
#define USB_CR_XCVR_OM_RX_SEL_MSK                               (((1U<<USB_CR_XCVR_OM_RX_SEL_LEN)-1)<<USB_CR_XCVR_OM_RX_SEL_POS)
#define USB_CR_XCVR_OM_RX_SEL_UMSK                              (~(((1U<<USB_CR_XCVR_OM_RX_SEL_LEN)-1)<<USB_CR_XCVR_OM_RX_SEL_POS))
#define USB_CR_XCVR_OM_RX_D                                     USB_CR_XCVR_OM_RX_D
#define USB_CR_XCVR_OM_RX_D_POS                                 (9U)
#define USB_CR_XCVR_OM_RX_D_LEN                                 (1U)
#define USB_CR_XCVR_OM_RX_D_MSK                                 (((1U<<USB_CR_XCVR_OM_RX_D_LEN)-1)<<USB_CR_XCVR_OM_RX_D_POS)
#define USB_CR_XCVR_OM_RX_D_UMSK                                (~(((1U<<USB_CR_XCVR_OM_RX_D_LEN)-1)<<USB_CR_XCVR_OM_RX_D_POS))
#define USB_CR_XCVR_OM_RX_DP                                    USB_CR_XCVR_OM_RX_DP
#define USB_CR_XCVR_OM_RX_DP_POS                                (10U)
#define USB_CR_XCVR_OM_RX_DP_LEN                                (1U)
#define USB_CR_XCVR_OM_RX_DP_MSK                                (((1U<<USB_CR_XCVR_OM_RX_DP_LEN)-1)<<USB_CR_XCVR_OM_RX_DP_POS)
#define USB_CR_XCVR_OM_RX_DP_UMSK                               (~(((1U<<USB_CR_XCVR_OM_RX_DP_LEN)-1)<<USB_CR_XCVR_OM_RX_DP_POS))
#define USB_CR_XCVR_OM_RX_DN                                    USB_CR_XCVR_OM_RX_DN
#define USB_CR_XCVR_OM_RX_DN_POS                                (11U)
#define USB_CR_XCVR_OM_RX_DN_LEN                                (1U)
#define USB_CR_XCVR_OM_RX_DN_MSK                                (((1U<<USB_CR_XCVR_OM_RX_DN_LEN)-1)<<USB_CR_XCVR_OM_RX_DN_POS)
#define USB_CR_XCVR_OM_RX_DN_UMSK                               (~(((1U<<USB_CR_XCVR_OM_RX_DN_LEN)-1)<<USB_CR_XCVR_OM_RX_DN_POS))
#define USB_STS_VBUS_DET                                        USB_STS_VBUS_DET
#define USB_STS_VBUS_DET_POS                                    (31U)
#define USB_STS_VBUS_DET_LEN                                    (1U)
#define USB_STS_VBUS_DET_MSK                                    (((1U<<USB_STS_VBUS_DET_LEN)-1)<<USB_STS_VBUS_DET_POS)
#define USB_STS_VBUS_DET_UMSK                                   (~(((1U<<USB_STS_VBUS_DET_LEN)-1)<<USB_STS_VBUS_DET_POS))


struct  usb_reg {
    /* 0x0 : usb_config */
    union {
        struct {
            uint32_t cr_usb_en                      :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_3                   :  3; /* [ 3: 1],       rsvd,        0x0 */
            uint32_t cr_usb_rom_dct_en              :  1; /* [    4],        r/w,        0x1 */
            uint32_t reserved_5_7                   :  3; /* [ 7: 5],       rsvd,        0x0 */
            uint32_t cr_usb_ep0_sw_ctrl             :  1; /* [    8],        r/w,        0x0 */
            uint32_t cr_usb_ep0_sw_addr             :  7; /* [15: 9],        r/w,        0x0 */
            uint32_t cr_usb_ep0_sw_size             :  8; /* [23:16],        r/w,        0x0 */
            uint32_t cr_usb_ep0_sw_stall            :  1; /* [   24],        w1c,        0x0 */
            uint32_t cr_usb_ep0_sw_nack_in          :  1; /* [   25],        r/w,        0x1 */
            uint32_t cr_usb_ep0_sw_nack_out         :  1; /* [   26],        r/w,        0x0 */
            uint32_t cr_usb_ep0_sw_rdy              :  1; /* [   27],        w1c,        0x0 */
            uint32_t sts_usb_ep0_sw_rdy             :  1; /* [   28],          r,        0x0 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_config;

    /* 0x4 : usb_lpm_config */
    union {
        struct {
            uint32_t cr_lpm_en                      :  1; /* [    0],        w1c,        0x0 */
            uint32_t cr_lpm_resp_upd                :  1; /* [    1],        w1c,        0x0 */
            uint32_t cr_lpm_resp                    :  2; /* [ 3: 2],        r/w,        0x2 */
            uint32_t reserved_4_19                  : 16; /* [19: 4],       rsvd,        0x0 */
            uint32_t sts_lpm_attr                   : 11; /* [30:20],          r,        0x0 */
            uint32_t sts_lpm                        :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_lpm_config;

    /* 0x8 : usb_resume_config */
    union {
        struct {
            uint32_t cr_res_width                   : 11; /* [10: 0],        r/w,       0x1a */
            uint32_t reserved_11                    :  1; /* [   11],       rsvd,        0x0 */
            uint32_t cr_res_trig                    :  1; /* [   12],        w1c,        0x0 */
            uint32_t reserved_13_30                 : 18; /* [30:13],       rsvd,        0x0 */
            uint32_t cr_res_force                   :  1; /* [   31],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_resume_config;

    /* 0xc  reserved */
    uint8_t RESERVED0xc[4];

    /* 0x10 : usb_setup_data_0 */
    union {
        struct {
            uint32_t sts_setup_data_b0              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t sts_setup_data_b1              :  8; /* [15: 8],          r,        0x0 */
            uint32_t sts_setup_data_b2              :  8; /* [23:16],          r,        0x0 */
            uint32_t sts_setup_data_b3              :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_setup_data_0;

    /* 0x14 : usb_setup_data_1 */
    union {
        struct {
            uint32_t sts_setup_data_b4              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t sts_setup_data_b5              :  8; /* [15: 8],          r,        0x0 */
            uint32_t sts_setup_data_b6              :  8; /* [23:16],          r,        0x0 */
            uint32_t sts_setup_data_b7              :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_setup_data_1;

    /* 0x18 : usb_frame_no */
    union {
        struct {
            uint32_t sts_frame_no                   : 11; /* [10: 0],          r,        0x0 */
            uint32_t reserved_11                    :  1; /* [   11],       rsvd,        0x0 */
            uint32_t sts_pid                        :  4; /* [15:12],          r,        0x0 */
            uint32_t sts_ep_no                      :  4; /* [19:16],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_frame_no;

    /* 0x1C : usb_error */
    union {
        struct {
            uint32_t utmi_rx_err                    :  1; /* [    0],          r,        0x0 */
            uint32_t xfer_to_err                    :  1; /* [    1],          r,        0x0 */
            uint32_t ivld_ep_err                    :  1; /* [    2],          r,        0x0 */
            uint32_t pid_seq_err                    :  1; /* [    3],          r,        0x0 */
            uint32_t pid_cks_err                    :  1; /* [    4],          r,        0x0 */
            uint32_t crc5_err                       :  1; /* [    5],          r,        0x0 */
            uint32_t crc16_err                      :  1; /* [    6],          r,        0x0 */
            uint32_t reserved_7_31                  : 25; /* [31: 7],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_error;

    /* 0x20 : USB interrupt enable */
    union {
        struct {
            uint32_t cr_sof_en                      :  1; /* [    0],        r/w,        0x1 */
            uint32_t cr_usb_reset_en                :  1; /* [    1],        r/w,        0x1 */
            uint32_t cr_vbus_tgl_en                 :  1; /* [    2],        r/w,        0x1 */
            uint32_t cr_get_dct_cmd_en              :  1; /* [    3],        r/w,        0x1 */
            uint32_t cr_ep0_setup_cmd_en            :  1; /* [    4],        r/w,        0x1 */
            uint32_t cr_ep0_setup_done_en           :  1; /* [    5],        r/w,        0x1 */
            uint32_t cr_ep0_in_cmd_en               :  1; /* [    6],        r/w,        0x1 */
            uint32_t cr_ep0_in_done_en              :  1; /* [    7],        r/w,        0x1 */
            uint32_t cr_ep0_out_cmd_en              :  1; /* [    8],        r/w,        0x1 */
            uint32_t cr_ep0_out_done_en             :  1; /* [    9],        r/w,        0x1 */
            uint32_t cr_ep1_cmd_en                  :  1; /* [   10],        r/w,        0x1 */
            uint32_t cr_ep1_done_en                 :  1; /* [   11],        r/w,        0x1 */
            uint32_t cr_ep2_cmd_en                  :  1; /* [   12],        r/w,        0x1 */
            uint32_t cr_ep2_done_en                 :  1; /* [   13],        r/w,        0x1 */
            uint32_t cr_ep3_cmd_en                  :  1; /* [   14],        r/w,        0x1 */
            uint32_t cr_ep3_done_en                 :  1; /* [   15],        r/w,        0x1 */
            uint32_t cr_ep4_cmd_en                  :  1; /* [   16],        r/w,        0x1 */
            uint32_t cr_ep4_done_en                 :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep5_cmd_en                  :  1; /* [   18],        r/w,        0x1 */
            uint32_t cr_ep5_done_en                 :  1; /* [   19],        r/w,        0x1 */
            uint32_t cr_ep6_cmd_en                  :  1; /* [   20],        r/w,        0x1 */
            uint32_t cr_ep6_done_en                 :  1; /* [   21],        r/w,        0x1 */
            uint32_t cr_ep7_cmd_en                  :  1; /* [   22],        r/w,        0x1 */
            uint32_t cr_ep7_done_en                 :  1; /* [   23],        r/w,        0x1 */
            uint32_t rsvd_26_24                     :  3; /* [26:24],       rsvd,        0x0 */
            uint32_t cr_usb_rend_en                 :  1; /* [   27],        r/w,        0x0 */
            uint32_t cr_lpm_wkup_en                 :  1; /* [   28],        r/w,        0x0 */
            uint32_t cr_lpm_pkt_en                  :  1; /* [   29],        r/w,        0x0 */
            uint32_t cr_sof_3ms_en                  :  1; /* [   30],        r/w,        0x0 */
            uint32_t cr_usb_err_en                  :  1; /* [   31],        r/w,        0x1 */
        }BF;
        uint32_t WORD;
    } usb_int_en;

    /* 0x24 : USB interrupt status */
    union {
        struct {
            uint32_t sof_int                        :  1; /* [    0],          r,        0x0 */
            uint32_t usb_reset_int                  :  1; /* [    1],          r,        0x0 */
            uint32_t vbus_tgl_int                   :  1; /* [    2],          r,        0x0 */
            uint32_t get_dct_cmd_int                :  1; /* [    3],          r,        0x0 */
            uint32_t ep0_setup_cmd_int              :  1; /* [    4],          r,        0x0 */
            uint32_t ep0_setup_done_int             :  1; /* [    5],          r,        0x0 */
            uint32_t ep0_in_cmd_int                 :  1; /* [    6],          r,        0x0 */
            uint32_t ep0_in_done_int                :  1; /* [    7],          r,        0x0 */
            uint32_t ep0_out_cmd_int                :  1; /* [    8],          r,        0x0 */
            uint32_t ep0_out_done_int               :  1; /* [    9],          r,        0x0 */
            uint32_t ep1_cmd_int                    :  1; /* [   10],          r,        0x0 */
            uint32_t ep1_done_int                   :  1; /* [   11],          r,        0x0 */
            uint32_t ep2_cmd_int                    :  1; /* [   12],          r,        0x0 */
            uint32_t ep2_done_int                   :  1; /* [   13],          r,        0x0 */
            uint32_t ep3_cmd_int                    :  1; /* [   14],          r,        0x0 */
            uint32_t ep3_done_int                   :  1; /* [   15],          r,        0x0 */
            uint32_t ep4_cmd_int                    :  1; /* [   16],          r,        0x0 */
            uint32_t ep4_done_int                   :  1; /* [   17],          r,        0x0 */
            uint32_t ep5_cmd_int                    :  1; /* [   18],          r,        0x0 */
            uint32_t ep5_done_int                   :  1; /* [   19],          r,        0x0 */
            uint32_t ep6_cmd_int                    :  1; /* [   20],          r,        0x0 */
            uint32_t ep6_done_int                   :  1; /* [   21],          r,        0x0 */
            uint32_t ep7_cmd_int                    :  1; /* [   22],          r,        0x0 */
            uint32_t ep7_done_int                   :  1; /* [   23],          r,        0x0 */
            uint32_t rsvd_26_24                     :  3; /* [26:24],       rsvd,        0x0 */
            uint32_t usb_rend_int                   :  1; /* [   27],          r,        0x0 */
            uint32_t lpm_wkup_int                   :  1; /* [   28],          r,        0x0 */
            uint32_t lpm_pkt_int                    :  1; /* [   29],          r,        0x0 */
            uint32_t sof_3ms_int                    :  1; /* [   30],          r,        0x0 */
            uint32_t usb_err_int                    :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_int_sts;

    /* 0x28 : USB interrupt mask */
    union {
        struct {
            uint32_t cr_sof_mask                    :  1; /* [    0],        r/w,        0x1 */
            uint32_t cr_usb_reset_mask              :  1; /* [    1],        r/w,        0x1 */
            uint32_t cr_vbus_tgl_mask               :  1; /* [    2],        r/w,        0x1 */
            uint32_t cr_get_dct_cmd_mask            :  1; /* [    3],        r/w,        0x1 */
            uint32_t cr_ep0_setup_cmd_mask          :  1; /* [    4],        r/w,        0x1 */
            uint32_t cr_ep0_setup_done_mask         :  1; /* [    5],        r/w,        0x1 */
            uint32_t cr_ep0_in_cmd_mask             :  1; /* [    6],        r/w,        0x1 */
            uint32_t cr_ep0_in_done_mask            :  1; /* [    7],        r/w,        0x1 */
            uint32_t cr_ep0_out_cmd_mask            :  1; /* [    8],        r/w,        0x1 */
            uint32_t cr_ep0_out_done_mask           :  1; /* [    9],        r/w,        0x1 */
            uint32_t cr_ep1_cmd_mask                :  1; /* [   10],        r/w,        0x1 */
            uint32_t cr_ep1_done_mask               :  1; /* [   11],        r/w,        0x1 */
            uint32_t cr_ep2_cmd_mask                :  1; /* [   12],        r/w,        0x1 */
            uint32_t cr_ep2_done_mask               :  1; /* [   13],        r/w,        0x1 */
            uint32_t cr_ep3_cmd_mask                :  1; /* [   14],        r/w,        0x1 */
            uint32_t cr_ep3_done_mask               :  1; /* [   15],        r/w,        0x1 */
            uint32_t cr_ep4_cmd_mask                :  1; /* [   16],        r/w,        0x1 */
            uint32_t cr_ep4_done_mask               :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep5_cmd_mask                :  1; /* [   18],        r/w,        0x1 */
            uint32_t cr_ep5_done_mask               :  1; /* [   19],        r/w,        0x1 */
            uint32_t cr_ep6_cmd_mask                :  1; /* [   20],        r/w,        0x1 */
            uint32_t cr_ep6_done_mask               :  1; /* [   21],        r/w,        0x1 */
            uint32_t cr_ep7_cmd_mask                :  1; /* [   22],        r/w,        0x1 */
            uint32_t cr_ep7_done_mask               :  1; /* [   23],        r/w,        0x1 */
            uint32_t rsvd_26_24                     :  3; /* [26:24],       rsvd,        0x0 */
            uint32_t cr_usb_rend_mask               :  1; /* [   27],        r/w,        0x1 */
            uint32_t cr_lpm_wkup_mask               :  1; /* [   28],        r/w,        0x1 */
            uint32_t cr_lpm_pkt_mask                :  1; /* [   29],        r/w,        0x1 */
            uint32_t cr_sof_3ms_mask                :  1; /* [   30],        r/w,        0x1 */
            uint32_t cr_usb_err_mask                :  1; /* [   31],        r/w,        0x1 */
        }BF;
        uint32_t WORD;
    } usb_int_mask;

    /* 0x2C : USB interrupt clear */
    union {
        struct {
            uint32_t cr_sof_clr                     :  1; /* [    0],        w1c,        0x0 */
            uint32_t cr_usb_reset_clr               :  1; /* [    1],        w1c,        0x0 */
            uint32_t cr_vbus_tgl_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t cr_get_dct_cmd_clr             :  1; /* [    3],        w1c,        0x0 */
            uint32_t cr_ep0_setup_cmd_clr           :  1; /* [    4],        w1c,        0x0 */
            uint32_t cr_ep0_setup_done_clr          :  1; /* [    5],        w1c,        0x0 */
            uint32_t cr_ep0_in_cmd_clr              :  1; /* [    6],        w1c,        0x0 */
            uint32_t cr_ep0_in_done_clr             :  1; /* [    7],        w1c,        0x0 */
            uint32_t cr_ep0_out_cmd_clr             :  1; /* [    8],        w1c,        0x0 */
            uint32_t cr_ep0_out_done_clr            :  1; /* [    9],        w1c,        0x0 */
            uint32_t cr_ep1_cmd_clr                 :  1; /* [   10],        w1c,        0x0 */
            uint32_t cr_ep1_done_clr                :  1; /* [   11],        w1c,        0x0 */
            uint32_t cr_ep2_cmd_clr                 :  1; /* [   12],        w1c,        0x0 */
            uint32_t cr_ep2_done_clr                :  1; /* [   13],        w1c,        0x0 */
            uint32_t cr_ep3_cmd_clr                 :  1; /* [   14],        w1c,        0x0 */
            uint32_t cr_ep3_done_clr                :  1; /* [   15],        w1c,        0x0 */
            uint32_t cr_ep4_cmd_clr                 :  1; /* [   16],        w1c,        0x0 */
            uint32_t cr_ep4_done_clr                :  1; /* [   17],        w1c,        0x0 */
            uint32_t cr_ep5_cmd_clr                 :  1; /* [   18],        w1c,        0x0 */
            uint32_t cr_ep5_done_clr                :  1; /* [   19],        w1c,        0x0 */
            uint32_t cr_ep6_cmd_clr                 :  1; /* [   20],        w1c,        0x0 */
            uint32_t cr_ep6_done_clr                :  1; /* [   21],        w1c,        0x0 */
            uint32_t cr_ep7_cmd_clr                 :  1; /* [   22],        w1c,        0x0 */
            uint32_t cr_ep7_done_clr                :  1; /* [   23],        w1c,        0x0 */
            uint32_t rsvd_26_24                     :  3; /* [26:24],       rsvd,        0x0 */
            uint32_t cr_usb_rend_clr                :  1; /* [   27],        w1c,        0x0 */
            uint32_t cr_lpm_wkup_clr                :  1; /* [   28],        w1c,        0x0 */
            uint32_t cr_lpm_pkt_clr                 :  1; /* [   29],        w1c,        0x0 */
            uint32_t cr_sof_3ms_clr                 :  1; /* [   30],        w1c,        0x0 */
            uint32_t cr_usb_err_clr                 :  1; /* [   31],        w1c,        0x0 */
        }BF;
        uint32_t WORD;
    } usb_int_clear;

    /* 0x30  reserved */
    uint8_t RESERVED0x30[16];

    /* 0x40 : ep1_config */
    union {
        struct {
            uint32_t cr_ep1_size                    : 11; /* [10: 0],        r/w,       0x40 */
            uint32_t cr_ep1_dir                     :  2; /* [12:11],        r/w,        0x1 */
            uint32_t cr_ep1_type                    :  3; /* [15:13],        r/w,        0x4 */
            uint32_t cr_ep1_stall                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_ep1_nack                    :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep1_rdy                     :  1; /* [   18],        w1c,        0x0 */
            uint32_t sts_ep1_rdy                    :  1; /* [   19],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep1_config;

    /* 0x44 : ep2_config */
    union {
        struct {
            uint32_t cr_ep2_size                    : 11; /* [10: 0],        r/w,       0x40 */
            uint32_t cr_ep2_dir                     :  2; /* [12:11],        r/w,        0x1 */
            uint32_t cr_ep2_type                    :  3; /* [15:13],        r/w,        0x4 */
            uint32_t cr_ep2_stall                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_ep2_nack                    :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep2_rdy                     :  1; /* [   18],        w1c,        0x0 */
            uint32_t sts_ep2_rdy                    :  1; /* [   19],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep2_config;

    /* 0x48 : ep3_config */
    union {
        struct {
            uint32_t cr_ep3_size                    : 11; /* [10: 0],        r/w,       0x40 */
            uint32_t cr_ep3_dir                     :  2; /* [12:11],        r/w,        0x1 */
            uint32_t cr_ep3_type                    :  3; /* [15:13],        r/w,        0x4 */
            uint32_t cr_ep3_stall                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_ep3_nack                    :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep3_rdy                     :  1; /* [   18],        w1c,        0x0 */
            uint32_t sts_ep3_rdy                    :  1; /* [   19],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep3_config;

    /* 0x4C : ep4_config */
    union {
        struct {
            uint32_t cr_ep4_size                    : 11; /* [10: 0],        r/w,       0x40 */
            uint32_t cr_ep4_dir                     :  2; /* [12:11],        r/w,        0x1 */
            uint32_t cr_ep4_type                    :  3; /* [15:13],        r/w,        0x4 */
            uint32_t cr_ep4_stall                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_ep4_nack                    :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep4_rdy                     :  1; /* [   18],        w1c,        0x0 */
            uint32_t sts_ep4_rdy                    :  1; /* [   19],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep4_config;

    /* 0x50 : ep5_config */
    union {
        struct {
            uint32_t cr_ep5_size                    : 11; /* [10: 0],        r/w,       0x40 */
            uint32_t cr_ep5_dir                     :  2; /* [12:11],        r/w,        0x1 */
            uint32_t cr_ep5_type                    :  3; /* [15:13],        r/w,        0x4 */
            uint32_t cr_ep5_stall                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_ep5_nack                    :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep5_rdy                     :  1; /* [   18],        w1c,        0x0 */
            uint32_t sts_ep5_rdy                    :  1; /* [   19],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep5_config;

    /* 0x54 : ep6_config */
    union {
        struct {
            uint32_t cr_ep6_size                    : 11; /* [10: 0],        r/w,       0x40 */
            uint32_t cr_ep6_dir                     :  2; /* [12:11],        r/w,        0x1 */
            uint32_t cr_ep6_type                    :  3; /* [15:13],        r/w,        0x4 */
            uint32_t cr_ep6_stall                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_ep6_nack                    :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep6_rdy                     :  1; /* [   18],        w1c,        0x0 */
            uint32_t sts_ep6_rdy                    :  1; /* [   19],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep6_config;

    /* 0x58 : ep7_config */
    union {
        struct {
            uint32_t cr_ep7_size                    : 11; /* [10: 0],        r/w,       0x40 */
            uint32_t cr_ep7_dir                     :  2; /* [12:11],        r/w,        0x1 */
            uint32_t cr_ep7_type                    :  3; /* [15:13],        r/w,        0x4 */
            uint32_t cr_ep7_stall                   :  1; /* [   16],        r/w,        0x0 */
            uint32_t cr_ep7_nack                    :  1; /* [   17],        r/w,        0x1 */
            uint32_t cr_ep7_rdy                     :  1; /* [   18],        w1c,        0x0 */
            uint32_t sts_ep7_rdy                    :  1; /* [   19],          r,        0x0 */
            uint32_t reserved_20_31                 : 12; /* [31:20],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep7_config;

    /* 0x5c  reserved */
    uint8_t RESERVED0x5c[164];

    /* 0x100 : ep0_fifo_config */
    union {
        struct {
            uint32_t ep0_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep0_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep0_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep0_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep0_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep0_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep0_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep0_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep0_fifo_config;

    /* 0x104 : ep0_fifo_status */
    union {
        struct {
            uint32_t ep0_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep0_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep0_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep0_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep0_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep0_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep0_fifo_status;

    /* 0x108 : ep0_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep0_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep0_tx_fifo_wdata;

    /* 0x10C : ep0_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep0_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep0_rx_fifo_rdata;

    /* 0x110 : ep1_fifo_config */
    union {
        struct {
            uint32_t ep1_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep1_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep1_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep1_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep1_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep1_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep1_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep1_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep1_fifo_config;

    /* 0x114 : ep1_fifo_status */
    union {
        struct {
            uint32_t ep1_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep1_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep1_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep1_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep1_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep1_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep1_fifo_status;

    /* 0x118 : ep1_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep1_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep1_tx_fifo_wdata;

    /* 0x11C : ep1_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep1_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep1_rx_fifo_rdata;

    /* 0x120 : ep2_fifo_config */
    union {
        struct {
            uint32_t ep2_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep2_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep2_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep2_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep2_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep2_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep2_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep2_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep2_fifo_config;

    /* 0x124 : ep2_fifo_status */
    union {
        struct {
            uint32_t ep2_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep2_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep2_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep2_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep2_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep2_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep2_fifo_status;

    /* 0x128 : ep2_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep2_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep2_tx_fifo_wdata;

    /* 0x12C : ep2_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep2_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep2_rx_fifo_rdata;

    /* 0x130 : ep3_fifo_config */
    union {
        struct {
            uint32_t ep3_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep3_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep3_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep3_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep3_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep3_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep3_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep3_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep3_fifo_config;

    /* 0x134 : ep3_fifo_status */
    union {
        struct {
            uint32_t ep3_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep3_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep3_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep3_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep3_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep3_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep3_fifo_status;

    /* 0x138 : ep3_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep3_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep3_tx_fifo_wdata;

    /* 0x13C : ep3_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep3_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep3_rx_fifo_rdata;

    /* 0x140 : ep4_fifo_config */
    union {
        struct {
            uint32_t ep4_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep4_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep4_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep4_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep4_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep4_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep4_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep4_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep4_fifo_config;

    /* 0x144 : ep4_fifo_status */
    union {
        struct {
            uint32_t ep4_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep4_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep4_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep4_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep4_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep4_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep4_fifo_status;

    /* 0x148 : ep4_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep4_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep4_tx_fifo_wdata;

    /* 0x14C : ep4_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep4_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep4_rx_fifo_rdata;

    /* 0x150 : ep5_fifo_config */
    union {
        struct {
            uint32_t ep5_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep5_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep5_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep5_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep5_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep5_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep5_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep5_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep5_fifo_config;

    /* 0x154 : ep5_fifo_status */
    union {
        struct {
            uint32_t ep5_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep5_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep5_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep5_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep5_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep5_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep5_fifo_status;

    /* 0x158 : ep5_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep5_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep5_tx_fifo_wdata;

    /* 0x15C : ep5_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep5_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep5_rx_fifo_rdata;

    /* 0x160 : ep6_fifo_config */
    union {
        struct {
            uint32_t ep6_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep6_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep6_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep6_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep6_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep6_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep6_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep6_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep6_fifo_config;

    /* 0x164 : ep6_fifo_status */
    union {
        struct {
            uint32_t ep6_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep6_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep6_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep6_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep6_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep6_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep6_fifo_status;

    /* 0x168 : ep6_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep6_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep6_tx_fifo_wdata;

    /* 0x16C : ep6_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep6_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep6_rx_fifo_rdata;

    /* 0x170 : ep7_fifo_config */
    union {
        struct {
            uint32_t ep7_dma_tx_en                  :  1; /* [    0],        r/w,        0x0 */
            uint32_t ep7_dma_rx_en                  :  1; /* [    1],        r/w,        0x0 */
            uint32_t ep7_tx_fifo_clr                :  1; /* [    2],        w1c,        0x0 */
            uint32_t ep7_rx_fifo_clr                :  1; /* [    3],        w1c,        0x0 */
            uint32_t ep7_tx_fifo_overflow           :  1; /* [    4],          r,        0x0 */
            uint32_t ep7_tx_fifo_underflow          :  1; /* [    5],          r,        0x0 */
            uint32_t ep7_rx_fifo_overflow           :  1; /* [    6],          r,        0x0 */
            uint32_t ep7_rx_fifo_underflow          :  1; /* [    7],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep7_fifo_config;

    /* 0x174 : ep7_fifo_status */
    union {
        struct {
            uint32_t ep7_tx_fifo_cnt                :  7; /* [ 6: 0],          r,       0x40 */
            uint32_t reserved_7_13                  :  7; /* [13: 7],       rsvd,        0x0 */
            uint32_t ep7_tx_fifo_empty              :  1; /* [   14],          r,        0x1 */
            uint32_t ep7_tx_fifo_full               :  1; /* [   15],          r,        0x0 */
            uint32_t ep7_rx_fifo_cnt                :  7; /* [22:16],          r,        0x0 */
            uint32_t reserved_23_29                 :  7; /* [29:23],       rsvd,        0x0 */
            uint32_t ep7_rx_fifo_empty              :  1; /* [   30],          r,        0x1 */
            uint32_t ep7_rx_fifo_full               :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } ep7_fifo_status;

    /* 0x178 : ep7_tx_fifo_wdata */
    union {
        struct {
            uint32_t ep7_tx_fifo_wdata              :  8; /* [ 7: 0],          w,          x */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep7_tx_fifo_wdata;

    /* 0x17C : ep7_rx_fifo_rdata */
    union {
        struct {
            uint32_t ep7_rx_fifo_rdata              :  8; /* [ 7: 0],          r,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } ep7_rx_fifo_rdata;

    /* 0x180  reserved */
    uint8_t RESERVED0x180[112];

    /* 0x1F0 : rsvd_0 */
    union {
        struct {
            uint32_t rsvd_0                         : 32; /* [31: 0],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } rsvd_0;

    /* 0x1F4 : rsvd_1 */
    union {
        struct {
            uint32_t rsvd_1                         : 32; /* [31: 0],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } rsvd_1;

    /* 0x1f8  reserved */
    uint8_t RESERVED0x1f8[4];

    /* 0x1FC : xcvr_if_config */
    union {
        struct {
            uint32_t cr_xcvr_force_tx_en            :  1; /* [    0],        r/w,        0x0 */
            uint32_t cr_xcvr_force_tx_oe            :  1; /* [    1],        r/w,        0x0 */
            uint32_t cr_xcvr_force_tx_dp            :  1; /* [    2],        r/w,        0x1 */
            uint32_t cr_xcvr_force_tx_dn            :  1; /* [    3],        r/w,        0x0 */
            uint32_t cr_xcvr_force_rx_en            :  1; /* [    4],        r/w,        0x0 */
            uint32_t cr_xcvr_force_rx_d             :  1; /* [    5],        r/w,        0x1 */
            uint32_t cr_xcvr_force_rx_dp            :  1; /* [    6],        r/w,        0x1 */
            uint32_t cr_xcvr_force_rx_dn            :  1; /* [    7],        r/w,        0x0 */
            uint32_t cr_xcvr_om_rx_sel              :  1; /* [    8],        r/w,        0x0 */
            uint32_t cr_xcvr_om_rx_d                :  1; /* [    9],        r/w,        0x1 */
            uint32_t cr_xcvr_om_rx_dp               :  1; /* [   10],        r/w,        0x1 */
            uint32_t cr_xcvr_om_rx_dn               :  1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12_30                 : 19; /* [30:12],       rsvd,        0x0 */
            uint32_t sts_vbus_det                   :  1; /* [   31],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } xcvr_if_config;

};

typedef volatile struct usb_reg usb_reg_t;


#endif  /* __USB_REG_H__ */