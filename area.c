#include <stdio.h>
 void areaOfSquare(int a);
 void areaOfCircle(int r);
 void areaOfRectangle(int l, int b);
 
int main() { 
    int a,r,l,b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    areaOfSquare(a);

    printf("Enter the value of r : ");
    scanf("%d", &r);
    areaOfCircle(r);

    printf("Enter the value of l : ");
    scanf("%d", &l);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    areaOfRectangle(l,b);
    
    
    return 0;
}
void areaOfSquare(int a){
    printf("Area of square is %d\n", a*a);
}
 void areaOfCircle(int r){
    float pi = 3.14;
    printf("Area of the circle is %f\n", pi*r*r);
}
void areaOfRectangle(int l, int b){
    int area = l*b;
    printf("Area of the rectangle is %d\n", area);
}
 

 