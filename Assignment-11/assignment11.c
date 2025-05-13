#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
  int nbr=0, sum=0;
  int scores[10];
  float average;
  char more_scores[5];
  while(1){
    printf("Enter a test score: ");
    scanf("%d",(scores+nbr));
    nbr++;

    printf("Would you like to continue? Y/N ");
    scanf("%s", more_scores);
    if(strcmp(more_scores, "N")==0){
      break;
    }
  }

  for (int i=0; i<nbr ; i++){
    sum+= scores[i];
  }
  average = sum / nbr;
  printf("%.3f is the average", average);
  return 0;
}