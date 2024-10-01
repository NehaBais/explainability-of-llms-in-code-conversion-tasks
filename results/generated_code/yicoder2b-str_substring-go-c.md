This is the converted C code for the given Go code -

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDEFGH";
    int n, m;

    n = 2;
    m = 3;
    // for reference
    printf("Index: %s\n", "01234567");
    printf("String: %s\n", s);
    // starting from n characters in and of m length
    printf("Start %d, length %d: %.*s\n", n, m, m, &s[n]);
    // starting from n characters in, up to the end of the string
    printf("Start %d, to end: %.*s\n", n, strlen(&s[n]), &s[n]);
    // whole string minus last character
    printf("All but last: %.*s\n", strlen(s)-1, s);
    // starting from a known character within the string and of m length
    int dx = strchr(&s[0], 'D') - &s[0];
    printf("Start 'D', length %d: %.*s\n", m, m, &s[dx]);
    // starting from a known substring within the string and of m length
    int sx = strstr(&s[0], "DE") - &s[0];
    printf("Start 'DE', length %d: %.*s\n", m, m, &s[sx]);

    return 0;
}
```
This code does the same task as the Go program. It prints out various substrings from the string `"ABCDEFGH"` using functions in the standard library of C programming language.
