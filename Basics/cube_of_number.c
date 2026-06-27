#include <stdio.h>

//to print cube of a number

int main(){
    int number;
    printf("enter number for which cube needs to be calculated=");
    scanf("%d", &number);
    printf("cube of the number=%d",(number*number*number));
    return 0;
}