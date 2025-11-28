//Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;   

    
    scanf("%s", ptr->name);
    scanf("%d", &ptr->roll);
    scanf("%f", &ptr->marks);

    
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.0f",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}

