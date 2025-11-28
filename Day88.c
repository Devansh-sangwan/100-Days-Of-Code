//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum TrafficLight {
    RED = 1,
    YELLOW ,
    GREEN 
};

int main() 
{
    for (int i = RED; i <= GREEN; i++) 
    {
        switch(i) 
        {
            case RED:
                printf("RED = %d\n", i);
                break;
            case YELLOW:
                printf("YELLOW = %d\n", i);
                break;
            case GREEN:
                printf("GREEN = %d\n", i);
                break;
            default:
                break;
        }
    }

    return 0;
}