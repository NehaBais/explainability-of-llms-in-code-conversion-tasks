The JavaScript code is not directly compatible with C. However, the concept for substrings can be implemented in C, as shown below:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcdefgh";

    int n = 2;
    int m = 3;

    // * starting from n characters in and of m length;
    printf("Substr: %.*s\n", m, str + n);

    // * starting from n characters in, up to the end of the string;
    printf("Substring: %.*s\n", (int)(strlen(str) - n), str + n);

    // * whole string minus last character;
    printf("Substring2: %.*s\n", (int)(strlen(str)) - 1, str);

    // * starting from a known character within the string and of m length;
    int start_index = strchr(str, 'b') - str;
    printf("Substr3: %.*s\n", m, str + start_index);

    // * starting from a known substring within the string and of m length. 
    char substr[] = "bc";
    start_index = strstr(str, substr) - str;
    printf("Substr4: %.*s\n", (int)(strlen(substr)), str + start_index);

    return 0;
}
```

Note that the `printf` function in C does not have a direct equivalent for JavaScript's `.substr()` and `.substring()`, so we have to manually calculate the substring. However, this method should work correctly as it adheres to the requirement of extracting substrings starting from n characters in and of m length.
