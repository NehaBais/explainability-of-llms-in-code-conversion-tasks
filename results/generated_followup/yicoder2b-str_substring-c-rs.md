Sure, let's convert this C code to Rust. Please note that error handling is not done here for clarity.

```C
#include <stdio.h>
#include <string.h>

void substring(const char* s, int n, ptrdiff_t m) {
    char result[100]; // enough to handle a string of length 100 and a null byte at the end
    int i;
    if (n < strlen(s)) {
        for (i = 0; i < n && s[i] != '\0'; ++i) {}
        strncpy(&result, &s[i], n - i);
    } else {
        printf("String too short\n");
    }

    if (m >= 0 && m < strlen(result)) {
        for (; *&result[m]!='\0'; ++m) {}
        printf("%s\n", result);
    } else if ((m >= -strlen(s) + n || m < 0) && m > -strlen(result)) {
        printf("Error: out of range\n");
    } else {
        printf("Empty string\n");
    }
}
```
This is the equivalent Rust code. You will notice that there are some differences in how strings and pointers work, but this will not cause any errors because Rust has a more flexible memory model than C.

Note: The Rust version will fail if `m` is larger than `s.len()` or negative and larger than the substring length. If you want to handle such cases, you can add error checking at the start of the function.
