Here's the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void compare(const char* A, const char* B) {
    if (!strcmp(A, B))
        printf("'%s' and '%s' are lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not lexically equal.\n", A, B);

    char A_lower[100], B_lower[100];
    strcpy(A_lower, A);
    strcpy(B_lower, B);
    toLower(A_lower);
    toLower(B_lower);

    if (!strcmp(A_lower, B_lower))
        printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B);

    int result = strcmp(A, B);
    if (result < 0)
        printf("'%s' is lexically before '%s'.\n", A, B);
    else if (result > 0)
        printf("'%s' is lexically after '%s'.\n", A, B);

    result = strcmp(A_lower, B_lower);
    if (result >= 0)
        printf("'%s' is not lexically before '%s'.\n", A, B);
    if (result <= 0)
        printf("'%s' is not lexically after '%s'.\n", A, B);

    printf("The lexical relationship is: %d\n", result);
    printf("The case-insensitive lexical relationship is: %d\n", strcmp(A_lower, B_lower));
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

The `toLower` function converts a string to lowercase using `tolower`. The `compare` function compares two strings and prints the results of various comparisons. Note that in C, string comparisons are done using `strcmp`, which is case-sensitive, and for case-insensitive comparison, we first convert both strings to lower case and then compare them.
