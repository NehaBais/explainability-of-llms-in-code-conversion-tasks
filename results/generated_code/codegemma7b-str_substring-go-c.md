```c
#include <stdio.h>
#include <string.h>

int main() {
    const char s[] = "ABCDEFGH";
    int n = 2, m = 3;

    // starting from n characters in and of m length
    printf("Start %d, length %d:    %.*s\n", n, m, m, s + n);

    // starting from n characters in, up to the end of the string
    printf("Start %d, to end:      %.*s\n", n, strlen(s) - n, s + n);

    // whole string minus last character
    printf("All but last:         %.*s\n", strlen(s) - 1, s);

    // starting from a known character within the string and of m length
    int dx = strcspn(s, "D");
    printf("Start 'D', length %d:  %.*s\n", m, m, s + dx);

    // starting from a known substring within the string and of m length
    int sx = strcspn(s, "DE");
    printf("Start \"DE\", length %d: \"%.*s\"\n", m, m, s + sx);

    return 0;
}
```

