#include <stdio.h>

// pattern 1- * with 4 rows , 5 columns

int main(){
    int i, j;
    for (i=1; i<=4;i++){
        for (j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }
}