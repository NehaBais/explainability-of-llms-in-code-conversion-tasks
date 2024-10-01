
Here's the C code that meets your requirements:
```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str = "12345678";
    strcat(str, "9!");
    printf("%s\n", str);
    return 0;
}
```
In C, you can't assign a string literal to a variable directly like in Python. Instead, you need to use `malloc` to allocate memory for the string and then copy it using `strcpy`.

Also, note that in C, strings are represented as arrays of characters terminated by a null character (`\0`). So when concatenating two strings, you can't just append one to another. Instead, you need to allocate enough memory for both strings and then use `strcat` to copy them into the new string.
