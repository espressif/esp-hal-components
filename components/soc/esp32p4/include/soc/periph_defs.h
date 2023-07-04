/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "soc/interrupts.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PERIPH_MSPI_FLASH_MODULE                = 0,
    PERIPH_MSPI_PSRAM_MODULE,
    PERIPH_EMAC_MODULE,
    PERIPH_MIPI_DSI_MODULE,
    PERIPH_MIPI_CSI_MODULE,
    PERIPH_I2C0_MODULE,
    PERIPH_I2C1_MODULE,
    PERIPH_I2S0_MODULE,
    PERIPH_I2S1_MODULE,
    PERIPH_I2S2_MODULE,

    PERIPH_LCD_MODULE                       = 10,
    PERIPH_UART0_MODULE,
    PERIPH_UART1_MODULE,
    PERIPH_UART2_MODULE,
    PERIPH_UART3_MODULE,
    PERIPH_UART4_MODULE,
    PERIPH_TWAI0_MODULE,
    PERIPH_TWAI1_MODULE,
    PERIPH_TWAI2_MODULE,
    PERIPH_GPSPI_MODULE,

    PERIPH_GPSPI2_MODULE                    = 20,
    PERIPH_GPSPI3_MODULE,
    PERIPH_PARLIO_MODULE,
    PERIPH_I3C_MODULE,
    PERIPH_CAM_MODULE,
    PERIPH_MCPWM0_MODULE,
    PERIPH_MCPWM1_MODULE,
    PERIPH_TIMG0_MODULE,
    PERIPH_TIMG1_MODULE,
    PERIPH_SYSTIMER_MODULE,

    PERIPH_LEDC_MODULE                      = 30,
    PERIPH_RMT_MODULE,
    PERIPH_SARADC_MODULE,
    PERIPH_PVT_MODULE,
    PERIPH_AES_MODULE,
    PERIPH_DS_MODULE,
    PERIPH_ECC_MODULE,
    PERIPH_HMAC_MODULE,
    PERIPH_RSA_MODULE,
    PERIPH_SEC_MODULE,

    PERIPH_SHA_MODULE                       = 40,
    PERIPH_ECDSA_MODULE,
    PERIPH_ISP_MODULE,
    PERIPH_SDMMC_MODULE,
    PERIPH_GDMA_MODULE,
    PERIPH_GMAC_MODULE,
    PERIPH_JPEG_MODULE,
    PERIPH_DMA2D_MODULE,
    PERIPH_PPA_MODULE,
    PERIPH_AHB_PDMA_MODULE,
    PERIPH_AXI_PDMA_MODULE,
    PERIPH_UHCI_MODULE,
    PERIPH_PCNT_MODULE,

    PERIPH_MODULE_MAX
} periph_module_t;

typedef enum {
    LP_PERIPH_I2C0_MODULE = 0,
    LP_PERIPH_UART0_MODULE,
    LP_PERIPH_MODULE_MAX,
} lp_periph_module_t;

#ifdef __cplusplus
}
#endif
