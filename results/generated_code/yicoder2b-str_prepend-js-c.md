The equivalent C code for the given JavaScript code is:
```c
#include <stdio.h>

int main() {
    char s[100] = ", World"; // Initial string
    const char *prefix = "Hello"; 

    // Append prefix to the string
    strcpy(s + strlen(prefix), prefix);

    printf("%s\n", s);
    return 0;
}
```
In this C code, we are using `strcpy()` function to append a string to another. This function copies the source string (which is `s + strlen(prefix)`) into destination string (`s`) starting from the position where it starts copying, which is at the end of `s` itself, hence `strlen(prefix)`.
Please note that this approach will only work for strings which are less than 100 characters as the C language does not allow dynamic resizing of an array like JavaScript.
