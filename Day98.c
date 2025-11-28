//Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for student 1
    scanf("%s", s1.name);
    scanf("%d", &s1.roll);
    scanf("%f", &s1.marks);

    // Input for student 2
    scanf("%s", s2.name);
    scanf("%d", &s2.roll);
    scanf("%f", &s2.marks);

    // Compare
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll == s2.roll &&
       s1.marks == s2.marks)
    {
        printf("Same");
    }
    else {
        printf("Different");
    }

    return 0;
}

