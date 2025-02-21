/*Calculate the Addition and
Subtraction of Two Numbers
Entered from the Keyboard
Using the Function.
*/

/*
#include <stdio.h>

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to subtract two numbers
int sub(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int num1, num2, sum, difference; // Changed sub to difference

    printf("Enter num 1: ");
    scanf("%d", &num1);

    printf("Enter num 2: ");
    scanf("%d", &num2);

    // Calculate
    sum = add(num1, num2);
    difference = sub(num1, num2); // Call sub function correctly

    // Print results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference); // Print the difference

    return 0;
}
*/

/*Calculate the Addition and
Subtraction of Two Numbers
Entered from the Keyboard
Using the Function.
*/

# include <stdio.h>

int addition ( int num1 , int num2)
{
    return num1 + num2;
}

int subtraction ( int num1 , int num2)
{
    return num1 - num2;
}

int main ()
{
    int add , sub , num1 , num2;

    printf ("Enter a number 1: ");
    scanf ("%d" , &num1);

    printf ("Enter a number 2: ");
    scanf ("%d" , &num2);

add = addition ( num1 , num2);
sub = subtraction ( num1 , num2);

printf ("The sum is %d : " , add);
printf("The difference is :%d " , sub);



    return 0;
}