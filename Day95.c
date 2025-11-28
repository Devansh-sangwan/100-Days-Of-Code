//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopper(struct Student a[], int n) {
    int top = 0;
    for(int i = 1; i < n; i++) {
        if(a[i].marks > a[top].marks)
            top = i;
    }
    return a[top];
}

int main() {
    struct Student s[3];

    for(int i = 0; i < 3; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }


    struct Student t = getTopper(s, 3);

    
    printf("Top Student: %s | Roll: %d | Marks: %.0f",
           t.name, t.roll, t.marks);

    return 0;
}
