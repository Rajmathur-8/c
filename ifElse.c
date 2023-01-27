#include <stdio.h>

int main() { 
    int age;
printf("Enter age : ");
scanf("%d", &age);

if(age>=18){
    printf("I'm an adult\n");
printf("I can vote\n");
printf("I can drive also\n");

}
else{
    printf("i'm a teenager");
}

printf("Thank You");
    return 0;
}