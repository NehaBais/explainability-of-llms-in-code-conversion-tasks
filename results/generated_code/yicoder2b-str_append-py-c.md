Sure, here is the equivalent C code for your Python program:

```c
#include <stdio.h>
int main() {
    // Declare and initialize a string variable in C
    char str[] = "12345678";
    
    // Append another string literal to the first string
    strcat(str, "9!");
    
    // Print the contents of the variable after append operation.
    printf("%s", str);
    return 0;
}
```
This program uses the `strcat()` function from the standard library to concatenate (join) the second string literal to the first string variable. The result is then printed out using `printf()`. Note that in C we must specify the length of the array for the string and append the string directly to the array as C does not provide a dynamic way to concatenate strings.
