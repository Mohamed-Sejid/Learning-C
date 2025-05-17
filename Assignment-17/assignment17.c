#include <stdio.h>

void function(void);

int main(int argc, char** argv){
	function();
	return 0;
}

void function(){
	printf("Hello, World!\n");
	return;
}