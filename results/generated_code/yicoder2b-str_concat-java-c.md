The equivalent C code would be:

```c
#include <stdio.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);
  char s2[10] = s;
  strcat(s2, " literal");
  printf("%s\n", s2);
  return 0;
}
```
This program creates a string variable `s` which contains the character sequence "hello". It then prints out this value followed by another string literal " literal".
