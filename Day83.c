//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

enum month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    int month_num;
    printf("Enter the month number :");
    scanf(" %d", &month_num);
    if (month_num < 1 || month_num > 12) 
    {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
        return 1;  
    }
        switch(month_num)
        {
            case JANUARY: 
            printf("JANUARY = 31 days\n"); break;
            case FEBRUARY: 
            printf("FEBRUARY = 28 or 29 days\n"); break;
            case MARCH: 
            printf("MARCH = 31 days\n"); break;
            case APRIL: 
            printf("APRIL = 30 days\n"); break;
            case MAY: 
            printf("MAY = 31 days\n"); break;
            case JUNE: 
            printf("JUNE = 30 days\n"); break;
            case JULY: 
            printf("JULY = 31 days\n"); break;
            case AUGUST: 
            printf("AUGUST = 31 days\n"); break;
            case SEPTEMBER: 
            printf("SEPTEMBER = 30 days\n"); break;
            case OCTOBER: 
            printf("OCTOBER = 31 days\n"); break;
            case NOVEMBER: 
            printf("NOVEMBER = 30 days\n"); break;
            case DECEMBER: 
            printf("DECEMBER = 31 days\n"); break;
            default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
        }
    return 0;   
}