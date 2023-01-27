#include <stdio.h>

int main() { 
   int num,rev;
   printf("Enter a 3 - digit number : ");
   scanf("%d", &num);

   rev = num%10;
   printf("%d",rev);
   rev = num/10;
   rev = rev%10;
   printf("%d",rev); 
   rev = num/10;
   rev = rev/10;
   printf("%d",rev);


    return 0;
}