//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);  

    int len = strlen(str);

    
    printf("%c.", toupper(str[0]));

    
    for(int i = 0; i < len; i++) {
        if(str[i] == ' ' && str[i+1] != '\0') {
            
            int j = i + 1;
            int spaceFound = 0;
            while(j < len) {
                if(str[j] == ' ') spaceFound = 1;
                j++;
            }
            if(spaceFound)
                printf("%c.", toupper(str[i+1]));
            else {
            
                printf(" %s", &str[i+1]);
                break;
            }
        }
    }

    return 0;
}

