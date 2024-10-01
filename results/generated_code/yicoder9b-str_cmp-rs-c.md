The following C code performs the same operations as your Rust program, demonstrating various string comparisons:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    const char* a = "abc";
    char b[] = "Bac";
    
    // Strings are coerced to const char* when borrowed and needed
    if (strcmp(a, b) == 0) printf("The strings are equal\n"); // exact equality
    else if (strcmp(a, b) < 0) printf("The first string is lexically before the second\n");  // first < second
    else printf("The first string is lexically after the second\n"); // first > second

    // case-insensitives:
    if (strcasecmp(a, b) == 0) printf("Both strings are equal when ignoring case\n"); // equality ignore case
    else if (strcasecmp(a, b) < 0) printf("The first string is lexically before the second when ignoring case\n");  // first < second ignore case
    else printf("The first string is lexically after the second when ignoring case\n"); // first > second ignore case
    return 0;
}
```

In C, strings are usually represented as a sequence of characters (`char*`). The `strcmp` function can be used to compare these sequences in a way that respects lexical (dictionary) ordering. It returns an integer less than, equal to, or greater than zero if the string pointed to by `a` is found, respectively, to be less than, match, or be greater than the string pointed to by `b`.

In case-insensitive comparisons, all characters in both strings are first transformed to uppercase (or lowercase) using the `toupper` function before comparing. The functions `strcasecmp` does exactly this and can be used for case-insensitive lexical comparison of strings.
