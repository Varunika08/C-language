#include <stdio.h>

//to read a string from a file and display the output.
//text.txt file is used.


int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if (fptr==NULL){
        printf("no content present");
    }else {
        char str[100];
        printf("contents in the file are:\n");
        fgets(str, 100, fptr);
        printf("%s",str);
    }
}