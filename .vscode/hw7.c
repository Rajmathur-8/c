#include <stdio.h>

int main() { 
    int i,n,count=0;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count ==2){
            printf("%d is prime\n",n);
        }else{
            printf("%d is not prime\n",n);
        }
    
    return 0;
}