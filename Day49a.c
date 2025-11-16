//Q97: Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    gets(str);   // 


    printf("%c.", toupper(str[0]));

    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != '\0') {
            printf("%c.", toupper(str[i+1]));
        }
    }

    return 0;
}
