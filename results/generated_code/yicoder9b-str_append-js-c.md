In C language, strings are represented as character arrays and require a bit more manipulation to concatenate or print them compared to JavaScript. Here's the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello";  // We need a large enough buffer for both strings
    strcat(s1, ", World!"); // strcat is used to concatenate two strings in C
    printf("%s\n", s1);     // Print the contents of the string variable
    return 0;               // C programs generally end with a return statement
}
```
This code first declares a character array `s1` and initializes it to "Hello". The function `strcat()` is then used to append the string literal ", World!" to the existing content in s1. Finally, we use `printf()` to output the contents of `s1`.
