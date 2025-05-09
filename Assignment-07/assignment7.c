#include <stdio.h>
#include <math.h>

float calculate_det(int a, int b, int c );
void print_solutions(int a, int b, int c);

int main(int argc, char** argv){
  int a, b, c;
  while(1){
    printf("Enter the value of variable 'A': ");
    scanf("%d", &a);
    if(a==0){
      printf("A cannot be zero");
      continue;
    }else{
      break;
    }
  }
  printf("Enter the value of variable 'B': ");
  scanf("%d", &b);

  printf("Enter the value of variable 'C': ");
  scanf("%d", &c);

  print_solutions(a, b, c);
  return 0;
}

float calculate_det(int a, int b, int c){
  return (float)((b*b)-4*a*c);
}

void print_solutions(int a, int b, int c){
  float det, solution1, solution2;
  det= calculate_det(a,b,c);
  if (det == 0){
    solution1 = -b/(2*a);
    printf("The solution is: %.4f", solution1);
  }else if (det > 0){
    solution1 = (-b+sqrt(det))/(2*a);
    solution2 = (-b-sqrt(det))/(2*a);
    printf("The solution using the '+' operator is: %.4f \n", solution1);
    printf("The solution using the '-' operator is: %.4f \n", solution2);
  }else{
    printf("No solutions in R because %.4f < 0",det);
  }
  return;
}