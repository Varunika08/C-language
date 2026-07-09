#include <stdio.h>

//to convert all lowercase letters to uppercase in a string.

int main(){
    char str[100];
    printf("enter a string:");
    fgets (str,100,stdin);
    for (int i=0;str[i]!='\0';i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i]-=32 ;                   //A=65, a=97, difference = 97-65= 32
        }
    }
    printf("string in uppercase is:  %s",str);
}