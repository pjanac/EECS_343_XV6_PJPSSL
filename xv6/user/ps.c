// Create a zombie process that 
// must be reparented at exit.

#include "types.h"
#include "stat.h"
#include "user.h"

void
ps(void)
{
	//struct processInfoTable *s;
	//int numProcessesGotten = getprocs(s);
	int numProcessesGotten = getprocs();
	printf(1,"number of processes %d", numProcessesGotten);
}

int 
main(void)
{
	ps();
	exit();
}