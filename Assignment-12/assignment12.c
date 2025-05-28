#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEADS 0
#define TAILS 1
 
int main(int argc, char** argv){
	int flips, coin;
	int heads_count = 0, tails_count = 0; 
	srand(time(NULL));
	printf("How many times would you like to flip the coin?");
	scanf("%d",&flips);

	for (int i=0; i<flips; i++){
		coin = rand() % 2;
		if (coin == HEADS){
			heads_count++;
		}else{
			tails_count++;
		}
	}

	printf("After flipping the coin %d times, the resuluts were \n",flips);
	printf("%d heads \n",heads_count);
	printf("%d tails\n", tails_count);

	return 0;
}