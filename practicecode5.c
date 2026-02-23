#include <stdio.h>

int add(int x, int y) {
    return x + y;
}
void main()
{
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("Sum: %d\n", sum);
}