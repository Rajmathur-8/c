#include <stdio.h>

int main() { 
    for(int i = 1; i <= 50; i++){
        if(i >= 6 && i%2 == 0){
            continue;
        }
    printf("%d\n", i);
    }
    return 0;
}