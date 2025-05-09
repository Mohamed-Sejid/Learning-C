#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv){
  int num, denom;
  div_t result;
  printf("Enter a numerator: ");
  scanf("%d",&num);
  printf("Enter a denominator: ");
  scanf("%d", &denom);
  
  if (denom == 0){
    printf("Cannot divide by zero");
    exit(1);
  }  
  
  result = div(num, denom);

  if(result.rem == 0){
    printf("There is NOT a remainder! \n");
  }else{
    printf("There is a remainder \n");
  }

  return 0;
}