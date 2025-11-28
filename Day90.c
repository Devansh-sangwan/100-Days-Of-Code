//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() 
{
    struct Person person = {"John Doe", MALE};

    if (person.gender == MALE) 
    {
        printf("Male\n");
    } 
    else if (person.gender == FEMALE) 
    {
        printf("Female\n");
    }

    return 0;
}
