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
//int *p=0;
//int i=0;
//printf(1,"go fuck userself %d %d",i);


//int *p=0;
//printf(1, "%x", *p);


       	ps();
	exit();
}
