# include <stdio.h>

//to find sum of digits entered

int sumofdigits(int num);

int main() {
    int num;
    printf("enter a number=");
    scanf("%d",&num);

    printf("sum of digits of number=%d",sumofdigits(num));
    return 0;
}
int sumofdigits(int num) {
    int sum=0;
    while (num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}



//to find square root of a number

#include <math.h>

int sqrtofnumber(int num);

int main(){
    int num;
    printf("enter number=");
    scanf("%d",&num);
    printf("sqrt of the number=%d",sqrtofnumber(num));
    return 0;
}

int sqrtofnumber(int num){
    int sqroot= round(pow(num,0.5));
    return sqroot;
}