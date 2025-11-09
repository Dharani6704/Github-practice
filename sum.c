#include <stdio.h>

int main() {
    int a, b, sum;

    // Prompt the user to enter two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a); // Read the first number and store it in 'a'

    printf("Enter the second number (b): ");
    scanf("%d", &b); // Read the second number and store it in 'b'

    // Calculate the sum
    sum = a + b;

    // Display the result
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0; // Indicate successful program execution
}
