This code compares two strings in Rust and demonstrates several string comparisons, including exact equality, inequality, lexical ordering, and case-insensitive comparison.

Here's the converted code in C:
```c
#include <string.h>

int main() {
    char *a = "abc";
    char b[] = "Bac";

    // Strings are coerced to &str when borrowed and needed
    if (strcmp(a, b) == 0) { printf("The strings are equal\n"); }
    if (strcmp(a, b) != 0) { printf("The strings are not equal\n"); }
    if (strcmp(a, b) > 0) { printf("The first string is lexically after the second\n"); }
    if (strcmp(a, b) < 0) { printf("The first string is lexically before the second\n"); }
    if (strcmp(a, b) >= 0) { printf("The first string is not lexically before the second\n"); }
    if (strcmp(a, b) <= 0) { printf("The first string is not lexically after the second\n"); }

    // case-insensitives:

    // equality
    if (strcasecmp(a, b) == 0) { printf("Both strings are equal when ignoring case\n"); }

    // everything else, create owned Strings, then compare as above
    char a2[3] = { '\0' };
    char b2[4] = { '\0' };

    strcpy(a2, a);
    strcpy(b2, b);

    // repeat checks
}
```
Note that in C, string comparisons are done using the `strcmp()` function, which compares two strings lexically. In Rust, the `==` operator is used for exact equality, while `<`, `<=`, `>`, and `>=` are used for comparison of strings based on their lexical ordering. Additionally, in C, string comparisons are case-sensitive by default, but there are functions like `strcasecmp()` that can be used to perform case-insensitive comparison.
