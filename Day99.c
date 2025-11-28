//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    
    s = (struct Student*)malloc(sizeof(struct Student));

    
    scanf("%s", s->name);
    scanf("%d", &s->roll);
    scanf("%f", &s->marks);

    
    printf("Name: %s | Roll: %d | Marks: %.0f",
           s->name, s->roll, s->marks);

    
    free(s);

    return 0;
}
