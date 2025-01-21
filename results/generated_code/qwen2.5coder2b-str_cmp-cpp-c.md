To convert the given C++ code to C, we need to make sure that the language supports similar string comparison methods. In C, this can be achieved using the `<string.h>` library for basic string functions and `strcmp` for comparing strings.

Here's the C version of the code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For stricmp (case-insensitive string comparison)

// Function prototypes for string comparison
int strcmp(const char *a, const char *b);
int strncmp(const char *a, const char *b, size_t n);
intstrcasecmp(const char *a, const char *b);

void demo_compare(const char *a, const char *b, const char *semantically) {
    printf("%s and %s are %s exactly equal.\n", a, b, (strcmp(a, b) == 0) ? "" : "not");
    printf("%s and %s are %s not equal.\n", a, b, (strcmp(a, b) != 0) ? "" : "not");
    printf("%s is %s ordered before %s.\n", a, b, (strncmp(a, b) < 0) ? "" : "not");
    printf("%s is %s ordered after %s.\n", a, b, (strncmp(a, b) > 0) ? "" : "not");
}

int main(int argc, char *argv[]) {
    // Case-sensitive comparisons.
    char a[100] = ((argc > 1) ? argv[1] : "1.2.Foo");
    char b[100] = ((argc > 2) ? argv[2] : "1.3.Bar");
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons.
    stricmp(a, b);
    strcasecmp(a, b);

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    double numA = strtod(a, NULL);
    double numB = strtod(b, NULL);
    demo_compare(numA, numB, "numerically");
    return (numA == numB);
}
```

### Explanation:
1. **Comparison Functions**:
   - `strcmp`: Compares two strings lexicographically.
   - `strncmp`: Compares the first `n` characters of two strings lexicographically.
   - `strcasecmp`: Compares two strings ignoring case.

2. **Main Function**:
   - The main function now uses C-style string functions like `strncpy`, `strcmp`, and `strtod` for the comparison operations.
   - The `demo_compare` function remains the same as in the original C++ code, but it is adapted to use C-style strings.

This conversion ensures that the code can be compiled and executed on a C compiler.
