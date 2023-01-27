#include <stdio.h>

int main() { 
    int marks[3];
printf("enter phys, chem, maths :\n");
scanf("%d%d%d", &marks[0], &marks[1], &marks[2]);

printf("phys = %d & chem = %d & maths = %d \n", marks[0], marks[1], marks[2]);

    return 0;
}