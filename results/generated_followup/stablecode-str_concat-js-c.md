Error: `'strcat' with type 'char *(char *, const char *)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]`

Fix: Add `#include <string.h>` to include the header file, or explicitly provide a declaration for `strcat`.

Corrected code:
```c
#include <stdio.h>
#include <string.h>

int main() 
{
  char s[20] = "hello";

  printf("%s", s); // Prints the value of variable s

  char another_string[] = " there!";

  // Concatenate two strings.
  strcat(s, another_string);

  printf("Final String: %s\n", s);

  return 0;
}
```
