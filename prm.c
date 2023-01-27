#include <stdio.h>

int main() { 
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    
    for(int i =1; i <= n; i++){
        for(int j =2; j<=i/2; i++){
        if(n%i ==0){
            break;
        }
        }
        printf("%d\n",i);
    
    }
    return 0;
}