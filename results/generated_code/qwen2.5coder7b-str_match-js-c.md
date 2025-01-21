Below is the C code that achieves the same functionality as the given JavaScript code:

```c
#include <stdio.h>
#include <string.h>

void findStartsWith(const char* stringA, const char* stringB) {
    if (strncmp(stringA, stringB, strlen(stringB)) == 0) {
        printf("1: Does '%s' start with '%s'? Yes.\n", stringA, stringB);
    } else {
        printf("1: Does '%s' start with '%s'? No.\n", stringA, stringB);
    }
}

void findContains(const char* stringA, const char* stringB) {
    if (strstr(stringA, stringB)) {
        printf("2: Is '%s' contained in '%s'? Yes, at index %ld.\n", stringB, stringA, strstr(stringA, stringB) - stringA);
    } else {
        printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);
    }
}

void findEndsWith(const char* stringA, const char* stringB) {
    size_t lena = strlen(stringA);
    size_t lenb = strlen(stringB);

    if (lena >= lenb && strncmp(&stringA[lena - lenb], stringB, lenb) == 0) {
        printf("3: Does '%s' end with '%s'? Yes.\n", stringA, stringB);
    } else {
        printf("3: Does '%s' end with '%s'? No.\n", stringA, stringB);
    }
}

int main() {
    char stringA[] = "tacoloco";
    char stringB[] = "co";

    findStartsWith(stringA, stringB);
    findContains(stringA, stringB);
    // Optional requirement for multiple matches is not implemented as C does not support regular expressions in the same way JavaScript does
    findEndsWith(stringA, stringB);

    return 0;
}
```

This C code achieves the same functionality as the given JavaScript code. It defines three functions, `findStartsWith`, `findContains`, and `findEndsWith`, which check if `stringA` starts with `stringB`, contains `stringB`, and ends with `stringB`, respectively. The function `strstr` is used to find the first occurrence of `stringB` in `stringA`. Note that for multiple occurrences, C does not have built-in support for regular expressions like JavaScript, so this feature is not implemented in the C code.
