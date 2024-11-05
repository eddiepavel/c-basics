#include <stdio.h>

int call_by_value(int a) {
    a = a + 1;
    return a;
}

void call_by_reference(int *a) {
    *a = 1;
}

int main() {
    int a = 5;
    int b = call_by_value(a);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    call_by_reference(&a);
    printf("The value of a is %d\n", a);
    return 0;
}