#include <stdio.h>

//to replace the strings of the file read.c with the number of vowels in that string
//text.txt file is used.

int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    char str[100];
    fgets(str,100,fptr);
    printf("old data is \n");
    printf("%s",str);
    printf("\n");

    int vowel =0;
    for (int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowel++;
        }
    }
    fptr=fopen("text.txt","w");
    printf("new content is \n");
    printf("%d",vowel);
    printf("\n");
}