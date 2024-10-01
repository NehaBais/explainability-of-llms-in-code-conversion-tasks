To convert this code from Python to C, you can use the following general steps:

1. Replace each Python keyword with its C equivalent, such as `print` becomes `printf`.
2. Replace each Python data type with its C equivalent, such as `str` becomes `char*`.
3. Use the appropriate C comparison operators to compare strings and other values in C, such as `==`, `<`, `>`, and so on.
4. Use the appropriate C functions to perform string comparisons, such as `strcmp()` for comparing two strings lexically.
5. Use the appropriate C data types to represent numeric values, such as `int` or `float`.
6. Use the appropriate C operators to compare numeric values, such as `<`, `>`, and so on.
7. Use the appropriate C functions to perform numeric comparisons, such as `strtod()` for converting a string to a double precision floating point number.

Here is an example of how you could convert this code from Python to C:
```
#include <stdio.h>
#include <string.h>

void compare(char* a, char* b) {
    printf("a is of type %s and b is of type %s\n", a, b);
    if (strcmp(a, b) < 0) {
        printf("%s is strictly less than %s\n", a, b);
    } else if (strcmp(a, b) <= 0) {
        printf("%s is less than or equal to %s\n", a, b);
    } else if (strcmp(a, b) > 0) {
        printf("%s is strictly greater than %s\n", a, b);
    } else if (strcmp(a, b) >= 0) {
        printf("%s is greater than or equal to %s\n", a, b);
    } else if (strcmp(a, b) == 0) {
        printf("%s is equal to %s\n", a, b);
    } else {
        printf("%s is not equal to %s\n", a, b);
    }
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
    return 0;
}
```
Note that this is just one way to convert the code from Python to C, and there may be other ways to do it depending on your specific needs and preferences.
