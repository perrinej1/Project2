#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/pstat.h"

int
main(struct pstat* ps)
{
  // got to have getpinfo() run in here too
  // print all info needed for getpinfo
  for(int i=0; i < NPROC, i++)
  {
    printf("PID = %d\n", ps->pid);
    printf("Inuse = %d\n", ps->inuse);
    printf("Number of tickets process has = %d\n", ps->tickets);
    printf("Number of tickets acculated = %d\n", ps->ticks);
  }

  exit(0);
}
