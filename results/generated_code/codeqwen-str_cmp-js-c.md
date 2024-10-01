In C, you can use the `strcmp()` function to compare strings. The return value of this function will be:

- less than 0 if the string pointed to by str1 is lexically ordered before the string pointed to by str2.
- greater than 0 if the string pointed to by str1 is lexically ordered after the string pointed to by str2.
- equal to 0 if the strings are lexicaly identical.

Here's how you would convert your JavaScript code to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    printf(
        "%d\n",                          // true
        strcmp("abcd", "abcd") == 0,       // true
        strcmp("123", "123") == 0,         // true
        strcmp("ABCD", "abcd"),             // true (case insensitive)
        strcmp("abcd", "dcba") < 0,        // true
        strcmp("abcd", "dcba") > 0          // false
    );

    return 0;
}
```

In C, the comparison operators (`==`, `!=`, `<`, `>`) are used to compare values of different types and produce boolean results. However, when you use these operators on strings, they will not compare lexicographically as in JavaScript. Instead, they perform a binary comparison of memory addresses, which is rarely what you want for string comparisons.

That's why we use `strcmp()`. It returns 0 if the two strings are identical, and negative or positive otherwise depending on the order of the strings.
