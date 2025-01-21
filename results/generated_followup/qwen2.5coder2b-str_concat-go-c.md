The error occurred because C does not have built-in support for string functions such as `strlen`, `strcpy`, etc. These functions are required to work with strings in C.

To fix this, you need to include the `<string.h>` header file, which contains declarations for these functions. Also, when using `strcpy` and `strcat`, make sure that the destination array is large enough to hold the concatenated string. Here's the corrected code block:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";

  // output string variable
  printf("%s\n", s);

  // this output requested by original task descrption, although
  // not really required by current wording of task description.
  printf("%s literal\n", s);

  // concatenate variable and literal, assign result to another string variable
  char s2[100]; // assuming the maximum length is 100 characters for simplicity.
  int len = strlen(s);
  strcpy(s2, s);
  strcat(s2, " literal");

  // output second string variable
  printf("%s\n", s2);

  return 0;
}
```
