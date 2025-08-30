// Q17: Write a program to find the roots of a quadratic equation and categorize them as real and distinct, real and equal, or complex.//
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;
    printf("enter the value of a,b,c:");
    scanf("%f%f%f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d >= 0 )
    {
        printf("the roots are real and distinct\n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("the roots are %f and %f", root1, root2);
    }
    else if (d == 0 )
            
        {
            printf("the roots are real and equal\n");
            root1 = root2 = -b / (2 * a);
            printf("the roots are %f and %f", root1, root2);
        }
    else
    {
        printf("the root are complex\n");
    }
    return 0;
}