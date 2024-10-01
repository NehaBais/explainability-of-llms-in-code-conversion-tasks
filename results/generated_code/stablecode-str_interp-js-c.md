In C, we don't have direct string interpolation like in JavaScript. 

However, you can achieve similar results using `sprintf()` function or by using format specifiers with `printf()`.

Here's an example of how to convert your JavaScript code to C:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char original[100] = "Mary had a X lamb";
    char little[] = "little";

    // Use strstr() to find the position of 'X' in the string
    char *ptr = strstr(original, "X");
    if (ptr != NULL) {
        // Replace 'X' with 'little' using strncpy() and strcat()
        int len = ptr - original;
        strncpy(ptr, little, strlen(little)));
        ptr += len + 1; // Account for the replaced characters
    }

    printf("Modified string: %s\n", original);

    return 0;
}
```
This code will replace "X" with "little" in the given string and print the modified string.
