Sure, here's how you can convert that code from Go to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[10] = "world!";
    strcpy(s + 5, "Hello, ");
    printf("%s", s);  // prints: Hello, world!
    return 0;
}
```
In this C code, we declare a character array `s` and assign it the value "world!". We then use the `strcpy()` function to append "Hello, " to the end of our string (starting at index 5). Finally, we print out the modified string using `printf()`.
