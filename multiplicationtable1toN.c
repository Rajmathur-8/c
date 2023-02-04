#include <stdio.h>

int main() { 
    int n,i;
    printf("Enter a number you want table of :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int j=1;j<=10;j++){
        printf("%d * %d = %d\n",i,j,i*j);
    }
}
    return 0;
}