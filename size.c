#include <stdio.h>

int main() {
    printf("The size of a char is %lu bytes.\n", sizeof(char));
    printf("The size of an int is %lu bytes.\n", sizeof(int));
    printf("The size of a long int is %lu bytes.\n", sizeof(long int));
    printf("The size of a long long int is %lu bytes.\n", sizeof(long long int));
    printf("The size of a float is %lu bytes.\n", sizeof(float));
    printf("The size of a double is %lu bytes.\n", sizeof(double));
    printf("The size of a long double is %lu bytes.\n", sizeof(long double));
    char temp[10];
    printf("The size of the temp array is %lu bytes.\n", sizeof(temp));
    return 0;
}