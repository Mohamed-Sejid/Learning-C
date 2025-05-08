#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void static_mode(){
  char name[50];
  char last_name[50];
  printf("Enter your first name: ");
  scanf("%s",name);
  printf("Enter your last name: ");
  scanf("%s",last_name);
  printf("Hello %s %s !",name, last_name);

}

void dynamic_mode(){
  char* name;
  char* last_name;
  int max_char=50;
  name = (char*)malloc(50*sizeof(char));
  last_name = (char*)malloc(50*sizeof(char));
  if(name==NULL || last_name==NULL){
    fprintf(stderr,"Failed to allocate memory!!");
    exit(1);
  }
  printf("Enter your first name: ");
  fgets(name, max_char, stdin);
  name[strcspn(name, "\n")]='\0';
  printf("Enter your last name: ");
  fgets(last_name, max_char, stdin);
  last_name[strcspn(last_name, "\n")]='\0';
  printf("Hello %s %s !",name, last_name);
  free(name);
  free(last_name);
}
int main(int argc, char** argv){
  // static_mode();
  dynamic_mode();
  return 0;
}