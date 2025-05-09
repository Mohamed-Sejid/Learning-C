#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv){
    int x=5;
    double pi=3.14;
    char char_var[]="Hello, World!";

    printf("%d is an integer!\n", x);
    printf("%.2f is a float\n", pi);
    // printf("%s is a char");

    for (int i=0; i < sizeof(char_var)/sizeof(char); i++){
        printf("%c",char_var[i]);
    }
    printf(" is a char array \n");
    return 0;

}