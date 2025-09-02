//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.//
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;

    printf("Enter principal, rate, and time: ");

    scanf("%f %f %f", &principal, &rate, &time);

    float simple_interest = (principal * rate * time) / 100;

    float compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest=%.0f\n", simple_interest);
    
    printf("Compound Interest=%.2f\n", compound_interest);

    return 0;
}

