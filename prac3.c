#include <stdio.h>

int main() { 
    int marks;
    printf("Enter the marks obtained(0-100) : ");
    scanf("%d", &marks);
    if(marks > 30 && marks <=100){
        printf("Pass");
    }else if(marks <= 30){
        printf("Fail");
    } else {
        printf("invaild");
    }

    return 0;
}