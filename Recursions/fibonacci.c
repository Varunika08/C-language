#include <stdio.h>

//to print fibonacci series of a number

int fibonacci(int n);

int main(){
    int i,n;
    printf("enter number=");
    scanf("%d",&n);
    printf("fibonacci series of %d is",n);
    for (i=0;i<=n;i++){
        printf("%d  ",fibonacci(i));
    }
    return 0;
}

int fibonacci(int n){
    if (n==1){
        return 1;
    }
    else if (n<=0){
        return 0;
    }
    int fib=fibonacci(n-2)+fibonacci(n-1);
    return fib;
}