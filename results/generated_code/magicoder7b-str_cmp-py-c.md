 Below is a simple C implementation of the Python code you provided. Note that C does not have built-in type checking like Python, therefore the `type` function was removed from the comparison function.

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(char* a, char* b) {
    printf("\"%s\" is of type %s and \"%s\" is of type %s\n", a, __FILE__, b, __LINE__);

    if (strcmp(a, b) < 0)      printf("%s is strictly less than %s\n", a, b);
    if (strcmp(a, b) <= 0)     printf("%s is less than or equal to %s\n", a, b);
    if (strcmp(a, b) > 0)      printf("%s is strictly greater than %s\n", a, b);
    if (strcmp(a, b) >= 0)     printf("%s is greater than or equal to %s\n", a, b);
    if (!strcmp(a, b))         printf("%s is equal to %s\n", a, b);
    if (strcmp(a, b))          printf("%s is not equal to %s\n", a, b);

    // Case sensitive comparison
    if (strcmp(a, b) == 0)     printf("\"%s\" has object identity with \"%s\"\n", a, b);

    // Case insensitive comparison (works only for ASCII strings)
    char *a_lower = strdup(a), *b_lower = strdup(b);
    for (char* ptr = a_lower; *ptr != '\0'; ++ptr) {
        *ptr = tolower(*ptr);
    }
    for (char* ptr = b_lower; *ptr != '\0'; ++ptr) {
        *ptr = tolower(*ptr);
    }
    if (!strcmp(a_lower, b_lower))  printf("\"%s\" has negated object identity with \"%s\"\n", a, b);
    free(a_lower);
    free(b_lower);
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare('2', '1'); // Numeric string comparison
    return 0;
}
```
This C code performs lexical comparisons on strings and numbers using the `strcmp` function for strings, which compares the strings lexicographically. For numeric strings, `strcmp` will work fine because it treats the digits as their ASCII values, and thus works in a "numeric" way. The case sensitive comparison is performed by comparing the pointer addresses of two identical strings (which are not equal), while the case insensitive one checks if lowercased versions of both strings are equal, which may fail for non-ASCII characters. Note that this code uses `strdup` to create a copy of string since C doesn't allow function parameters to be modified.
