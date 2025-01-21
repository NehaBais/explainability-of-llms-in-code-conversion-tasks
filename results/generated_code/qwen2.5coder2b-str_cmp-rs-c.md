To convert the given Rust code to C, you would need to use pointers and strings. Here's how you might do it:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char *a = "abc";
    char *b = "Bac";

    // comparing exact equality
    if (strcmp(a, b) == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    // comparing inequality (inverse of equality)
    if (strcmp(a, b) != 0) {
        printf("The strings are not equal\n");
    } else {
        printf("The strings are equal\n");
    }

    // comparing lexically ordered before
    if (strcmp(a, b) < 0) {
        printf("The first string is lexically before the second\n");
    } else if (strcmp(a, b) == 0) {
        printf("The strings are not lexically before or equal to each other\n");
    } else {
        printf("The first string is lexically after the second\n");
    }

    // comparing lexically ordered after
    if (strcmp(a, b) > 0) {
        printf("The first string is lexically after the second\n");
    } else if (strcmp(a, b) == 0) {
        printf("The strings are not lexically after or equal to each other\n");
    } else {
        printf("The first string is lexically before the second\n");
    }

    // case-insensitives:
    char *a2 = strdup(a);
    char *b2 = strdup(b);

    // compare case insensitively
    if (strcasecmp(a2, b2) == 0) {
        printf("Both strings are equal when ignoring case\n");
    } else {
        printf("The strings are not equal when ignoring case\n");
    }

    free(a2);
    free(b2);

    return 0;
}
```
Note: This C code assumes you have included necessary string manipulation functions. You may need to use an actual library (like `string.h` in this case) or implement these functionalities manually.
This C program demonstrates basic string comparison operations similar to the Rust version provided. It includes both exact equality and inequality comparisons, as well as lexical ordering comparisons. The code also shows how to handle case insensitivity by converting strings to uppercase or lowercase before performing the comparison.
