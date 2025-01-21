Sure! Below is the equivalent code in C. In C, string interpolation can be achieved using `sprintf` which formats and stores a series of characters and values in a buffer.

```c
#include <stdio.h>

int main() {
    char str[] = "Mary had a %s lamb";
    char txt[] = "little";
    char out[100];  // Make sure this is large enough to hold the resulting string

    sprintf(out, str, txt);
    printf("%s\n", out);

    return 0;
}
```

### Explanation:
1. **String Definitions**: The original string and the value to replace are defined as character arrays (`char`).
2. **Output Buffer**: A buffer `out` is created to store the resulting interpolated string. Make sure it is large enough to hold the final string.
3. **sprintf Function**: This function formats the input string with the provided values and stores the result in the output buffer.
4. **printf Function**: Finally, the resulting string is printed.

### Notes:
- The size of the `out` buffer should be appropriately chosen based on the expected length of the final string to avoid buffer overflow.
- The format specifier `%s` is used for strings in both C and Golang, but the syntax for string interpolation is different.
