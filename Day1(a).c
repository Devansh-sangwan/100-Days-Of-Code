// Program to input two numbers and display their sum //

#include <stdio.h>

int main() 
{
    int a; 
    int b;
    int sum; 

    
    printf("Enter first number: ");
    scanf("%d", &a); 

    printf("Enter second number: ");
    scanf("%d", &b); 

    sum = a + b; 

    
    printf("Sum = %d\n", sum);

    return 0; 
}