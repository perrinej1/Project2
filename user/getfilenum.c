#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int pid;

  //Checks if user used getfilenum correctly
  if(argc <= 1){
    fprintf(2, "usage: getfilenum pid...\n");
    exit(1);
  }

  //Runs getfilenum, if its a not good pid it lets user know
  for(int i = 1; i < argc; i++){
    pid = getfilenum(atoi(argv[i]));
    if(pid == -1){
      fprintf(2, "not good pid\n");
      exit(0);
    }
    printf("%d\n", pid);
  }

  exit(0);
}
