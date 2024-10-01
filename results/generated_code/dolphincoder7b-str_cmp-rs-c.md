Rust does not have direct support for case-insensitive string comparison. You can use the `ascii` crate in Rust to achieve this feature. The `AsciiExt::eq_ignore_ascii_case()` method is used to compare two strings without considering their case, while `AsciiExt::to_ascii_uppercase()` and `AsciiExt::to_ascii_lowercase()` are used for transforming a string into uppercase or lowercase respectively.
To compare strings lexically, Rust provides the `<`, `>`, `<=`, and `>=` operators, which can be used to compare two strings based on their Unicode code points. The comparison is case sensitive by default, but you can use the `AsciiExt::is_case_insensitive_subsequence()` method to perform a case-insensitive comparison of strings.
```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[] = "abc";
    char b[] = "Bac";

    // equal
    if (strcmp(a, b) == 0) printf("The strings are equal\n");

    // not equal
    if (strcmp(a, b) != 0) printf("The strings are not equal\n");

    // lexical comparison
    if (strcmp(a, b) < 0) printf("The first string is lexically before the second\n");
    if (strcmp(a, b) > 0) printf("The first string is lexically after the second\n");

    char a2[4];
    char b2[4];

    // case-insensitive comparison
    strcpy(a2, "ABC");
    strcpy(b2, "Bac");

    // equal ignoring case
    if (strcasecmp(a2, b2) == 0) printf("Both strings are equal when ignoring case\n");

    return 0;
}
```
