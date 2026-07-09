#include <stdio.h>

//to print elements of array in reverse order.

void reverse(int arr[], int n);

int main(){

    //input elements of array
    int arr[4];
    for (int i=0;i<4;i++){
        printf("Enter elements of array% d: ", i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,4);
}

void reverse(int arr[],int n){
    for (int i=0; i<n/2;i++){
        int first =arr[i];
        int second = arr[n-i-1];
        arr[i]=second;
        arr[n-i-1]=first;
    }
    for (int j=0; j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}