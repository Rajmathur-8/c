#include <stdio.h>

int main() { 
    int n,end,i,j,sum;
    printf("Enter n and end: ");
    scanf("%d%d",&n,&end);
    for(i=n;i<=end;i++){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                sum += j;
            }
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
    return 0;
}