#include <stdio.h>

int main() {
    char op;
    int num1, num2, result;

    // 1. Get the first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // 2. Get the operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // The space before %c is important to prevent skipping

    // 3. Get the second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // 4. Calculate and show the result
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;

        case '/':
            // Simple check to make sure we don't divide by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
