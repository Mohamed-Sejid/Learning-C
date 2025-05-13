#include <stdio.h>

int main(int argc, char** argv){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    printf("The array has %ld elements\n", sizeof(array)/sizeof(int));
    return 0;
}