#include <stdio.h>

//to replace lowercase with uppercase strings and vice versa.

int main(){
    char str[100];
    printf("enter a string:");
    fgets (str,100,stdin);
    for (int i=0;str[i]!='\0';i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i]-=32 ;                   
        }
        else if (str[i]>='A' && str[i]<='Z'){
            str[i]+=32 ;                   
        }
    }
    printf("string in uppercase is:  %s",str);
}