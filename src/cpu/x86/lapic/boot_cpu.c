#include <smp/node.h>
#include <cpu/x86/msr.h>

#if CONFIG_SMP
int boot_cpu(void)
{
	int bsp;
	msr_t msr;
	msr = rdmsr(0x1b); // MSR_APIC_BAR
	bsp = !!(msr.lo & (1 << 8)); // Bit 8: boot strap core BKDG 3.20
	return bsp;
}
#endif
