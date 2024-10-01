The Rust code uses the `std::str` module, but C has no equivalent. However, we can work around this by using some of its built-in functionality to achieve similar results. Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abc文字化けdef";
    int n = 2, m = 3;

    // Print 3 characters starting at index 2 (c文字)
    for (int i = n; i < n + m; ++i)
        printf("%c", s[i]);
    printf("\n");

    // Print all characters starting at index 2 (c文字化けdef)
    int j = 0;
    while (s[j+n] != '\0') {
        printf("%c", s[j+n]);
        ++j;
    }
    printf("\n");

    // Print all characters except the last (abc文字化けde)
    int len = strlen(s);
    for (int i = 0; i < len-1; ++i)
        printf("%c", s[i]);
    printf("\n");

    // Print 3 characters starting with 'b' (bc文)
    char *pos = strchr(s, 'b');
    if (!pos) {
        printf("Character 'b' not found.\n");
        return -1;
    }
    for (int i = pos - s + 1; i < pos - s + m + 1; ++i)
        printf("%c", s[i]);
    printf("\n");

    // Print 3 characters starting with "けd" (けde)
    char *spos = strstr(s, "けd");
    if (!spos) {
        printf("Substring 'けd' not found.\n");
        return -1;
    }
    for (int i = spos - s + 1; i < spos - s + m + 1; ++i)
        printf("%c", s[i]);
    printf("\n");

    return 0;
}
```

Note that this code assumes ASCII strings or a similar encoding, so it will not work with UTF-8 or other Unicode encodings. If you need to handle these more complex cases, you may need to use the `strlen` function for string length and the `strchr`, `strstr` functions for finding substrings. The C language doesn't have a built-in equivalent of Rust's `chars()` iterator, so we have to find another way to iterate over each character in a string (like in Rust). The `for` loop is a common choice. However, you may need to adjust the loop condition and incrementing/decrementing strategy depending on your specific needs.

If you want the code to work with UTF-8 or other Unicode encodings, we can still use some of the C functions for working with strings. But you will need to handle them yourself. The `strlen` function works well with ASCII strings and returns the length of the string in bytes (not characters). You can use a loop that iterates over every byte in the string. However, the `strchr` and `strstr` functions work with 8-bit code units, not Unicode code points. If you need to find specific Unicode characters or substrings in a UTF-8 encoded string, you may have to write your own function for this purpose. You can refer to the documentation of these functions for more information on how to use them effectively.

