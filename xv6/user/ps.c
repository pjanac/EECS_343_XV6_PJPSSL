#include "types.h"
#include "stat.h"
#include "user.h"
#include "ProcessInfo.h"

void
ps(void)
{
	struct ProcessInfo table;
	int numProcessesGotten = getprocs(&table);
	//int numProcessesGotten = getprocs(600);
	printf(1,"number of processes %d", numProcessesGotten);
}

int 
main(void)
{
	ps();
	exit();
}