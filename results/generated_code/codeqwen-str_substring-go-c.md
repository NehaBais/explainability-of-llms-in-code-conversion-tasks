Below is the equivalent C code for the provided Go program that displays a substring based on different conditions:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDEFGH";
    int n, m;
    n = 2;
    m = 3;
    // For reference
    printf("Index: %c%c%c%c%c%c%c%c\
", '0', '1', '2', '3', '4', '5', '6', '7');
    printf("String: %s\
", s);
    // starting from n characters in and of m length
    printf("Start %d, length %d: ", n, m);
    for(int i = n; i < n + m; ++i) {
        putchar(s[i]);
    }
    printf("\
");
    // starting from n characters in, up to the end of the string
    printf("Start %d, to end: ", n);
    for(int i = n; s[i]; ++i) {
        putchar(s[i]);
    }
    printf("\
");
    // whole string minus last character
    printf("All but last: ");
    for(int i = 0; s[i] && i < strlen(s) - 1; ++i) {
        putchar(s[i]);
    }
    printf("\
");
    // starting from a known character within the string and of m length
    int dx = strchr(s, 'D') - s;
    if (dx != strlen(s)) { // check if 'D' exists in the string
        printf("Start 'D', length %d: ", m);
        for(int i = dx; i < dx + m && s[i]; ++i) {
            putchar(s[i]);
        }
        printf("\
");
    }
    // starting from a known substring within the string and of m length
    char *sx = strstr(s, "DE");
    if (sx != NULL) { // check if "DE" exists in the string
        printf("Start \"DE\", length %d: ", m);
        for(int i = sx - s; i < sx - s + m && s[i]; ++i) {
            putchar(s[i]);
        }
        printf("\
");
    }
    return 0;
}
```

Please note that C doesn't have the same concept of string length as Go, so we use strlen() to get the length of the string. The index is based on individual characters rather than Unicode code points, so we don't need to convert between character indices and Unicode code points. Also, in C, we can't check if a substring or character exists in a string using `strchr()` or `strstr()`, because they return pointers that are compared with `NULL` directly. We need to subtract the base pointer of the string from the pointer returned by these functions to get the index of the found character/substring within the string.
