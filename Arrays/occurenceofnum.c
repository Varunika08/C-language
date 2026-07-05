#include <stdio.h>

//to print the occurence of a number 'x' in the array

int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        printf("enter the elements %d :",i+1);
        scanf("%d",&arr[i]);
    }

    int count=0;
    int num;
    printf("enter number to find:");
    scanf("%d",&num);
    for (int j=0; j<5;j++){
        if (arr[j]==num){
            count+=1;
        }
    }
    printf("occurence=%d",count);
    printf("\n");
}