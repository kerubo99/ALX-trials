#include <stdio.h>

int main() {
    // Declare variables to store user input and the result
    double num1, num2, sum;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);

    return 0; // Indicate successful program execution
}

