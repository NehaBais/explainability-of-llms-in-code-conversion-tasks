The equivalent C code for the Rust program would be:

Please note that in C, we use char array (or string) instead of String. Also please note that concatenation is different from other languages where you have to take care about the memory allocation/deallocation.
```c
#include <stdio.h>
#include <string.h>
int main() {
    // Create a char array or string variable equal to any text value
    char s[] = "hello";
  
    // Show content of the variables
    printf("%s\n", s);
    
    // Concatenate original variable with another string literal.
    strncat(s, " world", sizeof(s) - strlen(s) - 1);
    
    // Show content after concatenation
    printf("%s\n", s);
}
```
In the C program, we have to make sure that there is enough space in the array for new string. We subtract already occupied memory of `s` and reserve one extra byte for null-terminating character ('\0') from total allocated size by `sizeof(s) - strlen(s) - 1`.

