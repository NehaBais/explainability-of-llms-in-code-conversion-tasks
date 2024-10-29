Here is the equivalent C code for your JavaScript example:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb";
    char little[] = "big";
    
    // Find and replace 'X' with 'little' in the original string 
    for(int i = 0; i < 4; ++i) {
        if (original[9+i] == 'X') {
            strncpy(&original[9], little, 4);
            break;
        }
    }
    
    printf("%s", original); // prints "Mary had a big lamb"
    return 0;
}
```
In C, strings are not mutable directly like in JavaScript. Instead of the `replace` function we use here the string manipulation functions provided by standard library for strings: strncpy().  This code will replace 'X' with "big". Note that you need to specify the size for the `strncpy()`, which is not automatically deduced like in JavaScript.

