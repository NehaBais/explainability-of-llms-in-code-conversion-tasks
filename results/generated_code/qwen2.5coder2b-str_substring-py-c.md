The following C code accomplishes the same task as the Python program:

```c
#include <stdio.h>
#include <string.h>

// Function to display a substring according to the given conditions
void printSubstring(char *s, int n, int m, char charIn, char *subStr) {
    int i;

    // Starting from n characters in and of m length
    printf("Starting from %d characters in and of %d length:\n", n, m);
    if (n + m <= strlen(s)) {
        for (i = n - 1; i < n + m - 1; i++) {
            printf("%c", s[i]);
        }
        printf("\n");
    } else {
        printf("Substring not found.\n");
    }

    // Starting from n characters in, up to the end of the string
    printf("Starting from %d characters in, up to the end:\n", n);
    for (i = n - 1; i < strlen(s); i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    // Whole string minus the last character
    printf("Whole string minus the last character:\n");
    for (i = 0; i < strlen(s) - 1; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    // Starting from a known character char="d" within the string and of m length
    printf("Starting from a known character '%c' within the string and of %d length:\n", charIn, m);
    if (i < strlen(s)) {
        for (i = 0; i < m && s[i] != '\0'; i++) {
            printf("%c", s[i]);
        }
        printf("\n");
    } else {
        printf("Substring not found.\n");
    }

    // Starting from a known substring chars="cd" within the string and of m length
    printf("Starting from a known substring '%s' within the string and of %d length:\n", subStr, m);
    if (strstr(s, subStr) != NULL) {
        for (i = 0; i < m && strstr(s, subStr)[i] != '\0'; i++) {
            printf("%c", s[i]);
        }
        printf("\n");
    } else {
        printf("Substring not found.\n");
    }
}

int main() {
    char s[] = "abcdefgh";
    int n = 2;
    int m = 3;
    char charIn = 'd';
    char subStr[] = "cd";

    printSubstring(s, n, m, charIn, subStr);

    return 0;
}
```
This program will output the substrings according to the specified conditions. The function `printSubstring` takes an input string `s`, and the indices `n`, `m`, `charIn`, and `subStr`. Depending on these inputs, it prints the substring according to the conditions provided.
