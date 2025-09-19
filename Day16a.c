//Q31: Write a program to take a number as input and print its equivalent binary representation.//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    long long binary = 0, place = 1;

    while (n > 0) {
        int rem = n % 2;
        binary = rem * place + binary; 
        n /= 2;
        place *= 10; 
    }

    printf("%lld", binary);
    return 0;
}
