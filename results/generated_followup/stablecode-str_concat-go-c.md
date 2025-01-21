The error `extraneous ')' before ';'` occurs at line 13, where we try to concatenate two strings using the `strcat` function:

Here's the corrected code in a single fenced code block:
```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[20] = "hello";

  printf("%s\n", s);

    strcat(s, " literal"));

    printf("%s\n", s);

    return 0;
}
```
