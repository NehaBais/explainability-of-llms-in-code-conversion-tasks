```c
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb";
    char little[] = "little";
    char replaced[strlen(original) + strlen(little) - 1];

    snprintf(replaced, sizeof(replaced), original, little);

    printf("Original string: %s\n", original);
    printf("Replaced string: %s\n", replaced);

    return 0;
}
```

**Explanation:**

* The `snprintf` function is used to perform string interpolation.
* It takes three arguments: the destination buffer, its size, and the format string.
* The format string specifies the original string and the replacement value.
* The `%s` format specifier indicates where the replacement value should be inserted.
* The `original` string is copied to the `replaced` buffer with the `little` value interpolated in place of the `X`.

**Output:**


Original string: Mary had a X lamb
Replaced string: Mary had a little lamb
