#include <stdio.h>

//to swap 2 numbers - using call by reference
void swap(int *a, int *b);

int main(){
    int x=5,y=8;
    printf("before swap : x=%d and y=%d",x,y);
    printf("\n");
    swap(&x,&y);
    return 0;
}

void swap (int *a, int*b){
    int c= *a;
    *a=*b;
    *b=c;
    printf("after swap : x=%d and y=%d",*a,*b);
}