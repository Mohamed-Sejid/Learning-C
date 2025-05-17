#include <stdio.h>

int main(int argc, char** argv){
	int x= 50;
	int* p=&x;

	printf("The value of the pointer is: %d\n", p);
	// You can use %p to show hex value of the pointer
	// printf("The value of the pointer is: %p\n", p);
	printf("The value it's pointing to is : %d \n",x);
	return 0;
}