#include <stdio.h>
//to collect info (name, age, cgpa, course) of 2 students in a table like structure in a file.
//studentdata.txt file is used


struct student{
    char name[50];
    int age;
    float cgpa;
    char course[50];
};

int main(){
    struct student stu[2];
    for (int i=0;i<2;i++){
        printf("Name: ");
        scanf(" %s", stu[i].name); 
        printf("Age: ");
        scanf("%d", &stu[i].age);
        printf("CGPA: ");
        scanf("%f", &stu[i].cgpa);
        printf("Course: ");
        scanf(" %s", stu[i].course);
        printf("\n");
    }

    FILE *fptr;
    fptr=fopen("studentdata.txt","w");

    fprintf(fptr, "NAME \t\t AGE \t\t CGPA \t\t COURSE \n");
    for (int i = 0; i < 2; i++) {
        fprintf(fptr, "%s \t\t %d \t\t %f \t\t %s\n", stu[i].name, stu[i].age, stu[i].cgpa, stu[i].course);
    }

    fclose(fptr);
}
