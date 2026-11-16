#include <stdio.h>

void calculate(int *x, int *y, int *z);


int main() {
    int x, y, z;

    // input values
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    printf("Enter value for z: ");
    scanf("%d", &z);

    // Call the function 
    calculate(&x, &y, &z);

    // Print 
    printf("\nOutput:\n");
    printf("Modified x (sum): %d\n", x);
    printf("Modified y (difference): %d\n", y);
    printf("Modified z (product): %d\n", z);

    return 0;
}
// Function to modify the values using pointers
void calculate(int *x, int *y, int *z) {
    // Store original values in temporary variables so calculations 
    // use the initial inputs rather than already-modified values
    int o_x = *x;
    int o_y = *y;
    int o_z = *z;

    *x = o_x + o_y + o_z; // Sum of the three variables
    *y = o_x - o_y;          // Difference between the first two variables
    *z = o_x * o_z;          // Product of the first and third variables
}

