//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};


void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;

    // Input
    scanf("%s", s1.name);
    scanf("%d", &s1.roll);
    scanf("%f", &s1.marks);

    
    printStudent(s1);

    return 0;
}
