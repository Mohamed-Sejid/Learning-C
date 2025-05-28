#include <stdio.h>

#define PIE 3.14

int main(int argc, char** argv){
    float radius;

    while(1){
        printf("Enter the radius  of your circle: ");
        scanf("%f",&radius);
        if (radius>0){
            break;
        }
        printf("Please enter a positive radius\n");
    }

    printf("The area of your circle is %.4f", PIE*radius*radius);
    return 0;
}