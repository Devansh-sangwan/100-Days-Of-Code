#include<stdio.h>

struct employee{
    char name[50];
    float salary;
};

int main()

{
    struct employee e[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter name of employee %d:",i+1);
        scanf("%s", &e[i].name);
        printf("Enter salary of employee %d:",i+1);
        scanf("%f", &e[i].salary);
    }
    float max_salary=e[0].salary;
    char max_name=e[0].name;
    for (int i=1;i<5;i++)
    {
        if(e[i].salary>max_salary)

        {
            max_name=e[i].name;
            max_salary=e[i].salary;

             }
             

    }  
    printf("Employee with the highest salary is %s with salary %f",max_name,max_salary);
   
     return 0;
}