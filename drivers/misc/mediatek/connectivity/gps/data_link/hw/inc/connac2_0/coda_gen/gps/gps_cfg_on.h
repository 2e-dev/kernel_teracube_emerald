/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */
#ifndef __GPS_CFG_ON_REGS_H__
#define __GPS_CFG_ON_REGS_H__

#define GPS_CFG_ON_BASE                                        0x80001000

#define GPS_CFG_ON_GPS_L1_SLP_PWR_CTL_ADDR                     (GPS_CFG_ON_BASE + 0x0020)
#define GPS_CFG_ON_GPS_L5_SLP_PWR_CTL_ADDR                     (GPS_CFG_ON_BASE + 0x0024)
#define GPS_CFG_ON_GPS_CLKGEN1_CTL_ADDR                        (GPS_CFG_ON_BASE + 0x003C)


#define GPS_CFG_ON_GPS_L1_SLP_PWR_CTL_GPS_L1_SLP_PWR_CTL_CS_ADDR GPS_CFG_ON_GPS_L1_SLP_PWR_CTL_ADDR
#define GPS_CFG_ON_GPS_L1_SLP_PWR_CTL_GPS_L1_SLP_PWR_CTL_CS_MASK 0x0000000F
#define GPS_CFG_ON_GPS_L1_SLP_PWR_CTL_GPS_L1_SLP_PWR_CTL_CS_SHFT 0

#define GPS_CFG_ON_GPS_L5_SLP_PWR_CTL_GPS_L5_SLP_PWR_CTL_CS_ADDR GPS_CFG_ON_GPS_L5_SLP_PWR_CTL_ADDR
#define GPS_CFG_ON_GPS_L5_SLP_PWR_CTL_GPS_L5_SLP_PWR_CTL_CS_MASK 0x0000000F
#define GPS_CFG_ON_GPS_L5_SLP_PWR_CTL_GPS_L5_SLP_PWR_CTL_CS_SHFT 0

#define GPS_CFG_ON_GPS_CLKGEN1_CTL_CR_GPS_DIGCK_DIV_EN_ADDR    GPS_CFG_ON_GPS_CLKGEN1_CTL_ADDR
#define GPS_CFG_ON_GPS_CLKGEN1_CTL_CR_GPS_DIGCK_DIV_EN_MASK    0x00000010
#define GPS_CFG_ON_GPS_CLKGEN1_CTL_CR_GPS_DIGCK_DIV_EN_SHFT    4

#endif /* __GPS_CFG_ON_REGS_H__ */

