Below is the C version of your Java code. Note that strings in C are null-terminated arrays of characters. Also, unlike Java's `equals()`, C has no built-in method for comparing strings so we need to use a loop to compare them character by character.

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(char* A, char* B) {
    if (strcmp(A, B) == 0)
        printf("'%s' and '%s' are lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not lexically equal.\n", A, B);

    if (strcasecmp(A, B) == 0)
        printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B);
    else
        printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B);

    if (strcmp(A, B) < 0)
        printf("'%s' is lexically before '%s'.\n", A, B);
    if (strcmp(A, B) > 0)
        printf("'%s' is lexically after '%s'.\n", A, B);

    if (strcmp(A, B) >= 0)
        printf("'%s' is not lexically before '%s'.\n", A, B);
    if (strcmp(A, B) <= 0)
        printf("'%s' is not lexically after '%s'.\n", A, B);

    printf("The lexical relationship is: %d\n", strcmp(A, B));
    printf("The case-insensitive lexical relationship is: %d\n", strcasecmp(A, B));
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
This program demonstrates how to compare two strings in C, both lexically and case-insensitively. It also shows how to find out if one string is lexicographically before or after another.

Please note that unlike Java, C does not distinguish between numeric strings and alphabetic strings. In other words, "5" and "5.0" are treated as two different strings in this program. If you want to treat them the same way, you would need to add additional logic for handling such cases.
