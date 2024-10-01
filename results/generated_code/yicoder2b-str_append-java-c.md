Sure, here is the equivalent C code for your Java program - 

```c
#include <stdio.h>

int main() {
    char string[10] = "abc"; // String in array will hold maximum size of string which is not recommended but okay for simplicity.
    printf("%s\n", string); // print initial string
    strcat(string, "def");  // append to the string
    printf("%s\n", string); // print final string after appending
    return 0;
}
```
In this C code, we are using `strcat()` function from <string.h> library to concatenate (append) "def" to the initial string. Then we are printing the final string to show its contents after append operation.
