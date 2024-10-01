The equivalent C code would be:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[5] = "def";
    strncpy(string, "abc", strlen("abc"));
    printf("%s\n", string);  // Prints: abcdef
    return 0;
}
```
This code does exactly the same as your Java program. The C language also includes a library for string manipulation. We use `strncpy()` to copy "abc" into our string variable and then print it out. Note that in this case we're using strlen("abc") to get the length of "abc", which is exactly what you needed when prepending to the string literal.
