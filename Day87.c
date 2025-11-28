//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() 
{
    enum UserRole role ;
    printf("Select a role:\n");
    printf("0: Admin\n");
    printf("1: User\n");
    printf("2: Guest\n");
    printf("Enter your choice: ");
    int input;
    scanf("%d", &input);
    role = (enum UserRole)input;
    
    switch(role) 
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role\n");
            break;
    }

    return 0;
}