The provided Golang code needs to be converted into C language. The C program will display a substring based on the given conditions. Here's how you can convert this code into C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDEFGH";
    int n, m;

    // for reference
    printf("Index: %d %d%d%d%d%d%d\n", '0', '1', '2', '3', '4', '5', '6', '7');
    printf("String: %s\n", s);

    // starting from n characters in and of m length
    n = 2;
    m = 3;
    printf("Start %d, length %d:    %s\n", n, m, &s[n - 1]));

    // starting from n characters in, up to the end of the string
    printf("Start %d, to end:      %s\n", n, &s[n - 1]));

    // whole string minus last character
    printf("All but last:         %s\n", &s[0]));

    // starting from a known character within the string and of m length
    dx = strchr(s, 'D') - s;
    printf("Start 'D', length %d:  %s\n", m, &s[dx - 1]));

    // starting from a known substring within the string and of m length
    sx = strstr(s, "DE") - s;
    printf(`Start "DE", length %d: "%s"`+"\n", m, &s[sx - 1]));

    return 0;
}
```

This C code will display the desired substrings based on the provided conditions.
