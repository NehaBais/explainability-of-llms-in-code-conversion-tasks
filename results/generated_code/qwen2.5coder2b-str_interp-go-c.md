To convert the given Go code to C, you can use a similar method of string interpolation. Here's how the equivalent C code would look:

```c
#include <stdio.h>

int main() {
    char str[] = "Mary had a %s lamb";
    char txt[] = "little";
    snprintf(out, sizeof(out), str, txt);
    printf("%s", out);
    return 0;
}
```

In this code, `snprintf` is used to format and print the string. The first argument to `snprintf` is a buffer where the output will be stored. The second argument specifies the size of the buffer. The third argument is the format string, and the fourth arguments are the values that will replace the placeholders in the format string.

Note that C's `sprintf` function does not perform variable interpolation; it only replaces specified placeholders with the provided values. Therefore, you need to manually replace these placeholders in the format string with the desired values.

If your actual requirement is to interpolate strings based on defined variables, you would typically use a similar approach in C as well. Here's an example:

#include <stdio.h>
#include <stdlib.h>

void interp_string(char *output, const char *format, ...) {
    va_list args;
    va_start(args, format);
    vsnprintf(output, sizeof(output), format, args);
    va_end(args);
}

int main() {
    char output[100];
    char txt[] = "little";
    interp_string(output, "Mary had a %s lamb", txt);
    printf("%s\n", output);
    return 0;
}

In this code, the `interp_string` function is defined to handle variable string interpolation. The format string and variable arguments are passed as parameters to this function. The `vsnprintf` function is used to format and print the resulting string into the `output` buffer.
