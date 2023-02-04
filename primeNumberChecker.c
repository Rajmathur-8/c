#include <stdio.h>

int main() { 
    int i,n,count=0;
    printf("Enter a number you want to check :");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        
            if(n%i==0){
                count++;
            }
        }    
    if(count==1){
        printf("%d is a prime number \n",n);
    }else{
        printf("%d is not a prime number\n",n);
    
    }
    return 0;
}