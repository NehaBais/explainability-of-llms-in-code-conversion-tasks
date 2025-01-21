The JavaScript language does not have a built-in string comparison function similar to that of Python. However, we can write our own function for comparison using JavaScript's `localeCompare` method.

Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int compareStrings(char *str1, char *str2) {
    return strcmp(str1, str2);
}

int main() {
    printf("%d\n", compareStrings("abcd", "abcd")); // true
    printf("%d\n", compareStrings("abcd", "abcd")); // true
    printf("%d\n", compareStrings("123", "123")); // true
    printf("%d\n", compareStrings("123", "123")); // false
    printf("%d\n", compareStrings("ABCD", "abcd")); // false
    printf("%d\n", compareStrings("ABCD", "abcd")); // true (case insensitive)
    
    return 0;
}
```

In this C program, we have a function `compareStrings` that takes two strings and returns their comparison result. The `strcmp` function is used from the standard C library for string comparison.

You can compile and run this code using your preferred C compiler.
