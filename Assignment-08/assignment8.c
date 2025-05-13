#include <stdio.h>

int main(int argc, char** argv){
  int x, quot;
  printf("Enter a number between 1 and 499: ");
  
  scanf("%d",&x);
  // the "/" operator returns the quotient of division if used with two int
  quot = x / 100;
   
  switch(quot){
    case 0:
      printf("Your number is between 1 and 99");
      break;
    case 1:
      printf("Your number is between 100 and 199");
      break;
    case 2:
      printf("Your number is between 200 and 299");
      break;
    case 3:
      printf("Your number is between 300 and 399");
      break;
    case 4:
      printf("Your number is between 400 and 499");
      break;
    default:
      printf("Your number was not in any of our ranges");
      break;
  }
  return 0; 

}