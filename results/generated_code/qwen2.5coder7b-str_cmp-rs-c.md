In C language, we can use the `strcmp` function for comparing strings. Here is how you can convert this Rust code to C:
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[] = "abc";
    char b[] = "Bac";

    // Strings are compared using strcmp which compares lexicographically

    if (strcmp(a, b) == 0)
        printf("The strings are equal\n");

    if (strcmp(a, b) != 0)
        printf("The strings are not equal\n");

    // For case-insensitive comparison, convert both strings to lower or upper case
    // before comparing
    int i;
    for (i = 0; a[i] != '\0'; ++i)
        a[i] = tolower(a[i]);

    for (i = 0; b[i] != '\0'; ++i)
        b[i] = tolower(b[i]);

    if (strcmp(a, b) == 0)
        printf("Both strings are equal when ignoring case\n");

    return 0;
}
```
In this code:
- The `strcmp` function is used for comparing two strings. It returns an integer less than, equal to, or greater than zero if the first string is found, respectively, to be less than, to match, or be greater than the second.
- To perform case-insensitive comparison in C, we convert both the strings to lower (or upper) case using `tolower` function before comparing them with `strcmp`.
