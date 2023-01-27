#include <stdio.h>
// This program is for calculation of perimeter of a rectangle.

int main() { 
    float length,breadth;
    
   printf("Enter the value of length\n");
    scanf("%f", &length);

    printf("Enter the value of breadth\n");
     scanf("%f", &breadth);

    float perimeter = 2*(length + breadth);
    printf("The perimeter of rectangle is %f", perimeter);
    return 0;
}