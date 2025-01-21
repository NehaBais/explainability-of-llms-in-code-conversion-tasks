Converting this Golang code to C involves several steps because Go's strings are UTF-8 encoded and handle Unicode characters natively, whereas C strings are just arrays of bytes. To handle Unicode in C, we need to use libraries like `libunicode` or convert the string to a suitable format.

For simplicity and compatibility with standard C libraries, we will assume that the input string is already UTF-8 encoded and treat it as an array of UTF-8 code units. This means we won't be able to handle Unicode characters directly, but we can still work with them as byte sequences.

Here's the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

void displaySubstring(const char *str, size_t n, size_t m) {
    printf("Start %zu, length %zu:   ", n, m);
    for (size_t i = 0; i < m && str[n + i] != '\0'; ++i) {
        putchar(str[n + i]);
    }
    putchar('\n');
}

void displaySubstringToEnd(const char *str, size_t n) {
    printf("Start %zu, to end:      ", n);
    for (size_t i = n; str[i] != '\0'; ++i) {
        putchar(str[i]);
    }
    putchar('\n');
}

void displayAllButLast(const char *str) {
    size_t len = strlen(str);
    printf("All but last:         ");
    for (size_t i = 0; i < len - 1; ++i) {
        putchar(str[i]);
    }
    putchar('\n');
}

int main() {
    const char *s = "ABCDEFGH";
    size_t n, m;

    // For reference
    printf("Index:  01234567\n");
    printf("String: %s\n", s);

    n = 2;
    m = 3;
    displaySubstring(s, n, m);

    n = 2;
    displaySubstringToEnd(s, n);

    displayAllButLast(s);

    // Assuming 'D' is the starting character and 'DE' is the substring
    const char *charStart = "D";
    const char *subStringStart = "DE";

    n = strcspn(s, charStart);
    if (n < strlen(s)) {
        displaySubstring(s, n, m);
    }

    size_t sx = strstr(s, subStringStart) - s;
    if (sx < strlen(s)) {
        displaySubstring(s, sx, m);
    }

    return 0;
}
```

### Explanation:
1. **displaySubstring**: This function prints a substring starting from index `n` and having length `m`.
2. **displaySubstringToEnd**: This function prints the substring starting from index `n` to the end of the string.
3. **displayAllButLast**: This function prints the entire string except for the last character.
4. In the `main` function, we demonstrate each functionality with different parameters.

This C code assumes that the input string is UTF-8 encoded and handles it as a sequence of bytes. If you need to handle Unicode characters directly in C, you would need to use additional libraries or write more complex logic to correctly process multi-byte UTF-8 sequences.
