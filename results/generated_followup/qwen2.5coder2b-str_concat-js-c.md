The error message indicates that the compiler does not know about the `strcpy` function, which is part of the `<string.h>` library.

To fix this issue, include the `<string.h>` header in the source file:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  char result[50];

  strcpy(result, s);
  strcat(result, " there!");

  printf("%s\n", result);

  return 0;
}
```

The corrected code is now valid and will compile without errors.
