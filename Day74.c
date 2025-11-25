//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


#include <stdio.h>

int main() {
    char src[50], dest[50];

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    FILE *fp1 = fopen(src, "r");
    FILE *fp2 = fopen(dest, "w");

    char ch;

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully to %s", dest);

    return 0;
}


