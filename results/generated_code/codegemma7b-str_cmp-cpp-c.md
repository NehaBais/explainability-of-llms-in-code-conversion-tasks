```c
#include <string.h>
#include <stdio.h>

int main() {
    // Case-sensitive comparisons.
    char a[] = "hello";
    char b[] = "world";

    if (strcmp(a, b) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    if (strcmp(a, b) != 0) {
        printf("Strings are not equal.\n");
    } else {
        printf("Strings are equal.\n");
    }

    if (strncmp(a, b, 3) < 0) {
        printf("a is lexically ordered before b.\n");
    } else {
        printf("b is lexically ordered before a.\n");
    }

    if (strncmp(a, b, 3) > 0) {
        printf("b is lexically ordered before a.\n");
    } else {
        printf("a is lexically ordered before b.\n");
    }

    // Case-insensitive comparisons.
    char c[] = "HELLO";
    char d[] = "hello";

    if (strcasecmp(c, d) == 0) {
        printf("Strings are equal (case insensitive).\n");
    } else {
        printf("Strings are not equal (case insensitive).\n");
    }

    // Numeric comparisons.
    char e[] = "10";
    char f[] = "5";

    if (strcmp(e, f) > 0) {
        printf("e is numerically greater than f.\n");
    } else {
        printf("f is numerically greater than e.\n");
    }

    return 0;
}
```


