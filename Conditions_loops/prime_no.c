#include <stdio.h>

//to check if a number is prime number or not

int main() {
    int i,num;
    printf("enter num");
    scanf("%d",&num);
    if (num<=1){
        printf("%d is not a prime number",num);
    } else{
        for (i=2;i<=num/2;i++){
            if (num%i==0){
                break;
            }
        }  
    }

    if (i>num/2){
        printf("%d is a prime number",num);
    } else {
        printf("%d is not a prime number",num);
    }             
    }  

//to print a range of prime numbers

int main(){
    int start;
    int end;
    int i,j;
    printf("enter start range from 2=");
    scanf("%d",&start);
    printf("enter end range=");
    scanf("%d",&end);

    for (i = start; i <= end; i++) {
        if (i <= 1) {
            continue; 
        }
        for (j= 2; j<=i/ 2; j++) {
            if (i%j == 0) {
                break;
            }
        }
        if (j> i/ 2) {
            printf("%d ",i);
        }
    }
    return 0;
}
