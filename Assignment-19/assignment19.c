#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 50
int main (int argc, char** argv){
	char* dynamic_array;
	dynamic_array = (char*)malloc(ARRAY_SIZE*sizeof(char));

	if (dynamic_array == 0){
		printf("memory allocation was not succefull.\n");
		exit(1);
	}

	printf("Memory was successfully allocated.\n");
	free(dynamic_array);
	return 0;
}