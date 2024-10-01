To convert this code from JavaScript to C, you can use `strdup` function to create a copy of the original string and then modify it by replacing the value of X with the value of `little`. Here is an example of how you can do this:
```
#include <stdio.h>
#include <string.h>

int main() {
    char *original = "Mary had a X lamb";
    char *little = "little";
    char *replaced = strdup(original);
    
    // replace the value of X with the value of little
    replaced = str_replace(replaced, "X", little);
    
    printf("%s\n", replaced); // prints Mary had a little lamb
    
    return 0;
}
```
Note that in C, strings are arrays of characters and you cannot modify them directly. Therefore, you need to create a copy of the original string using `strdup` function before modifying it. Also, note that the `str_replace` function is not a standard C function, you can use the `str_replace` from the `string.h` header file which is available in most C compilers.
