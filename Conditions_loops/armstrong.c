#include <stdio.h>
#include <math.h>

int main(){
    int n,temp,rem,dig=0,res=0;
    printf("enter any number");
    scanf("%d", &n);
    temp=n;
    while (temp!=0){
        dig++;
        temp/=10;
    }
    temp=n;
    while (temp!=0){
        rem=temp%10;
        res+=round(pow(rem,dig));
        temp/=10;
    }
    if (res==n){
        printf("%d is an armstrong number ",n);
    } else {
        printf("%d is not an armstrong number",n);
    }
}