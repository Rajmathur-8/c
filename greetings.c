#include <stdio.h>
void namaste();
void bonjour();

int main() { 
    char ch;
    printf("Enter i for india anf f for french\n");
    scanf("%c", &ch);
    if(ch == 'i'){
    namaste();
    }else{
    bonjour();
    }
    return 0;

}

void namaste(){
    printf(" Namaste");
}
void bonjour(){
    printf("Bonjour");
}