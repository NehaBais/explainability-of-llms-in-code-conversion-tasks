In C language, we don't have built-in support for dynamic strings (like in Golang) so we must use character arrays. Concatenating two strings is done by copying each character from the first string to the second one.

Here's how you can achieve what you want in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Create a char array with enough space for the new string.
    // Here, we assume that "Hello, world!" will be the final string.
    char s[14] = "world!"; 

    // Copy "Hello, " to the beginning of s.
    strcpy(s, "Hello, ");
    
    // Prepend 's' with the literal "Hello, ".
    strcat(s, "Hello, ");
  
    printf("%s\n", s);

    return 0;
}
```
This code creates a string `"world!"` in the character array `s`, then prepends the literal `"Hello, "` to the beginning of it. We use the standard library functions `strcpy()` and `strcat()` to copy strings.

Please note that the size of the character array 's' must be enough to hold both source and destination strings plus a null-terminator. In this case, we have reserved 14 characters for `"Hello, world!"`. If you need to use larger strings, adjust the size of `s` accordingly.
