```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDEFGH";
    int n, m;
    printf("Index: 01234567\n");
    printf("String: %s\n", s);

    // starting from n characters in and of m length
    n = 2;
    m = 3;
    printf("Start %d, length %d:    %s\n", n, m, &s[n], m-1);

    // starting from n characters in, up to the end of the string
    n = 2;
    m = strlen(s) - n;
    printf("Start %d, to end:      %s\n", n, &s[n]);

    // whole string minus last character
    m = strlen(s) - 1;
    printf("All but last:         %s\n", s);

    // starting from a known character within the string and of m length
    int dx = strcspn(s, "D");
    if (dx == -1) {
        fprintf(stderr, "Error: No 'D' found in the string.\n");
        return 1;
    }
    printf("Start 'D', length %d:  %s\n", m, &s[dx], m-1);

    // starting from a known substring within the string and of m length
    int sx = strcspn(s, "DE");
    if (sx == -1) {
        fprintf(stderr, "Error: No 'DE' found in the string.\n");
        return 1;
    }
    printf("Start 'DE', length %d: %s\n", m, &s[sx], m-1);

    return 0;
}
```
The C version of the given Go code is almost identical. The main differences are that the input string is declared as a character array and printed with `printf` function, while in Go it's an empty string without length being specified, so the start index has to be calculated manually. Similarly, the substring functions `strings.IndexByte` and `strings.Index` are used for finding the position of known characters and substrings within the string.
