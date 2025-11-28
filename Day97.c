//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    
    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%f", &e.salary);

    
    fp = fopen("emp.bin", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    
    fp = fopen("emp.bin", "rb");
    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    
    printf("Name: %s | ID: %d | Salary: %.2f",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}

