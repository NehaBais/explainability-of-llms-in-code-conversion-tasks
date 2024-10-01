Sure, here is how you can convert this JavaScript code to C:

```c
#include <stdio.h>

int main() {
    char s1[] = "Hello";
    strcat(s1, ", World!"); 
    printf("%s\n", s1);
    return 0;
}
```
In this C code, we have to include the string library (`<string.h>`) to use the `strcat()` function to append the second string to the first one. The program declares a character array (a string in C) and assigns it the value "Hello". Then it appends another string literal ", World!" to this array using the `strcat()` function and finally prints the string.
