 Below is the equivalent C code for the provided Python script, which handles Unicode strings and displays substrings based on the specified conditions:

```c
#include <stdio.h>
#include <string.h>

void print_substring(const char *s, int n, int m) {
    if (n > 0 && n <= strlen(s) && m > 0) {
        for (int i = n - 1; i < n + m - 1 && s[i] != '\0'; ++i) {
            printf("%c", s[i]);
        }
        printf("\n");
    } else {
        printf("Invalid indices or length.\n");
    }
}

int main() {
    const char *s = "abcdefgh";
    int n = 2, m = 3;
    char char_search = 'd';
    const char *chars = "cd";

    // starting from n characters in and of m length;
    print_substring(s, n, m);

    // starting from n characters in, up to the end of the string;
    printf("%.*s\n", (int)(strlen(s) - n + 1), s + n - 1);

    // whole string minus the last character;
    printf("%.*s\n", (int)(strlen(s) - 1), s);

    // starting from a known character char="d" within the string and of m length;
    int indx = strchr(s, char_search) - s;
    if (indx >= 0 && indx + m <= strlen(s)) {
        for (int i = indx; i < indx + m && s[i] != '\0'; ++i) {
            printf("%c", s[i]);
        }
        printf("\n");
    } else {
        printf("Character not found or invalid length.\n");
    }

    // starting from a known substring chars="cd" within the string and of m length.
    indx = strstr(s, chars) - s;
    if (indx >= 0 && indx + m <= strlen(s)) {
        for (int i = indx; i < indx + m && s[i] != '\0'; ++i) {
            printf("%c", s[i]);
        }
        printf("\n");
    } else {
        printf("Substring not found or invalid length.\n");
    }

    return 0;
}
```

This C code defines a function `print_substring` to handle the printing of substrings based on given indices and lengths, similar to the Python script. It uses standard library functions like `strlen`, `strchr`, and `strstr` to find characters or substrings within the string, adjusting for zero-based indexing in C by using adjustments when accessing elements directly.
