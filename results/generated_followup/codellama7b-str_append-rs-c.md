The error occurs because the `+` operator is not defined for strings, and it is not possible to concatenate two string literals like this in C. The corrected code would be:
```c
#include <stdio.h>

int main() {
  char *hello = "Hello world";
  printf("%s\n", hello);
  return 0;
}
```
This code first assigns the string literal `"Hello world"` to a variable `hello` of type `char *`. Then, it prints the value of `hello` using the `%s` format specifier in the `printf()` function. The return statement at the end of the function ensures that the program exits with a zero exit code.
