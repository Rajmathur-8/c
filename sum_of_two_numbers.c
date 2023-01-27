#include <stdio.h>
//  Here We are finding the sum of two numbers
int main() { 
    int number1,number2;

printf("Enter thevalue of number1\n");
 scanf("%d", &number1);  

printf("Enter thevalue of number2\n");
scanf("%d", &number2);

int sum = number1 + number2 ;
printf("sum of number1 and number2 is %d",sum );
    return 0;
}