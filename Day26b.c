//Q52: Write a program to print the following pattern:

/*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i, j;

    // Group 1: 1 star
    for(i = 1; i <= 1; i++) {
        for(j = 1; j <= 1; j++) {
            printf("*\n");
        }
    }
    printf("\n");

    // Group 2: 3 stars
    for(i = 1; i <= 1; i++) {
        for(j = 1; j <= 3; j++) {
            printf("*\n");
        }
    }
    printf("\n");

    // Group 3: 5 stars
    for(i = 1; i <= 1; i++) {
        for(j = 1; j <= 5; j++) {
            printf("*\n");
        }
    }
    printf("\n");

    // Group 4: 3 stars
    for(i = 1; i <= 1; i++) {
        for(j = 1; j <= 3; j++) {
            printf("*\n");
        }
    }
    printf("\n");

    // Group 5: 1 star
    for(i = 1; i <= 1; i++) {
        for(j = 1; j <= 1; j++) {
            printf("*\n");
        }
    }

    return 0;
}
