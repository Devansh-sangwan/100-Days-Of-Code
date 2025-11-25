//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    char ch;

    int characters = 0, words = 0, lines = 1;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ' || ch == '\n')
            words++;

        if (ch == '\n')
            lines++;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}
