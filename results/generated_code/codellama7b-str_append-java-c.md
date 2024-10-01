In C, you can use the `strcat()` function to append two strings together. Here's an example of how you could do this:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[10];
    strcpy(string, "abc");
    printf("%s\n", string);
    strcat(string, "def");
    printf("%s\n", string);
    return 0;
}
```
This code will output the following:

abc
abcd

Note that in C, strings are represented as arrays of characters, and you can modify them by using functions like `strcat()` to append new data to them. The `strcpy()` function is used to copy a string literal into a character array, which is then modified by the `strcat()` function to add more data.

Also, in C, you don't need to declare variables outside of a function, so I moved the declaration of `string` inside the main function.
