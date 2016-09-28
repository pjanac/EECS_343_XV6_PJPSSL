#include "types.h"
#include "stat.h"
#include "user.h"
#include "ProcessInfo.h"

void
ps(void)
{
	struct ProcessInfo *table = NULL;
	char *stateMapping[] = {"UNUSED","EMBRYO","SLEEP","RUNNABLE","RUNNING","ZOMBIE"};
	int numProcessesGotten = getprocs(table);
	printf(1,"number of processes %d \n", numProcessesGotten);

	printf(1,"%d %d %s %d %s \n", table->pid, table->ppid, stateMapping[table->state], table->sz, table->name);
	//printf(1,"%d %d %s %d %s \n", table[0].pid, table[0].ppid, stateMapping[table[0].state], table[0].sz, table[0].name);


}

int 
main(void)
{
	ps();
	exit();
}