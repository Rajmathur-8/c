#include <stdio.h>
int percentage(int maths, int science, int sanskrit);

int main() { 
    int sc = 98;
    int maths = 99;
    int sanskrit = 97;
    printf("percentage is %d\n", percentage(maths,sc,sanskrit));
    return 0;
}
int percentage(int maths, int science, int sanskrit){
    return ((science + maths+ sanskrit)/3);
}