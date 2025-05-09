#include <stdio.h>
#include <stdlib.h>

void print_time(int );

int main(int argc, char** argv){
  int input_seconds;

  while(1){
    printf("Enter the amount of seconds: ");
    scanf("%d", &input_seconds);

    if(input_seconds>0){
      break;
    }
    printf("Please enter a positive amount of seconds");
  }

  print_time(input_seconds);
  return 0;
}

void print_time(int input_seconds){
  int hours=0, minutes=0, seconds=0;
  div_t result;

  // Calculating hours
  result = div(input_seconds, 3600);
  hours = result.quot;

  // Calculating minutes
  result = div(result.rem, 60);
  minutes = result.quot;

  // Calculating seconds
  result = div(result.rem, 60);
  seconds = result.rem;

  printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.",input_seconds, hours, minutes, seconds);
  return;
}