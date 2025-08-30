// Q18: Write a program to assign grades based on a percentage input.//
#include <stdio.h>

int main()

{
    int percentage;
    printf("enter the percentage:");
    scanf("%d", &percentage);
    if (percentage >= 90)

        printf("grade A");

    else if (percentage >= 80)
        printf("grade B");

    else if (percentage >= 70)
        printf("grade C");

    else if (percentage >= 60)
        printf("grade D");

    else if (percentage >= 40)
        printf("grade E");

    else
        printf("grade F");
    return 0;
}
