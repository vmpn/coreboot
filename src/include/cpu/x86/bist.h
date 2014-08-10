#ifndef CPU_X86_BIST_H
#define CPU_X86_BIST_H

static void report_bist_failure(u32 bist)
{
	if (bist != 0) {

//Why is this ifdef needed if print_emerge already aliased to printk when neecessary?
#if CONFIG_CACHE_AS_RAM
                printk(BIOS_EMERG, "BIST failed: %08x", bist);
#else
		print_emerg("BIST failed: ");
		print_emerg_hex32(bist);
#endif
		die("\n");

	}
}

#endif /* CPU_Xf86_BIST_H */
