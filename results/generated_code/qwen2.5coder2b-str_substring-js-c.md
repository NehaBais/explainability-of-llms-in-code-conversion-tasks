In C, there is no direct equivalent to JavaScript's `substr` method or `substring` function for strings.

However, you can accomplish this task by using the functions from the standard library. The following is a possible implementation of your requirements in C:

```c
#include <stdio.h>

void substr(char *src, int start, int length) {
    if (start + length > strlen(src)) {
        fprintf(stderr, "Error: Starting point plus length exceeds string length.\n");
        return;
    }
    
    for(int i = 0; i < length; ++i) {
        printf("%c", src[start+i]);
    }
}

int main() {
    char str[] = "abcdefgh";
    
    int n = 2;
    int m = 3;

    // starting from n characters in and of m length
    substr(str, n, m);  // => "cde"

    // starting from n characters in, up to the end of the string
    substr(str, n, strlen(str)-n);

    // whole string minus last character
    substr(str, 0, strlen(str)-1);

    // starting from a known character within the string and of m length
    int index = str.index('b');
    if (index != -1) {
        substr(str, index, m);
    } else {
        fprintf(stderr, "Error: 'b' not found in the string.\n");
    }

    // starting from a known substring within the string and of m length
    int index2 = str.index('bc');
    if (index2 != -1) {
        substr(str, index2, m);
    } else {
        fprintf(stderr, "Error: 'bc' not found in the string.\n");
    }

    return 0;
}
```

In this code, `substr` function takes three parameters: the source string (`src`), the starting position (`start`), and the length of the substring to be returned. It prints each character from the specified starting position for the requested length.

The `main` function creates a sample string "abcdefgh", then calls `substr` function with various arguments to print substrings as per your requirements. If a specific character or substring is not found in the string, it logs an error message and continues execution.
