The equivalent C code for the given Rust program is:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[20] = "hello";  // Create string variable with initial value as 'hello'

    printf("%s\n", s); // Output the contents of the first string

    strcat(s, " world"); // Concatenate another string to the first string
    printf("%s\n", s); // Output the concatenated string

    return 0;
}
```
This program creates a char array ('s') and assigns it the value 'hello'. It then prints the contents of this variable using printf() function. After that, it concatenates another string (" world") to the existing value and again prints out the combined string. The `strcat()` function in C is used for concatenation of two strings. In C, strings are represented as arrays of characters ending with a null character '\0'.
