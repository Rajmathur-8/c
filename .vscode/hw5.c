#include <stdio.h>

int main() { 
    int n,count;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 2;i<= n;i++){
        count =0;
        for(int j =1; j<i; j++){
            if(i%j==0){
                count++;
            }
        }
            if(count==1){
                printf("%d\n",i);
            }        
    }
    return 0;
}