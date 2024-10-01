This is a C++ code snippet that creates a string variable 'greeting', assigns it the value "Hello", then appends another string literal, " world!", to the end of the existing string. The modified string is then printed out using std::cout and std::endl. Here's an equivalent C code:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "Hello";
    strcat(greeting, ", world!");
    printf("%s\n", greeting);
    return 0;
}
```
In C, you can't directly append a string literal to another string variable. You need to use strcpy or strcat functions for that purpose. In this code, I used strcat function to concatenate the string literals "Hello" and ", world!". The printf function is used to print out the concatenated string variable after the appending operation.

