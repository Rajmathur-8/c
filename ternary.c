#include <stdio.h>

int main() { 
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    (age>=18)?printf("aduld") : printf("Teenager");
    return 0;
}