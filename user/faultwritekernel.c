#if LAB >= 4
#elif LAB >= 3
// buggy program - faults with a write to a kernel location

#include <inc/lib.h>

void
umain(void)
{
	*(unsigned*)0xf0100000 = 0;
}

#endif
