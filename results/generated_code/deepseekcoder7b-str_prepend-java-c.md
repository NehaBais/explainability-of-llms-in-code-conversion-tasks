Here's how you can achieve this in C language. Here, for prepending a string we will use strncat() function in the standard library of C:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char string[] = "def";
    
    // prepend with another string literal
    strncat(string, "abc", sizeof(string));
  
    printf("%s\n", string); 
    return 0;
}
```
The `strncat()` function is used to concatenate two strings. The first parameter is the destination array where content will be appended and the second one is the source string which gets attached at the end of the first parameter. It does not include a null character '\0' in its operation so you have manually add it before adding more characters.

