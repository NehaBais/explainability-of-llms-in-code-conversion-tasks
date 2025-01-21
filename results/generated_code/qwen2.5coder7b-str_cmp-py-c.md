Below is a C code that demonstrates the string comparisons as described:

```C
#include <stdio.h>
#include <string.h>

void compare(char *a, char *b) {
    printf("\n%s is of type %s and %s is of type %s\n", a, "char*", b, "char*");
    
    if (strcmp(a, b) > 0)      printf('%s is strictly greater than  %s\n', a, b);
    if (strcmp(a, b) >= 0)     printf('%s is greater than or equal to %s\n', a, b);
    if (strcmp(a, b) < 0)      printf('%s is strictly less than  %s\n', a, b);
    if (strcmp(a, b) <= 0)     printf('%s is less than or equal to %s\n', a, b);

    if (!strcmp(a, b))         printf('%s is equal to %s\n', a, b);
    else                     printf('%s is not equal to %s\n', a, b);
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");

    return 0;
}
```

This code uses the `strcmp` function from string.h library for comparison. It first compares strings lexicographically (like alphabetical order in English) and then prints out the comparison results.

Please note that C does not have built-in boolean types, so it usually returns integers to indicate truthiness or falseness. In this case we are using if conditions directly on `strcmp`'s return values which will be non-zero (for true cases) or zero (for false cases).
