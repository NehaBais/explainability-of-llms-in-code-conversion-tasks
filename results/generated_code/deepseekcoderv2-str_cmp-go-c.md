 To convert the provided Golang code to C, we need to handle various string comparison tasks including exact equality, inequality, lexical order comparison (both bytewise and case insensitive), and handling of numeric strings. Here's how you can achieve similar functionality in C:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower()

// Function to compare two strings case insensitively
int caseInsensitiveCompare(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (tolower(*str1) != tolower(*str2)) {
            return tolower(*str1) - tolower(*str2);
        }
        str1++;
        str2++;
    }
    // If one string is shorter, it's considered less than the other.
    return *str1 - *str2;
}

int main() {
    const char *c = "cat";
    const char *d = "dog";

    // Exact equality check
    if (strcmp(c, d) == 0) {
        printf("%s is bytewise identical to %s\n", c, d);
    } else {
        printf("%s is not equal to %s\n", c, d);
    }

    // Inequality check
    if (strcmp(c, d) != 0) {
        printf("%s is bytewise different from %s\n", c, d);
    } else {
        printf("%s and %s are equal\n", c, d);
    }

    // Lexical order comparison
    if (strcmp(c, d) > 0) {
        printf("%s is lexically bytewise greater than %s\n", c, d);
    } else if (strcmp(c, d) < 0) {
        printf("%s is lexically bytewise less than %s\n", c, d);
    } else {
        printf("%s and %s are lexicographically equal\n", c, d);
    }

    // Case insensitive comparison using custom function
    if (caseInsensitiveCompare(c, d) == 0) {
        printf("%s is bytewise identical to %s under case insensitivity\n", c, d);
    } else if (caseInsensitiveCompare(c, d) > 0) {
        printf("%s is lexically greater than %s under case insensitivity\n", c, d);
    } else {
        printf("%s is lexically less than %s under case insensitivity\n", c, d);
    }

    return 0;
}
```

### Explanation:
1. **Exact Equality and Inequality**: We use `strcmp()` to compare strings in C. If `strcmp(c, d)` returns 0, the strings are equal. Otherwise, they are not. The inequality is checked by negating the result of `strcmp()`.
2. **Lexical Order Comparison**: Using `strcmp()`, we determine if one string is lexically greater or less than the other based on their lexicographic order.
3. **Case Insensitive Comparison**: We define a custom function `caseInsensitiveCompare()` that converts each character to lowercase before comparison and then compares them. This allows for case-insensitive comparisons.
4. **Handling Numeric Strings**: In C, strings are compared lexically by default unless explicitly converted to numeric types (which is not straightforward without parsing the string as a number). The provided examples treat all strings as UTF-8 encoded text for lexical comparison.

This C code mirrors the functionality of the Golang example regarding basic string comparisons and demonstrates handling of case insensitivity, though it does not cover advanced Unicode normalization or collation table support that might be available through additional libraries like those mentioned in the original Go code's note about `golang.org/x/text`.
