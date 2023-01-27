#include <stdio.h>

int main() { 
    int n,i,j,count,sum=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        count = 0;
          for(j =1;j<i;j++){
            if(i%j==0){
                count++;
            }
          }
          if(count ==1){
            sum = sum +i ;
          }
    }
    printf("sum is %d",sum);
    return 0;
}