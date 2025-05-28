#include <stdio.h>
#include <stdlib.h>

struct data
{
	int x;
	float y;
	char c;
};


int main(int argc, char** argv){
	struct data test;

	test.x= 20;
	test.y= 0.5;
	test.c= 'h';

	printf("This is the int: %d, ths is the char: %c, this is the float: %f\n",test.x, test.c, test.y);
	return 0;
}