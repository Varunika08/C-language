# include <stdio.h>

//to print max of 2 numbers using pointers

int main(){
    int n1,n2;
    printf("enter 1st number=");
    scanf("%d",&n1);
    printf("enter 2nd number=");
    scanf("%d",&n2);
    int *ptr1= &n1;
    int *ptr2= &n2;
    if (*ptr1>*ptr2){
        printf("the maximum number is %d",*ptr1);
    }else{
        printf("the maximum number is %d",*ptr2);
    }
}