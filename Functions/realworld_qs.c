#include <stdio.h>

//write a fn to print HOT or COLD when user enters a temperature.

void printtemp(float temp);

int main(){
    float temp;
    printf("enter temperature in deg celcius=");
    scanf("%f",&temp);
    printtemp(temp);
    return 0;
}

void printtemp(float temp){
    if (temp>=38.0){
        printf("HOT\n");
    } else if (temp<=35.0){
        printf("COLD\n");
    } else{
        printf("normal temp");
    }
}