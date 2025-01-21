Below is a C version of the JavaScript code. Note that the comparison logic for string equality and inequality is slightly different in C compared to JS.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "abcd";
    char str2[50] = "dcba";

    // Comparing two strings for exact equality (using strcmp)
    printf("%d\n", !strcmp(str1, str1));  // Outputs: 1
    printf("%d\n", !strcmp(str1, str2));  // Outputs: 0

    // Comparing two strings for inequality (using strcmp)
    printf("%d\n", strcmp(str1, str2) != 0);  // Outputs: 1

    // Comparing two strings to see if one is lexically ordered before than the other
    printf("%d\n", strcmp(str1, str2) < 0);  // Outputs: 0
    printf("%d\n", strcmp("abcd", "dcba") < 0);  // Outputs: 1

    // Comparing two strings to see if one is lexically ordered after than the other
    printf("%d\n", strcmp(str2, str1) > 0);  // Outputs: 1
    printf("%d\n", strcmp("dcba", "abcd") > 0);  // Outputs: 0

    // How to achieve both case sensitive comparisons and case insensitive comparisons within the language
    char upperStr[50] = "ABCD";
    char lowerStr[50] = "abcd";

    printf("%d\n", strcmp(upperStr, lowerStr) == 0);  // Outputs: 0 (case sensitive)
    printf("%d\n", !strcmp(strlwr(upperStr), strlwr(lowerStr)));  // Outputs: 1 (case insensitive)

    return 0;
}
```

Here `stricmp` function is used for case-insensitive string comparison. Also note that C doesn't support Boolean type as JavaScript does, so we are using `int` with 0 as false and any non-zero value as true.

Also, note that unlike in JavaScript, the comparison of numeric strings in C won't be treated as lexically but rather as integers. In your JavaScript example "123" == "123" is true because both sides are equal string values. In C, the same will not be true and it needs to be handled manually if required.

Lastly, note that `strlwr` function is used for converting a string into lowercase. This function is available in some compilers, but may not be available in others, you can achieve similar functionality by writing your own function to convert each character to its lower case equivalent.
