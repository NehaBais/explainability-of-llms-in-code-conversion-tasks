 Here's how you can convert the given JavaScript code to C:

```c
#include <stdio.h>
#include <string.h> // For strcat

int main() {
    char s1[20] = "Hello"; // Create a character array (string) with initial size
    strcat(s1, ", World!"); // Append the string literal to the existing string
    printf("%s\n", s1); // Show the contents of the variable after appending
    return 0;
}
```

In this C code:
- We use a character array `s1` initialized with "Hello". The size is set considering that we might need to add more characters.
- We include `<string.h>` for the `strcat` function, which concatenates strings in C.
- After appending ", World!" using `strcat(s1, ", World!");`, we print the result with `printf("%s\n", s1);`.
