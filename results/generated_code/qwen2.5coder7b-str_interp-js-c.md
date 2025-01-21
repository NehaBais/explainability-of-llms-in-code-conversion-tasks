In C, there is no built-in function like `replace()` in JavaScript. But we can achieve the same by using `strtok` and `sprintf`. Here is a simple implementation:

```c
#include <stdio.h>
#include <string.h>

void replaceX(char *original, const char *replacement) {
    char buffer[1024];
    int pos = 0;
    while (*original != '\0') {
        if (*original == 'X') {
            strcpy(buffer + pos, replacement);
            pos += strlen(replacement);
        } else {
            buffer[pos++] = *original;
        }
        original++;
    }
    buffer[pos] = '\0';
    printf("Replaced string: %s\n", buffer);
}

int main() {
    char original[1024] = "Mary had a X lamb";
    const char *little = "little";

    replaceX(original, little);

    return 0;
}
```

In the code above, `replaceX()` function takes two parameters. The first parameter is the string that needs to be replaced and the second parameter is the replacement value.

It uses a buffer of size 1024 for storing the new replaced string. It iterates over each character of the original string. If it finds 'X', it copies the replacement string into the buffer, otherwise, it simply copies the current character. After reaching end of the original string, it prints the result.

This code will output: `Replaced string: Mary had a little lamb`
