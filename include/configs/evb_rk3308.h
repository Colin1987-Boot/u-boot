/*
 * (C) Copyright 2018 Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __EVB_RK3308_H
#define __EVB_RK3308_H

#include <configs/rk3308_common.h>

#define CONFIG_SYS_MMC_ENV_DEV 0


#define CONFIG_CONSOLE_SCROLL_LINES		10

#undef CONFIG_BOOTCOMMAND
#define CONFIG_BOOTCOMMAND RKIMG_BOOTCOMMAND

#endif