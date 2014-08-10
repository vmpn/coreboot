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

#ifndef _AGESAWRAPPER_H_
#define _AGESAWRAPPER_H_

#include "Porting.h"
#include "AGESA.h"


UINT32 agesawrapper_amdlaterunaptask (UINT32 Func, UINT32 Data, VOID *ConfigPtr);
UINT32 agesawrapper_amdinitmid (        VOID	        );
UINT32 agesawrapper_amds3laterestore (void);

#endif //_AGESAWRAPPER_H_
