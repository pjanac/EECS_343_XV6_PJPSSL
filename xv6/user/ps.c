#include "types.h"
#include "stat.h"
#include "user.h"
#include "ProcessInfo.h"

void
ps(void)
{
	//struct processInfo *s;
	//int numProcessesGotten = getprocs(s);
	int numProcessesGotten = getprocs(600);
	printf(1,"number of processes %d", numProcessesGotten);
}

int 
main(void)
{
	ps();
	exit();
}