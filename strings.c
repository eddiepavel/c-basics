#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char str3[13];
    int len;

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    len = strlen(str3);
    printf("The length of str3 is %d characters.\n", len);

    char *str4 = "zone01";
    char *str5 = "zone02";
    int cmp = strcmp(str4, str5);
    int cmp2 = strncmp(str4, str5, 4);
    if (cmp == 0) {
        printf("The strings are the same.\n");
    } else if (cmp < 0) {
        printf("str4 is less than str5.\n");
    } else {
        printf("str4 is greater than str5.\n");
    }
    printf("%d\n", cmp);
}
