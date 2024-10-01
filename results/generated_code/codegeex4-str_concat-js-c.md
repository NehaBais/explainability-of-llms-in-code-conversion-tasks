C doesn't support strings in the same way JavaScript does. The closest way to replicate this functionality would be using C-style strings (null-terminated arrays of characters). Below is a simple conversion of your code.

```c
#include <stdio.h>

int main() {
    char s[] = "hello";
    char concat_str[] = " there!";
    
    printf("%s%s\n", s, concat_str);
    
    return 0;
}
```
In this C code:

- We're using `char` arrays to store our strings. This is the closest equivalent of JavaScript string variables.
- `printf` function is used to print the content of the variables. `%s` is a format specifier for C-style strings, and `\n` adds a newline at the end of each printed line.

Note that in C you can't concatenate strings as easily as with JavaScript's "+" operator. You need to manually copy character by character to the new array or use more advanced functions like `strncat()` from `<string.h>`.
