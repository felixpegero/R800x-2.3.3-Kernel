/* /kernel/arch/arm/mach-msm/charger-anzu.c
 *
 * Copyright (C) [2010] Sony Ericsson Mobile Communications AB.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#include <linux/battery_chargalg.h>

static struct ambient_temperature_limit limit_tbl = {
	{0,	45,	57,	127},	/* ambient temp: base */
	{4,	4,	4,	0},	/* ambient temp: hysteresis */
};

struct ambient_temperature_data battery_chargalg_platform_ambient_temp = {
	.limit_tbl = &limit_tbl,
};

const u16 battery_capacity_mah = 1500;
