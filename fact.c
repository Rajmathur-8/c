#include <stdio.h>

int main() { 
    int n,i,fact = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++ ){
        fact = fact * i;
      
    }
    printf("factorial of the entered number is %d\n", fact);
    return 0;
}