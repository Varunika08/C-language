#include <stdio.h>

//to insert an element at the end of an array

int main(){
    int size=4;
    int arr[50]={1,2,3,4};
    int num;
    printf("enter number to be added in array=");
    scanf("%d",&num);
    arr[size]=num;
    size++;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}