//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. //
#include <stdio.h>
int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Number is Positive");
    else if (n < 0)
        printf("Number is Negative");
    else
        printf("Number is Zero");

    return 0;
}
