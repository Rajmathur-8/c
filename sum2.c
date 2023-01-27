#include <stdio.h>
int sum(int a, int b);

int main() { 
printf("Enter the value of a : ");
int a, b;
scanf("%d", &a);
printf("Enter the value of b : ");
scanf("%d", &b);

int s = sum(a,b);
printf("Sum is %d\n", s);
    return 0;
}
int sum(int a , int b){
return a + b;
}