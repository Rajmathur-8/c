#include <stdio.h>

int main() { 
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=1;i<10;i++){
        if(i==n){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}