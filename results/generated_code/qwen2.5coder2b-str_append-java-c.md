In C, you can use the `strcat` function to concatenate strings. Here is how you would convert the Java code to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[100] = "abc";
    printf("Original string: %s\n", string);
    strcat(string, "def");
    printf("Appended string: %s\n", string);
    return 0;
}
```

In this C program:
- `char string[100];` is a character array of size 100, which is sufficient to hold the maximum length of the concatenated string.
- `strcat(string, "def");` is used to concatenate the string literal `"def"` to the end of the array `string`.
- The program prints both the original and the appended strings.
