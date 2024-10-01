Here's the equivalent code in C:

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(char *A, char *B) {
    int result = strcmp(A, B);

    if (result == 0)
        printf("'%s' and '%s' are lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not lexically equal.\n", A, B);

    if (strcasecmp(A, B) == 0)
        printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B);

    if (result < 0)
        printf("'%s' is lexically before '%s'.\n", A, B);
    else if (result > 0)
        printf("'%s' is lexically after '%s'.\n", A, B);

    int resultIgnoreCase = strcasecmp(A, B);
    if (resultIgnoreCase < 0)
        printf("'%s' is not lexically before '%s'.\n", A, B);
    if (resultIgnoreCase > 0)
        printf("'%s' is not lexically after '%s'.\n", A, B);

    printf("The lexical relationship is: %d\n", result);
    printf("The case-insensitive lexical relationship is: %d\n\n", resultIgnoreCase);
}

int main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
    return 0;
}
```

In C, string comparison is performed using the `strcmp()` function which compares the strings lexicographically. The `strcasecmp()` function performs a case-insensitive comparison by converting all characters to lowercase before comparison. For numeric strings, they are treated as text and not numerically, because there's no direct equivalent in C.
