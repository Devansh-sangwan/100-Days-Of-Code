//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() 
{
    enum MenuChoice choice;
    printf("Select an operation:\n");
    printf("0: Add\n");
    printf("1: Subtract\n");
    printf("2: Multiply\n");
    printf("Enter your choice: ");
    int input;
    scanf("%d", &input);
    choice = (enum MenuChoice)input;
    int num1, num2 ;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int result;

    switch(choice) 
    {
        case ADD:
            result = num1 + num2;
            break;
        case SUBTRACT:
            result = num1 - num2;
            break;
        case MULTIPLY:
            result = num1 * num2;
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Result: %d\n", result);

    return 0;
}
