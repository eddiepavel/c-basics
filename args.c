#include <stdio.h>

int main (int argc, char *argv[]) {
    if (argc == 1) {
        printf("You forgot to type your name.\n");
        return 1;
    }
    if (argc > 2) {
        printf("You typed too many names.\n");
        return 1;
    }
    printf("Hello, %s!\n", argv[1]);
    return 0;
}