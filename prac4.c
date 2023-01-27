#include <stdio.h>

int main() { 
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch>='a' && ch<= 'z'){
        printf("entered character is of lower case\n");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Entered character is of upper case\n");
    }
    else{
        printf("Invalid character");
    }

    return 0;
}