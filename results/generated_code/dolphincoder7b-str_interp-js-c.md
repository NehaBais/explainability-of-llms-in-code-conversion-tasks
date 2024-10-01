Sure, here's how you can convert the JavaScript code to C using string interpolation:
```c
#include <stdio.h>
int main() {
    char original[] = "Mary had a X lamb";
    char little[] = "little";
    char replaced[256];

    sprintf(replaced, "%s", original);  //does not change the original string
    printf("Original: %s\nReplaced: %s\n", original, replaced);
    return 0;
}
```
In this C code, we use `sprintf()` to copy the contents of the `original` array into the `replaced` array. The `%s` format specifier is used to convert the `original` array into a string and place it at the beginning of the `replaced` array. Finally, we print the original and replaced strings using `printf()`.
Note: Since C doesn't have direct support for string interpolation like JavaScript, we use the `sprintf()` function to achieve the same result.
