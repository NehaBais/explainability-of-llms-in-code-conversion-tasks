 The error in the C code is due to not including the `string.h` library, which contains the definition for the `strcat()` function. When compiling C99 or later standards, ISO does not support implicit function declarations anymore, hence we need to provide an explicit declaration of functions we use.

The fix would be to include the `string.h` library by adding `#include <string.h>` at the top of our file.

Here's the corrected C code:
```c
#include <stdio.h>
#include <string.h>
#define SIZE 1024

int main() {
  char greeting[SIZE] = "Hello";
  strcat(greeting, ", world!");
  printf("%s\n", greeting);

  return 0;
}
```
In the corrected code: The `string.h` library has been included at the top of our file, allowing us to use the function `strcat()`. This function concatenates a second string onto the first one (in-place), returning a pointer to the start of the resulting string.

Please note that this code will only work if you have SIZE large enough to hold both strings after concatenation. If not, you might end up with buffer overflow which could lead to undefined behavior.
