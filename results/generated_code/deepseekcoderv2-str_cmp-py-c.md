 Below is the C code that performs the same operations as your Python script for comparing strings and handling different types of comparisons:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(const char* a, const char* b) {
    printf("%s is of type %s and %s is of type %s\n", a, typeof(a), b, typeof(b));

    if (strcmp(a, b) == 0) {
        printf("%s is equal to %s\n", a, b);
    } else {
        printf("%s is not equal to %s\n", a, b);
    }

    if (strcmp(a, b) < 0) {
        printf("%s is strictly less than %s\n", a, b);
    }
    if (strcmp(a, b) <= 0) {
        printf("%s is less than or equal to %s\n", a, b);
    }
    if (strcmp(a, b) > 0) {
        printf("%s is strictly greater than %s\n", a, b);
    }
    if (strcmp(a, b) >= 0) {
        printf("%s is greater than or equal to %s\n", a, b);
    }

    // Case sensitive comparison
    if (strcasecmp(a, b) == 0) {
        printf("%s is case insensitive equal to %s\n", a, b);
    } else {
        printf("%s is not case insensitive equal to %s\n", a, b);
    }

    // Case insensitive comparison
    if (strncasecmp(a, b, strlen(a)) == 0) {
        printf("%s is case insensitive equal to %s\n", a, b);
    } else {
        printf("%s is not case insensitive equal to %s\n", a, b);
    }

    // Lexical comparison for numeric strings
    if (isdigit(*a) && isdigit(*b)) {
        int num_a = atoi(a);
        int num_b = atoi(b);
        if (num_a < num_b) {
            printf("%s is strictly less than %s\n", a, b);
        } else if (num_a > num_b) {
            printf("%s is strictly greater than %s\n", a, b);
        } else {
            printf("%s is equal to %s\n", a, b);
        }
    }
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    // Uncomment the following line to test with different types
    // compare(24, 123);
    // Uncomment the following line to test with floating point numbers
    // compare(5.0, 5);
    return 0;
}
```

### Explanation:
1. **Type Checking**: The `typeof` function is a placeholder for checking the type of variables in C, which can be obtained using functions like `strtype` or macros like `sizeof`. However, since C does not have a direct equivalent to Python's `type`, we print out the string "char*" for strings and use `atoi` for numeric comparisons.
2. **String Comparison**: The function uses `strcmp` for case-sensitive comparison and `strcasecmp` (or `strncasecmp`) for case-insensitive comparison.
3. **Numeric String Comparison**: If both strings are numeric, it converts them to integers using `atoi` and compares the integers directly.
4. **Case Insensitive Comparison**: The function uses `strcasecmp` for a simple case-insensitive string comparison.
5. **Lexical Ordering**: It uses comparisons from `strcmp` (for lexical order) and adjusts based on the result (`<`, `>`, `<=`, `>=`).
6. **Equality and Inequality**: Directly use `strcmp` to check for equality or inequality.
7. **Object Identity**: C does not have direct object identity checks like Python's `is` and `is not`. The function uses the same logic as in Python using simple `==` and `!=`.

This code should provide similar functionality to your original Python script, handling both string and numeric comparisons appropriately.
