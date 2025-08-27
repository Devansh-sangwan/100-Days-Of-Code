
//Q4:  Write a program to calculate the area and circumference of a circle given its radius.//
#include <stdio.h>

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    int area = (3.14 * radius * radius);
    int circumference = (2 * 3.14 * radius);

    printf("Area=%d\n", area);
    printf("Circumference=%d\n", circumference);

    return 0;
}