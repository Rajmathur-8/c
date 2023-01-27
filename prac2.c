#include <stdio.h>
int main() {
    
/*int isSunday;
int isSnowing;
printf("Enter either 0 or 1 for isSunday\n");
scanf("%d", &isSunday);
printf("Enter either 0 or 1 for isSnowing\n");
scanf("%d", &isSnowing);

printf("%d\n", isSunday && isSnowing);
    }
  */  
/*int isMonday,isRaining;
printf("Enter either 0 or 1 for monday\n");
scanf("%d", &isMonday);
printf("Enter either 0 or 1 for raining\n");
scanf("%d", &isRaining);
printf("%d", isMonday || isRaining);
 */
int x;
printf("Enter a number between 1 - 100\n");
scanf("%d", &x);
printf("%d", (x > 9 && x < 100));
    return 0;
    
}