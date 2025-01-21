Converting the given C++ code to C requires handling string manipulation and logic in a way that doesn't rely on C++'s string class, which is not available in C. We will use C's standard library functions such as `strlen`, `strncpy`, and `strchr`. However, since C doesn't natively support Unicode or UTF-8/UTF-16, we will assume the input strings are already in a simple 8-bit encoding (like ASCII) for simplicity. If you need to handle real UTF-8 strings in C, it would require more complex handling.

Here is the converted code:

```c
#include <stdio.h>
#include <string.h>

void displaySubstring(const char* s, int n, int m) {
    if (n + m <= strlen(s)) {
        printf("%.*s\n", m, &s[n]);
    }
}

int main() {
    const char *s = "0123456789";
    int const n = 3;
    int const m = 4;
    char const c = '2';
    const char *sub = "456";

    displaySubstring(s, n, m);
    displaySubstring(s, n, strlen(s));
    printf("%.*s\n", strlen(s) - 1, s);

    // Find the position of the character
    int posC = strcspn(s, &c);
    if (posC != strlen(s)) {
        displaySubstring(s, posC, m);
    }

    // Find the position of the substring
    const char *posSub = strstr(s, sub);
    if (posSub) {
        displaySubstring(posSub, 0, m);
    }

    return 0;
}
```

### Explanation:
1. **`displaySubstring` Function**: This function prints a substring of `s` starting at index `n` and having length `m`. It checks if the requested substring is within the bounds of the string before printing.
2. **Main Function**:
   - Displays a substring of `s` starting from the 4th character (index 3) and having a length of 4 characters.
   - Displays a substring of `s` starting from the 4th character until the end of the string.
   - Displays all characters except the last one of the string.
   - Finds the position of the character '2' in the string and displays a substring of `s` starting from that position with a length of 4 characters.
   - Finds the position of the substring "456" in the string and displays a substring of `s` starting from that position.

This code assumes that the input strings are valid ASCII characters. If you need to handle real UTF-8 or other encodings, additional logic would be required to correctly interpret and manipulate the Unicode code points.
