 Sure, let's convert the given JavaScript code to C and demonstrate various string comparisons. In C, we can use the `strcmp` function for comparing strings, the `stricmp` or `_stricmp` function for case-insensitive comparison, and arithmetic operators for numeric string comparisons.

Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h> // For strcmp and stricmp
#include <ctype.h>  // For tolower

int main() {
    printf("%d\n", strcmp("abcd", "abcd") == 0); // true
    printf("%d\n", strcmp("abcd", "abcd") == 0); // true
    printf("%d\n", strcmp("123", "123") == 0); // true (numeric strings are equal)
    printf("%d\n", strcmp("123", "123") == 0); // true (numeric strings are equal)
    printf("%d\n", strcmp("ABCD", "abcd") != 0); // true
    printf("%d\n", strcmp("ABCD", "abcd") != 0); // true
    printf("%d\n", strcmp("123", "123") == 0); // false (numeric strings are not equal)
    printf("%d\n", strcmp("123", "123") != 0); // true
    printf("%d\n", strcmp("abcd", "dcba") < 0); // true
    printf("%d\n", strcmp("abcd", "dcba") > 0); // false
    printf("%d\n", stricmp("ABCD", "abcd") == 0); // true (case insensitive)

    return 0;
}
```

### Explanation:
1. **Comparing two strings for exact equality**:
   - `strcmp("abcd", "abcd") == 0` returns `true` (1).
2. **Comparing two strings for inequality**:
   - `strcmp("ABCD", "abcd") != 0` returns `true` (1).
3. **Comparing two strings to see if one is lexically ordered before the other**:
   - `strcmp("abcd", "dcba") < 0` returns `true` (1).
4. **Comparing two strings to see if one is lexically ordered after the other**:
   - `strcmp("abcd", "dcba") > 0` returns `false` (0).
5. **Case insensitive comparison**:
   - `stricmp("ABCD", "abcd") == 0` returns `true` (1).
6. **Numeric string comparisons**:
   - `strcmp("123", "123") == 0` returns `true` (1) for numeric strings, which are treated as equal despite being lexically ordered differently.

### Additional Notes:
- In C, the `strcmp` function performs a lexicographical comparison and returns an integer less than, equal to, or greater than zero if the first string is found, respectively, to be less than, to match, or be greater than the second string.
- The `stricmp` (or `_stricmp` on Windows) function performs a case-insensitive comparison using ASCII values.
- For numeric strings, direct comparison operators (`==`, `!=`) will treat them as equal if their numerical values are the same, regardless of lexical order.
