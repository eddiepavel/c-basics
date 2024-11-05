#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "Hello, world!\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, 100, file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}