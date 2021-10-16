#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/linkage.h>

asmlinkage int sys_minus(int a, int b, int *result)
{
	int t = a-b;
	put_user(t, result);
	return 0;
}

SYSCALL_DEFINE3(minus, int, a, int, b, int*, result)
{
        return sys_minus(a,b,result);
}

