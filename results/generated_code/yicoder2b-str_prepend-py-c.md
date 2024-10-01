Sure, the equivalent C code for this Python program would be as follows:

```c
#include <stdio.h>

int main() {
    char s[] = "12345678";
    printf("%s0", s);
    return 0;
}
```
In the C version, you use the `printf` function to print the string along with a constant character string ("0"). The `%s` is a format specifier that tells `printf()` to interpret the next argument as a null-terminated string.
