#include <stdio.h>

//to print the sum of n natural numbers

int printsum(int n);

int main(){
    int n;
    printf("enter natural number (n>=1)=");
    scanf("%d",&n);
    printf("the sum of first n natural numbers are=%d",printsum(n));
    return 0;
}

int printsum(int n){
    if (n==1){
        return 1;
    }
    int sum=printsum(n-1)+n;
    return sum;
}