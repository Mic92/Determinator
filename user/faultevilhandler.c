#if LAB >= 5
#elif LAB >= 4
// test evil pointer for user-level fault handler

#include <inc/lib.h>

void
umain(void)
{
	sys_page_alloc(0, (void*) (UXSTACKTOP - PGSIZE), PTE_P|PTE_U|PTE_W);
	sys_env_set_pgfault_upcall(0, (void*) 0xF0100020);
	*(int*)0 = 0;
}
#endif
