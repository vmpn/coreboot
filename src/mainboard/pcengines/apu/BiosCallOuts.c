/* For ARRAY_SIZE */
#include <stdlib.h>
#include <northbridge/amd/agesa/def_callouts.h>
#include <northbridge/amd/agesa/family14/fam14_callouts.h>


const BIOS_CALLOUT_STRUCT BiosCallouts[] =
{
        {AGESA_READ_SPD,                        BiosReadSpd },
};
const int BiosCalloutsLen = ARRAY_SIZE(BiosCallouts);

