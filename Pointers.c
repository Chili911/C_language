#include <stdio.h>

int main() {
    /*
    for (int i = 1; i <= 100; i++) {
        // If 'i' is even, skip this iteration
        if (i % 2 == 0) { // num is odd
            continue;
        }
        
        printf("%d\n ", i);
    }
    */

    int num, reverse = 0, remainder;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reverse = reverse * 10 + remainder; // Add it to the reversed number
        num /= 10;                       // Remove the last digit from the original number
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}
