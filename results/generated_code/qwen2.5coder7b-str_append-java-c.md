In C, you can use `strcat()` function from `<string.h>` to append one string to another. Here is the equivalent C code for your Java code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    // Initialize and print the first string
    strcpy(str, "abc");
    printf("%s\n", str);
    
    // Append another string and print it
    strcat(str, "def");
    printf("%s\n", str);
    
    return 0;
}
```

Note: The `strcpy()` function is used to copy a string from one location to another. The `strcat()` function is used to append a string at the end of another string. Both functions are available in the `<string.h>` header file. Also, the target string should be large enough to hold the concatenated result.

In this program, we are creating an array of characters (which acts as our string), and using `strcpy` function to copy "abc" into it. Then, `strcat` is used to append "def" at the end of our string.
