//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char ch;

    if(in == NULL) {
        printf("input.txt not found!\n");
        return 0;
    }

    while((ch = fgetc(in)) != EOF) {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Done.\n");
    return 0;
}

