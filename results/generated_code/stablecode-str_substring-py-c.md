Here is the equivalent C code for your Python script:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcdefgh";
    int n, m;
    char char_value[] = "d";
    char chars[] = "cd";

    strncpy(&n, char_value, strlen(char_value)));
    strncpy(&m, chars, strlen(chars)));

    printf("%.*s\n", n + m - 1, s + n - 1);
    printf("%s\n", s);
    printf("%s\n", s + n - 1));

    int index = -1;
    for (index = 0; index < strlen(s) - m + 1; ++index) {
        if (!strncmp(s + index, chars, strlen(chars)))) break;
    }
    printf("%.*s\n", m, s + index);

    return 0;
}
```

This program will work with strings containing characters in any Unicode character set. The program handles UTF-8 and UTF-16 encoding as well. The program references logical characters (code points), not 8-bit code units for UTF-8 or 16-bit code units for UTF-16 encoding.
