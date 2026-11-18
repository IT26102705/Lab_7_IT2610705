#include <stdio.h>
#include <stdlib.h>

// Function declaration
void simplify_fraction(int *numerator, int *denominator);

int main(void)
{
    int numerator;
    int denominator;

    printf("Enter the value of numerator:\n");
    scanf("%d", &numerator);

    printf("Enter the value of denominator:\n");
    scanf("%d", &denominator);

    if (denominator == 0)
    {
        printf("Denominator cannot be zero.\n");
        return 1;
    }

    // Function call using pointers
    simplify_fraction(&numerator, &denominator);

    printf("Simplified fraction is: %d/%d\n",
           numerator, denominator);

    return 0;
}

// Function 
void simplify_fraction(int *numerator, int *denominator)
{
    int a, b, gcd, i;

    a = abs(*numerator);
    b = abs(*denominator);

    gcd = 1;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    // Simplify the fraction
    *numerator = *numerator / gcd;
    *denominator = *denominator / gcd;

    // Make denominator positive
    if (*denominator < 0)
    {
        *numerator = -*numerator;
        *denominator = -*denominator;
    }
}
