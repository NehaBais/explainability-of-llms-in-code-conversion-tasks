In Rust, we use the `String` type to store mutable strings in memory. In C, we use arrays of characters to achieve this.
Here is how we can convert the given code into C:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "World"; // create an array for the string
    strcat(s, "Hello  "); // append "Hello " to the end of the string
    printf("%s\n", s); // print the modified string
    return 0;
}
```
In this code, we first declare a character array `s` and initialize it with `"World"`. Then, we use the `strcat()` function to concatenate the other string ("Hello ") at the beginning of the array. Finally, we print the result using `printf()`. The `%s\n` format specifier tells `printf()` that the argument should be a C-style string, so it will automatically append a newline character after printing.
