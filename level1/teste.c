#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[32];

int main(int argc, char* argv[], char* envp[]) {
  if(argc<2){
    printf("passe um argumento");
    return 0;
  }
  int param = atoi(argv[1]);
  printf("param: %d\n", param);
  int param2 = atoi(argv[1]) - 0x1234;
  printf("param2: %d\n", param2);

  int len = 0;
  len = read(param2, buf, 32);
  if(!strcmp("OK\n", buf)){
    printf("TOP");
    exit(0);
  }
  printf("DOWN");
}
