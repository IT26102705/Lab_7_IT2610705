#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers
int compare(int a, int b)
{
    if (a > b)
    {
        return 1;
    }
    else if (b > a)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

// Function to compare absolute values
int compare_absolute(int a, int b)
{
    a = abs(a);
    b = abs(b);

    if (a > b)
    {
        return 1;
    }
    else if (b > a)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

// Maximum function using a function pointer
int max(int a, int b, int (*compare)(int, int))
{
    if (compare(a, b) >= 0)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a,b;

    //Input values for a and b 
    printf("Enter value for a :\n");
    scanf("%d",&a);

    printf("Enter value for b :\n");
    scanf("%d",&b);

    // Using normal comparison
    printf("Simple Comparison: max = %d\n",max(a, b, compare));

    // Using absolute value comparison
    printf("Absolute Comparison: max = %d\n",max(a, b, compare_absolute));

    return 0;
}
