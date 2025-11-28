//Q143: Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);  

    struct Student s[n];

    // Input
    for(int i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }

    
    int topperIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    
    printf("Topper: %s (Marks: %.0f)", 
            s[topperIndex].name, 
            s[topperIndex].marks);

    return 0;
}
