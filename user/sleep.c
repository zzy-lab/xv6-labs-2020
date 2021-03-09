#include "kernel/types.h"
#include "user/user.h"

int 
main(int argc,char *argv[])
{
  if(argc!=2)
  {
    fprintf(2,"Usage: sleep function error\n");
    exit(1);
  }
  int sleepNum=atoi(argv[1]);
  sleep(sleepNum);
  printf("nothing happens\n");
  exit(0);
}
