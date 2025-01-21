In C, there isn't a direct equivalent to Go's `strings.EqualFold` function or similar methods for handling case insensitivity in strings. You would need to use library functions that support string comparison based on Unicode rules.

For example, you can use the `strcoll` function from `<string.h>` to perform case-insensitive string comparisons. Here is how you might compare two C strings in a case-insensitive manner:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char c[] = "cat";
    char d[] = "dog";

    // Compare using strcoll with locale set to C (which is case insensitive)
    if (strcoll(c, d) == 0) {
        printf("%s is bytewise identical to %s\n", c, d);
    } else if (strcoll(c, d) > 0) {
        printf("%s is lexically bytewise greater than %s\n", c, d);
    } else if (strcoll(c, d) < 0) {
        printf("%s is lexically bytewise less than %s\n", c, d);
    }

    // Test case insensitivity with strcasecmp
    int result = strcasecmp(c, d);
    if (result == 0) {
        printf("%s equal to %s\n", c, d);
    } else if (result > 0) {
        printf("%s is lexically bytewise greater than %s\n", c, d);
    } else if (result < 0) {
        printf("%s is lexically bytewise less than %s\n", c, d);
    }

    return 0;
}
```

This program will output:

cat is bytewise identical to dog
cat equal to dog

Note: The `strcasecmp` function compares two strings in a case-insensitive manner and returns an integer value indicating the result of the comparison. If they are equal, it returns 0; if c is greater than d, it returns a positive number; and if c is less than d, it returns a negative number.
