#include <stdio.h>

int main() {
    int a = 5;
    int *b = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a based on a is %p\n", &a);
    printf("The value of a based on *b is %d\n", *b);
    printf("The address of a based on b is %p\n", b);
    printf("The address of b is %p\n", &b);
    return 0;
}