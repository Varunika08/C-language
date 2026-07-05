#include <stdio.h>
//to print the largest number in an array
int main(){
    int n =5;
    int arr[]={1,6,3,5,2};
    int max=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("the maximum number is %d", max);
}