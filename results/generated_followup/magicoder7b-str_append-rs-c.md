 The error in the C code is because the compiler doesn't know how to handle `strcat()`, which comes from the `<string.h>` library, so we need to include that header file or explicitly declare it before use.

The corrected code would look like this:

```c
#include <stdio.h>
#include <string.h>  // This is the fix
#define SIZE 100

int main() {
  char hello[SIZE] = "Hello world";
  printf("%s", hello);

  strcat(hello, "!!!!");
  printf("\n%s", hello);

  return 0;
}
```
