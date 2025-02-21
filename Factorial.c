#include <stdio.h>

int main() {
    int num;
   int product = 1; // Variable to hold the product (factorial result)

    // Input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using product
        for (int i = 1; i <= num; i++) {
            product *= i; // Multiply each number to get the product
        }
        // Output the result
        printf("The product (factorial) of %d is %llu\n", num, product);
    }

    return 0;
}
