##
## This file is part of the coreboot project.
##
## Copyright (C) 2012 Google Inc.
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; version 2 of the License.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
##

ramstage-$(CONFIG_EC_GOOGLE_CHROMEEC) += ec.c

romstage-y += chromeos.c
ramstage-y += chromeos.c

smm-$(CONFIG_HAVE_SMI_HANDLER) += smihandler.c

## DIMM SPD for on-board memory
SPD_BIN = $(obj)/spd.bin

# Order of names in SPD_SOURCES is important!
SPD_SOURCES  = Micron_4KTF25664HZ	# 0: 4GB / CH0 + CH1
SPD_SOURCES += Hynix_HMT425S6AFR6A	# 1: 4GB / CH0 + CH1
SPD_SOURCES += Elpida_EDJ4216EFBG	# 2: 4GB / CH0 + CH1
SPD_SOURCES += Micron_4KTF25664HZ	# 3: Reserved / place holder
SPD_SOURCES += Micron_4KTF25664HZ	# 4: 2GB / CH0 + CH1
SPD_SOURCES += Hynix_HMT425S6AFR6A	# 5: 2GB / CH0 + CH1
SPD_SOURCES += Elpida_EDJ4216EFBG	# 6: 2GB / CH0 + CH1

SPD_DEPS := $(foreach f, $(SPD_SOURCES), src/mainboard/$(MAINBOARDDIR)/$(f).spd.hex)

# Include spd rom data
$(SPD_BIN): $(SPD_DEPS)
	for f in $+; \
	  do for c in $$(cat $$f | grep -v ^#); \
	    do echo -e -n "\\x$$c"; \
	  done; \
	done > $@

cbfs-files-y += spd.bin
spd.bin-file := $(SPD_BIN)
spd.bin-type := 0xab
