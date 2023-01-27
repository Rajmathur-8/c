#include <stdio.h>

int main() { 
    int x,y,z;
    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("Enter the value of y :");
    scanf("%d", &y);

    printf("Enter the value of z :");
    scanf("%d", &z);

    int avg = (x+y+z)/3 ;
    printf("The average of the three numbers is : %d\n", avg);
    return 0;
}