#include <stdio.h>

int main() { 
    int n,count,sum=0;
    printf("Enter number upto which you want sum of prime of:");
    scanf("%d",&n);
    for(int i = 2;i<=n;i++){
        count=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                count++;
        }
        }
        if(count==1){
            sum=sum+i;
        }
    }
    printf("Sum upto n prime number is %d\n",sum);
    return 0;
}