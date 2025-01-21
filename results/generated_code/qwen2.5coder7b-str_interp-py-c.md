In C, string interpolation is not as straightforward as it is in Python using formatted strings. However, you can use `sprintf` or `snprintf` to achieve the same result.

Here's how you would convert your Python code to C:

```c
#include <stdio.h>

int main() {
    char *extra = "little";
    char new_str[100];
    
    // Use snprintf for safety (to avoid buffer overflow)
    snprintf(new_str, sizeof(new_str), "Mary had a %s lamb.", extra);
    
    printf("%s\n", new_str);

    return 0;
}
```

### Explanation:
- `snprintf` is used instead of `sprintf` to write the output into a buffer (`new_str`). This helps prevent buffer overflow, which can be a security risk.
- The format string `"Mary had a %s lamb."` tells `snprintf` where to insert the value of `extra`.
- `%s` is the placeholder for strings in C.

This C code will produce the same output as your Python code:

Mary had a little lamb.
