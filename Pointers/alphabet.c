#include <stdio.h>

// to print all letters of english alphabet using ptr.

int main(){
    char ch;
    char *ptr= &ch;
    printf("the letters of english alphabet are=");
    for (*ptr='A';*ptr<='Z';(*ptr)++){
        printf("%c ",*ptr);
    }
    printf("\n");
}