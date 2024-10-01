To convert the given JavaScript code to C, we need to find a library that supports string operations in C and provides an equivalent functionality for printing strings. Here's how to do it:

```c
#include <stdio.h>

int main() {
    char s1[100];
    strcpy(s1, "Hello");
    strcat(s1, ", World!");
    printf("%s\n", s1);
    return 0;
}
```

In the above code:

1. `char s1[100]` declares a character array of size 100 to store the string.
2. `strcpy(s1, "Hello")` copies the content of the string literal "Hello" into `s1`.
3. `strcat(s1, ", World!")` appends the string literal ", World!" to the existing `s1`.
4. `printf("%s\n", s1)` prints the contents of `s1` followed by a newline character.

Please note that using `printf()` is not idiomatic in C. In fact, it's recommended to use `puts()`, which is more efficient and safer when working with strings. However, for simplicity and demonstration purposes, we're using `printf()`.
