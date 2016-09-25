#include "user.h"
#include "processinfo.h"

void
ps(void)
{
	struct processInfoTable *s;
	int numProcessesGotten = getprocs(s);
	printf(1,"number of processes %d", numProcessesGotten);
}

int 
main(void)
{
	ps();
	exit();
}