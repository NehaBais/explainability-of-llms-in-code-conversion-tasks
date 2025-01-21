The error is due to the fact that `strcat` function is not declared in C language. To resolve this, we need to include `<string.h>` header.

The fix is to add `<string.h>` at the beginning of the code and the corrected code looks like this:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "12345678";
  strcat(str, "9!");

  printf("%s\n", str);
  return 0;
}
```
