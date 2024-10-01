Below is an equivalent C code to achieve the same functionality as above JavaScript:

```c
#include <stdio.h>
#include <string.h>

void printSubstring(const char* str, int n, int m) {
    printf("%.*s\n", m, str+n);
}

int main() {
    char str[] = "abcdefgh";
    int n = 2;
    int m = 3;

    // * starting from n characters in and of m length
    printSubstring(str, n, m);

    // * starting from n characters in, up to the end of the string
    printSubstring(str, n, strlen(str) - n + 1);

    // * whole string minus last character
    printf("%.*s\n", strlen(str)-1, str);
    
    // * starting from a known character within the string and of m length
    char ch = 'b';
    int startIdx = strchr(str, ch) - str;
    if (startIdx != NULL)
        printSubstring(str, startIdx, m);

    // * starting from a known substring within the string and of m length
    char substr[] = "bc";
    startIdx = strstr(str, substr) - str;
    if (startIdx != NULL)
        printSubstring(str, startIdx, m);
    
    return 0;
}
```

Please note:
1. In C, strings are not as flexible as in JavaScript and they don't have a built-in function to get a substring by length or character. So we need to manually implement the logic.
2. `strchr` function is used to find the first occurrence of 'b' character from the string, and returns pointer to it or NULL if not found.
3. `strstr` function is used to find the first occurrence of "bc" substring from the string, and returns pointer to it or NULL if not found.
4. `str[n]` is equivalent to JavaScript's `str.substr(n)`, and it means getting characters starting from index n till end of the string.
5. If using UTF-8 encoding (common for many modern systems), each code point may be more than 1 byte, so care must be taken when dealing with multi-byte characters.
6. For other encodings like ASCII or EUC-JP, this logic may not work correctly as it assumes one-to-one mapping between character and bytes.
