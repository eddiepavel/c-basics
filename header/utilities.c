#include "header.h"

void getInput(int *num1, int *num2) {
    printf("Enter first integer: ");
    while (scanf("%d", num1) != 1) {
        printf("Error: Invalid input for first integer.\n");
        getchar();
        continue; // Clear the input buffer
    }
    printf("Enter second integer: ");
    while (scanf("%d", num2) != 1) {
        printf("Error: Invalid input for second integer.\n");
        getchar();
    }
}