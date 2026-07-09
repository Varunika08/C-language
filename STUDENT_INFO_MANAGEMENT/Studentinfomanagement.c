// to make a system that manages student information like id,name,age,cgpa,year,course, attendance.
//it should have functions like add record,search and display a record, update and delete.
//add special features like - show topper and count total students.

#include <stdio.h>
#include <string.h>


void addrecord(void);
void searchrecord(void);
void updaterecord(void);
void deleterecord(void);
void showtopper(void);
void totalstudents(void);

struct student{
    int id;
    char name[100];
    int age;
    float cgpa;
    char course[100];
    float attendance;
};

int main(){
    printf("-----------MENU-----------\n");
    printf("1.Add Record\n2.Search Record\n3.Update Record\n4.Delete Record\n5.Show Semester Topper\n6.Show total students\n7.Exit\n");

    while (1){
        printf("enter choice number: ");
        int choice;
        scanf("%d", &choice);

        if (choice == 1){
            addrecord();
        }else if (choice ==2){
            searchrecord();
        }else if (choice ==3){
            updaterecord();
        }else if (choice ==4){
            deleterecord();
        }else if (choice ==5){
            showtopper();
        }else if(choice ==6){
            totalstudents();
        }else if (choice ==7){
            break;
        }else{
            printf("invalid choice number entered !");
        }
        printf("Do you want to enter choices? (enter Y/y or N/n)");
        char enterchoice;
        scanf(" %c",&enterchoice);

        if (enterchoice == 'n' || enterchoice == 'N') {
            printf("Exiting program.....\n");
            break; 
        }
    }
        printf("\n");
    return 0;
}

void addrecord(void){
    int n;
    printf("enter number of records: ");
    scanf("%d",&n);
    struct student info[n];
    for (int i=0;i<n;i++){
        printf("Enter student id:");
        scanf("%d",&info[i].id);

        printf("Name of the student: ");
        scanf("%s", info[i].name); 

        printf("Age of the student: ");
        scanf("%d", &info[i].age);

        printf("CGPA: ");
        scanf("%f", &info[i].cgpa);

        printf("Course: ");
        scanf("%s", info[i].course);

        printf("Enter attendance:");
        scanf("%f",&info[i].attendance);

        printf("\n");
    }

    FILE *fptr;
    fptr=fopen("studentinfo.txt","a");

    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%-5d %-20s %-5d %-10.3f %-10s %-10.3f\n",info[i].id, info[i].name, info[i].age, info[i].cgpa, info[i].course, info[i].attendance);
    }

    fclose(fptr);
    printf("records added !");
    }



void searchrecord(void){
    int searchid;
    printf("enter student id to search details: ");
    scanf("%d",&searchid);

    FILE *fptr;
    fptr=fopen("studentinfo.txt","r");

    int fid;
    char name[100];       
    int age;             
    float cgpa;          
    char course[100]; 
    float attendance;

    if (fptr!=NULL){
        while (fscanf(fptr,"%d %s %d %f %s %f", &fid,name, &age,&cgpa,course,&attendance)==6){
            if (searchid==fid){
                printf("ID %d found !\n",fid);
                printf("%-5d %-20s %-5d %-10.3f %-10s %-10.3f\n", fid,name,age,cgpa,course,attendance);
            }
        }

    }
    fclose(fptr);
}


void updaterecord(void){
    int updateid;
    printf("enter student id to update details: ");
    scanf("%d",&updateid);

    FILE *fptr;
    fptr=fopen("studentinfo.txt","r");
    FILE *newfptr;
    newfptr=fopen("updatedinfo.txt","w");

    int fid;
    char name[100];       
    int age;             
    float cgpa;          
    char course[100]; 
    float attendance;

    
    while (fscanf(fptr,"%d %s %d %f %s %f",&fid,name,&age,&cgpa,course,&attendance)==6){
        if (updateid==fid){
            int newage;
            float newcgpa;
            char newcourse[20];
            float newattendance;
            printf("enter new age:");
            scanf(" %d",&newage);
            printf("enter new cgpa:");
            scanf(" %f",&newcgpa);
            printf("enter new course:");
            scanf(" %s",newcourse);
            printf("enter new attendance:");
            scanf(" %f",&newattendance);

            printf("Record updated!\n", fid);
            fprintf(newfptr,"%-5d %-20s %-5d %-10.3f %-10s %-10.3f\n", fid,name,newage,newcgpa,newcourse,newattendance);
        }else{
            fprintf(newfptr,"%-5d %-20s %-5d %-10.3f %-10s %-10.3f\n", fid,name,age,cgpa,course,attendance);
        }
    } 
    fclose(newfptr);
    fclose(fptr);
}
    


void deleterecord(void){
    int deleteid;
    printf("enter student id to delete record: ");
    scanf("%d",&deleteid);

    FILE *fptr;
    fptr=fopen("studentinfo.txt","r");
    FILE *newfptr;
    newfptr=fopen("undeletedinfo.txt","w");

    int fid;
    char name[100];       
    int age;             
    float cgpa;          
    char course[100]; 
    float attendance;

    while (fscanf(fptr,"%d %s %d %f %s %f\n", &fid,name,&age,&cgpa,course,&attendance) == 6){
        if (deleteid!=fid){
            fprintf(newfptr,"%-5d %-20s %-5d %-10.3f %-10s %-10.3f\n", fid,name,age,cgpa,course,attendance);
        }
    }
    printf("Record deleted!\n", fid);
    fclose(newfptr);
    fclose(fptr);
}


void showtopper(void){
    FILE *fptr;
    fptr=fopen("updatedinfo.txt","r");
    
    int fid;
    char name[100];                    
    float cgpa;  
    int age;
    char course[100];
    float attendance;       
    
    int topperid=0;
    char topper[100]="";
    float maxcgpa=0;

    if (fptr==NULL){
        printf("no record found !");
        return;
    }

    while (fscanf(fptr,"%d %s %d %f %s %f",&fid,name,&age,&cgpa,course,&attendance)==6){
        if (cgpa>maxcgpa){
            maxcgpa=cgpa;
            topperid=fid;
            strcpy(topper,name);
        }
    }

    if (maxcgpa==0){
        printf("No topper found :(");
    }else {
        printf("Topper found !\n");
        printf("Student id : %d\n",topperid);
        printf("Student name : %s\n",topper);
        printf("Student cgpa : %f\n",maxcgpa);
    }
    fclose(fptr);
}

void totalstudents(void){
    FILE *fptr;
    fptr=fopen("undeletedinfo.txt","r");

    int fid;
    char name[100];                    
    float cgpa;  
    int age;
    char course[100];
    float attendance;

    int count=0;
    while(fscanf(fptr,"%d %s %d %f %s %f",&fid,name,&age,&cgpa,course,&attendance)==6){
        if (fid!=0){
            count++;
        }else{
            break;
        }
    }
    printf("total number of students are : %d\n",count);
}