#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two integers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
