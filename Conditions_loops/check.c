#include <stdio.h>
//to check if char is a digit or not

int main(){
    char ch;
    printf("enter character=");
    scanf("%c", &ch);
    if (ch>='0' && ch<='9'){
        printf("%c char is a digit",ch);
    } else {
        printf("%c char is not a digit",ch);
    }
}


//to print smallest of 2 numbers

int main(){
    int n1;
    int n2;
    printf("enter n1=");
    scanf("%d", &n1);
    printf("enter n2=");
    scanf("%d", &n2);
    if (n1>n2){
        printf("n2 is smallest");
    } else {
        printf("n1 is smallest");
    }
    return 0;
}


//to print avg of 2 numbers

int main(){
    int n1;
    int n2;
    printf("enter 1st num=");
    scanf("%d",&n1);
    printf("enter 2nd num=");
    scanf("%d",&n2);
    printf("avg of 2 numbers = %d",(n1+n2)/2);
    return 0;
}


//to check if number is a natural number or not

int main(){
    int num;
    printf("enter number=");
    scanf("%d", &num);
    if (num>=1){
        printf("%d is a natural number",num);
    } else{
        printf("%d is not a  natural number",num);
    }
    return 0;
}
