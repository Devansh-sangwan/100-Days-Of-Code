//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0;

    while(str[i] != '\0') {
        
        if(i == 0 || str[i - 1] == ' ') {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }

        i++;
    }

    printf("%s", str);

    return 0;
}
