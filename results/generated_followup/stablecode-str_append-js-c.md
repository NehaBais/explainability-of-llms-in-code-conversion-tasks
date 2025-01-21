The error in a single line is: `error: call to undeclared library function 'strcat' with type 'char *(char *, const char *)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]`.

The fix in a single line would be to include the header file `<string.h>` or explicitly provide a declaration for the `strcat` function.

Here is the corrected code in a single code block:
```c
#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "Hello";
  strcat(s1, ", World!");
  printf("%s\n", s1);
  return 0;
}
```
