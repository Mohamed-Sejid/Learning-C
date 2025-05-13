#include <stdio.h>

int main(int argc, char** argv){
  if(argc!=3){
    fprintf(stderr, "You should enter exactly two arguments: Your first and last name!!\n");
    exit(1);
  }

  printf("Hello %s %s", argv[1], argv[2]);
  return 0;
}