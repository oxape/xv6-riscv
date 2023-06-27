#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int value;
  if(argc < 2){
    fprintf(2, "Usage: sleep seconds\neg. sleep 10\n");
    exit(1);
  }
  int pid = getpid();
  fprintf(1, "pid=%d\n", pid);
  value = atoi(argv[1]);
  sleep(value);
    // for (int i=0; i<value; i++) {
    //    asm volatile("nop");
    // }
  fprintf(1, "sleep xxx\n");
  exit(0);
}
