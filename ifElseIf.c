#include <stdio.h>

int main() { 
    int marks;
printf("Enter the marks obtained : ");
scanf("%d", &marks);
    if(marks> 90){
printf("The grade is A++");
    }
    else if(marks > 80 && marks < 90){
    printf("The grade is A+");
 }
        return 0;
}