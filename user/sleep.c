#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {

    if(argc < 2){
        fprintf(2, "Error message!\n");
        exit();
     }

  int x = atoi(argv[1]);

  sleep(x);

  printf("sleep %d !\n",x);

  exit();
}