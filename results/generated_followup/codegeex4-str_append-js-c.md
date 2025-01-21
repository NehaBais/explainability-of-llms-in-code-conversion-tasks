The error is because C does not implicitly include function declarations for string functions when they are used. The fix is to include the `<string.h>` header file at the start of the program, which contains the declaration for `strcat()`. 

Here's the corrected code:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s1[50] = "Hello";
  strcat(s1, ", World!");
  printf("%s\n", s1);
  return 0;
}
```
