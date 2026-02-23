// create data for 5 employess with members as employe name and employe salary then find the employe with the highest salary by compairing individual member of the structure
// create a function that accepts

#include<stdio.h>

struct student
{
    char name[50];
    int sap_id;
    float marks;
    char subjects[50];
};
void main()
{
    struct student s1;

    printf("Enter name:");
    scanf("%s", &s1.name);

    printf("Enter Sap_id:");
    scanf("%d", &s1.sap_id);

    printf("Enter marks:");
    scanf("%f", &s1.marks);

    printf("Enter subject 1:");
    scanf("%s", &s1.subjects);

    printf("enter subject 2:");
    scanf("%s", &s1.subjects);


    printf("\nName: %s", s1.name);
    printf("\nSap_id: %d", s1.sap_id);
    printf("\nMarks: %f", s1.marks);
    printf("\nSubject 1: %s", s1.subjects);
    printf("\nSubject 2: %s", s1.subjects);

    
}
