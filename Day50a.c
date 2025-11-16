//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    int dd, mm, yy;
    scanf("%d/%d/%d", &dd, &mm, &yy);   // Read in dd/mm/yyyy format


    printf("%02d-", dd);

    
    switch(mm) {
        case 1:  printf("Jan-"); break;
        case 2:  printf("Feb-"); break;
        case 3:  printf("Mar-"); break;
        case 4:  printf("Apr-"); break;
        case 5:  printf("May-"); break;
        case 6:  printf("Jun-"); break;
        case 7:  printf("Jul-"); break;
        case 8:  printf("Aug-"); break;
        case 9:  printf("Sep-"); break;
        case 10: printf("Oct-"); break;
        case 11: printf("Nov-"); break;
        case 12: printf("Dec-"); break;
    }

    printf("%d", yy);

    return 0;
}
