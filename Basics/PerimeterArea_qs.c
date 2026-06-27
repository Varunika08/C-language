# include <stdio.h>

//perimeter of rectangle

int main() {
    int length;
    int breadth;
    printf("enter length=");
    scanf("%d",&length);
    printf("enter breadth=");
    scanf("%d",&breadth);
    printf("perimeter of rectangle = %d", 2*(length+breadth));
    return 0;
}

//Area of circle

int main(){
    float rad;
    printf("enter radius=");
    scanf("%f",&rad);
    printf("area of circle=%f", (3.14*rad*rad));
    return 0;
}