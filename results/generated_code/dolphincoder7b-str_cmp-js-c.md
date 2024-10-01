The following is the equivalent C code for the given JavaScript code. Note that in C, we cannot directly compare different types of values (in this case string and integer). We need to convert one of them to a common type before comparison.
```c
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    printf("%d\n", "abcd" ==  "abcd");   // true
    printf("%d\n", "abcd" !=  "abcd");   // false
    printf("%d\n", strcmp("abcd", "abcd") == 0);    // true
    printf("%d\n", strcmp("abcd", "dcba") < 0);     // true
    return 0;
}
```
In this C code, the `strcmp()` function is used to compare two strings for lexical comparison. The output of each expression is displayed using the `printf` function. The program demonstrates how to achieve case-sensitive and case-insensitive comparisons within the language.
