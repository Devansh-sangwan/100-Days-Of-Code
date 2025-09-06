//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;   // factorial can be very large

    scanf("%d", &n);      // input number

    for(i = 1; i <= n; i++) {
        fact = fact * i;  // multiply fact by i each time
    }

    printf("%lld", fact); // print result

    return 0;
}
