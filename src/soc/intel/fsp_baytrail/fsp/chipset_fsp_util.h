/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2013-2014 Sage Electronic Engineering, LLC.
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

#ifndef CHIPSET_FSP_UTIL_H
#define CHIPSET_FSP_UTIL_H

#include <fsp.h>
#include <fsptypes.h>
#include <fspfv.h>
#include <fspffs.h>
#include <fspapi.h>
#include <fspplatform.h>
#include <fspinfoheader.h>
#include <fsphob.h>
#include <fspvpd.h>
#include <azalia.h>

#define FSP_RESERVE_MEMORY_SIZE	0x200000

#define FSP_INFO_HEADER_GUID \
  { \
  0x912740BE, 0x2284, 0x4734, {0xB9, 0x71, 0x84, 0xB0, 0x27, 0x35, 0x3F, 0x0C} \
  }

/*
 * The FSP Image ID is different for each platform's FSP and
 * can be used to verify that the right FSP binary is loaded.
 * For the Bay Trail FSP, the Image Id is "VLYVIEW0".
 */
#define FSP_IMAGE_ID_DWORD0 0x56594C56	/* 'VLYV' */
#define FSP_IMAGE_ID_DWORD1 0x30574549	/* 'IEW0' */

#endif /* CHIPSET_FSP_UTIL_H */
