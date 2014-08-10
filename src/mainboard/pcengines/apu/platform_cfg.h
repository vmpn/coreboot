/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2011 Advanced Micro Devices, Inc.
 * Copyright (C) 2014 Vladimir Berezniker <vmpn@vmpn.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

/*
 * Grep the variable in src/southbridge/amd/cimx/sb800/cfg.c and
 * look in src/vendorcode/amd/cimx/sb800/SBTYPE.h for idea on usage of the corresponding variable
 */

/* Do not need spread spectru feature */
#define SPREAD_SPECTRUM 0

/* No PCI clock support yet */
#define PCI_CLOCK_CTRL 0

/* No support for HPET timer for now */
#define HPET_TIMER 0

/* Disable USB for now */
#define USB_CONFIG 0

/* Use mode from Kconfig */
#define SATA_MODE CONFIG_SB800_SATA_MODE

/* Native IDE mode */
#define SATA_IDE_MODE 0x1

/*
 * Disable until we figure out what this SATA capability is
 * Cannot find the use in code base, perhaps used by AMD rom?
 */
#define SATA_PORT_MULT_CAP_RESERVED 0

/* Disable SATA controller for now */
#define SATA_CONTROLLER 0

// FROM asrock board until I can figure out what this means

/**
 * @def EXTERNAL_CLOCK
 * @brief 00/10: Reference clock from crystal oscillator via
 *  PAD_XTALI and PAD_XTALO
 *
 * @def INTERNAL_CLOCK
 * @brief 01/11: Reference clock from internal clock through
 *  CP_PLL_REFCLK_P and CP_PLL_REFCLK_N via RDL
 */
#define EXTERNAL_CLOCK          0x00
#define INTERNAL_CLOCK          0x01

/* NOTE: inagua have to using internal clock,
 * otherwise can not detect sata drive
 */
#define SATA_CLOCK_SOURCE       INTERNAL_CLOCK


// Back to self found answers

/*
 * Do not need audio controller for APU
 * 0x1 = disabled
 */

#define AZALIA_CONTROLLER 1

/* Disable Azalia Controller SDIN pin Configuration */
#define AZALIA_PIN_CONFIG 0

/*
 * Leave the pin as GPIO pin
 */
#define AZALIA_SDIN_PIN 0


/* Do not enable general purpose PCIe ports */
#define GPP_CONTROLLER 0

/*
 * Should not mapper as we did not enable GPP controller
 * But for completness sake mode means 4:0:0:0
 */
#define GPP_CFGMODE 0


/* Do not show PCIe ports if they are empty */
#define SB_GPP_UNHIDE_PORTS FALSE


/* Enable faster link speeds, though it seems sb800 code will ignore this on hudsom m1 */
#define NB_SB_GEN2 TRUE

/* Use Gen2 for PCIe */
#define SB_GPP_GEN2 TRUE

/* Gigabyte Ethernet is not supported by Hudson M1 and not use by APU */
#define GEC_CONFIG 0

/*
 * Make late.c for sb800 happy. TODO: it should not rely on board to define this */
#define AZALIA_DISABLE                  1
#define AZALIA_AUTO                     0

/* Make familyn 14 init happy, as it does not include header it needs */
#include <cpu/amd/agesa/s3_resume.h>

