#include <stdio.h>

//to print highest frequency character in a string.

int main(){
    int n;
    printf("enter size of string: ");
    scanf("%d",&n);

    char str[n];
    printf("enter a string (single word) : ");
    scanf("%s",&str);

    char highest = str[0];
    int max=0;

    for (int i = 0; str[i] != '\0'; i++) {  //goes thru each letter of the string
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++) {  //goes thru whole string again
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            highest = str[i];
        }
    }
    printf("the highest frequency character is %c and value is %d : ",highest, max);
}