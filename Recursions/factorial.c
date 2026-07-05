#include <stdio.h>

//to print factorial of a number using recursions

int factorial(int n);

int main(){
    int n;
    printf(("enter number="));
    scanf("%d",&n);
    printf("factorial of the number is=%d",factorial(n));
    return 0;
}

int factorial(int n){
    if (n==1){
        return 1;
    }
    int fact=(factorial(n-1))*n;
    return fact;
}