#include "header.h"

int main() {
    int num1, num2;
    char operator;
    float result;

    getInput(&num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / (float)num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %d %c %d = %.2f\n", num1, operator, num2, result);
            return 0;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result: %d %c %d = %.f\n", num1, operator, num2, result);

    return 0;
}
