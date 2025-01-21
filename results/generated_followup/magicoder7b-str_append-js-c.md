 The error message indicates that the compiler doesn't recognize `strncat` function, which is part of C standard library `<string.h>`. We need to include this header file at the top of our program to resolve this issue. 

Here's how you can correct the code:

```c
#include <stdio.h>
#include <string.h> // Include string library
#define MAX_SIZE 256

int main() {
  char s1[MAX_SIZE] = "Hello";
  strncat(s1, ", World!", MAX_SIZE); // append string literal to s1
  printf("%s\n", s1);                // print the contents of s1
  return 0;
}
```
In this corrected code, we include `<string.h>` library at the beginning of our file so that `strncat()` function is recognized by compiler. This fixed version correctly concatenates a string literal with another string in C language.
