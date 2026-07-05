#include <stdio.h>

//to remove blank spaces from a string.

int main(){
    char str[100];
    printf("enter a string with spaces: ");
    fgets(str, 100, stdin); 
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    
    printf("\n");

}