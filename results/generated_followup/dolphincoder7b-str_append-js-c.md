The error occurs because `strcpy()` and `strcat()` are not provided by the standard C library, but by the `<string.h>` header file. To resolve this issue, we need to include the `<string.h>` header file at the beginning of the program. 

The fix involves adding `#include <string.h>` at the top of the code. After the inclusion of the header file, both `strcpy()` and `strcat()` functions are available for use in the code.

Here's the corrected version of the C code:

```c
#include  <stdio.h>
#include  <string.h>

int main() {
  char s1[100];
  strcpy(s1, "Hello");
  strcat(s1, ", World!");
  printf("%s\n", s1);
  return 0;
}
```
