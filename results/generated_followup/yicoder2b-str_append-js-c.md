The error in the above C code is due to the fact that `strcat` function is not declared anywhere and it's being invoked with a type (`char *(char *, const char *)`) which is not correct according to ISO C99 and later.

To solve this problem, you have to include the header <string.h> in your C code and explicitly provide an appropriate declaration for `strcat` function. It will look like this:

```c
#include <stdio.h>
#include <string.h> // Include the string library here

int main() {
  char s1[] = "Hello";
  strcat(s1, ", World!");
  printf("%s\n", s1);
  return 0;
}
```
Now the `strcat` function should be correctly called without any issues.
