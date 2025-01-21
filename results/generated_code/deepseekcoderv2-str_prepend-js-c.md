 Here's the equivalent C code for your JavaScript snippet:

```c
#include <stdio.h>
#include <string.h> // For strcat

int main() {
    char s[50] = ", World"; // Assuming a maximum string length of 49 characters plus null terminator
    char hello[] = "Hello";

    // Prepend the string literal to the existing string variable
    strcpy(s, ""); // Clear the initial content of s
    strcat(s, hello);
    strcat(s, ", World");

    printf("%s\n", s);

    return 0;
}
```

This C code does the following:
1. Defines a character array `s` with an initial size of 50 characters (including space for the null terminator).
2. Initializes the string literal `"Hello"` and places it before the content of `s`.
3. Uses the `strcat` function to concatenate `hello` and `", World"` to `s`.
4. Prints the final concatenated string using `printf`.
