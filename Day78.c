//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


#include <stdio.h>

int main() {
    FILE *fp = fopen("source.txt", "r");
    char ch;
    int vowels = 0, consonants = 0;

    if(fp == NULL) {
        printf("text.txt not found!\n");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;  // convert to lowercase

        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
