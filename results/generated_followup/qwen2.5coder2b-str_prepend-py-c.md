The error is due to the fact that `strcpy` and `strcat` are not declared in the standard C library. They need to be included using the `<string.h>` header file.

Here's a single line explanation:

The compiler is unable to find the `strcpy` and `strcat` functions because they are not part of the standard C library. To fix this, we need to include the `<string.h>` header file at the top of our code.

Here's the corrected code block:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[12]; // Assuming the length of the string is at least 9 (including the '0' and the terminating '\0')

  strcpy(s, "12345678");
  strcat(s, "0"); // by concatenation

  printf("%s\n", s);
  return 0;
}
```

In this corrected code, we've added `<string.h>` to include the function prototypes for `strcpy` and `strcat`. This allows the compiler to find these functions during compilation.
