#include <stdio.h>
// This is program for finding the cube of the input number
int main() { 
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
   int cube = pow(n,3) ;
printf("the cube of the given number is %d", cube);
    return 0;
}