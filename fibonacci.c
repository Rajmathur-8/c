#include <stdio.h>
int printFibonacciSequence(int n);

int main() { 
   
printf("%d\n", printFibonacciSequence(6));
    return 0;
}
int printFibonacciSequence(int n){
        if(n == 0){
            return 0;
        }
    if(n == 1){
        return 1;
    }

int fibNm1 = printFibonacciSequence(n-1);
int fibNm2 = printFibonacciSequence(n-2);
int fibN = fibNm1 + fibNm2;
//printf("fib of %d is %d\n", n, fibN);
return fibN;
}