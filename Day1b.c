// Q2: Program to input two numbers and display their sum, difference, product, and quotient //

#include <stdio.h>

int main() 
{
    int a, b;
    int sum, diff, product, quotient;

    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b; 

    
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
