/*
 * This file is part of the coreboot project.
 *
 * Copyright 2014 Google Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef __MAINBOARD_GOOGLE_RUSH_RYU_PMIC_H__
#define __MAINBOARD_GOOGLE_RUSH_RYU_PMIC_H__

#include <stdint.h>

/* A44/Ryu has a TI 65913 PMIC */
enum {
	TI65913_SMPS12_CTRL = 0x20,
	TI65913_SMPS12_TSTEP,
	TI65913_SMPS12_FORCE,
	TI65913_SMPS12_VOLTAGE,

	TI65913_SMPS3_CTRL,
	TI65913_SMPS3_VOLTAGE = 0x27,

	TI65913_SMPS45_CTRL = 0x28,
	TI65913_SMPS45_TSTEP,
	TI65913_SMPS45_FORCE,
	TI65913_SMPS45_VOLTAGE,

	TI65913_SMPS6_CTRL = 0x2C,
	TI65913_SMPS6_TSTEP,
	TI65913_SMPS6_FORCE,
	TI65913_SMPS6_VOLTAGE,

	TI65913_SMPS7_CTRL = 0x30,
	TI65913_SMPS7_VOLTAGE = 0x33,

	TI65913_SMPS8_CTRL = 0x34,
	TI65913_SMPS8_TSTEP,
	TI65913_SMPS8_FORCE,
	TI65913_SMPS8_VOLTAGE,

	TI65913_SMPS9_CTRL = 0x38,
	TI65913_SMPS9_VOLTAGE = 0x3B,

	TI65913_SMPS10_CTRL = 0x3C,
	TI65913_SMPS10_STATUS = 0x3F,

	TI65913_LDO1_CTRL = 0x50,
	TI65913_LDO1_VOLTAGE,
	TI65913_LDO2_CTRL,
	TI65913_LDO2_VOLTAGE,
	TI65913_LDO3_CTRL,
	TI65913_LDO3_VOLTAGE,
	TI65913_LDO4_CTRL,
	TI65913_LDO4_VOLTAGE,
	TI65913_LDO5_CTRL,
	TI65913_LDO5_VOLTAGE,
	TI65913_LDO6_CTRL,
	TI65913_LDO6_VOLTAGE,
	TI65913_LDO7_CTRL,
	TI65913_LDO7_VOLTAGE,
	TI65913_LDO8_CTRL,
	TI65913_LDO8_VOLTAGE,
	TI65913_LDO9_CTRL,
	TI65913_LDO9_VOLTAGE,

	TI65913_LDOLN_CTRL = 0x62,
	TI65913_LDOLN_VOLTAGE = 0x63,
	TI65913_LDOUSB_CTRL = 0x64,
	TI65913_LDOUSB_VOLTAGE = 0x65,

	TI65913_LDO_CTRL = 0x6A,
	TI65913_LDO_PD_CTRL1 = 0x6B,
	TI65913_LDO_PD_CTRL2 = 0x6C,

	TI65913_LDO_SHORT_STATUS1 = 0x6D,
	TI65913_LDO_SHORT_STATUS2 = 0x6E,

	TI65913_CLK32KGAUDIO_CTRL = 0xD5,

	TI65913_PRIMARY_SECONDARY_PAD2 = 0xFB,
};

void pmic_write_reg(unsigned bus, uint8_t reg, uint8_t val, int delay);
void pmic_init(unsigned bus);

#endif /* __MAINBOARD_GOOGLE_RUSH_RYU_PMIC_H__ */
