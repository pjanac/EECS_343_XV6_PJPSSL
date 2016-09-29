#include "types.h"
#include "stat.h"
#include "user.h"
#include "ProcessInfo.h"

void
ps(void)
{
	struct ProcessInfo table[64];
	char *stateMapping[] = {"UNUSED","EMBRYO","SLEEPING","RUNNABLE","RUNNING","ZOMBIE"};
	int numProcessesGotten = getprocs(table);


	int i;
	for (i = 0; i < numProcessesGotten; i++){
		printf(1,"%d %d %s %d %s \n", table[i].pid, table[i].ppid, stateMapping[table[i].state], table[i].sz, table[i].name);
	}
}

int 
main(void)
{
	ps();
	exit();
}