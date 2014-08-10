/*
 * This file is part of the coreboot project.
 *
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

#include "superio/nuvoton/nct5104d/nct5104d.h"

#include <console/console.h>

//For Boot CPU function
#include <smp/node.h>

//For cache_as_ram_main
#include "cpu/amd/car.h"

//For copy_and_run a.k.a ramstage
#include <arch/stages.h>

#define SERIAL_DEV	PNP_DEV(0x2e, NCT5104D_SP1)

/**
 * According to Family 14h processor BKDG 2.4.2 the top 8 bits of
 * cpuid (eax=1) are cpuCoreNum where 0 is the BSP
 */
void cache_as_ram_main(unsigned long bist, unsigned long cpuCoreNum)
{
	if (cpuCoreNum == 0 && boot_cpu()) {
		nct5104d_enable_uartd(SERIAL_DEV);
		console_init();
	}

        copy_and_run();
        printk(BIOS_ERR, "Error: copy_and_run() returned!\n");
}
