The errors are due to not including the standard library headers `<stdlib.h>` for malloc() and free() functions. These function declarations aren't implicitly visible in C as per ISO C99 and later standards. 

Here is a corrected version of your C code:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // added to include malloc() and free() functions

int main() {
  char s[] = "12345678";
  char prepend[] = "0";

  // Calculate the length of strings and allocate memory
  int len_s = strlen(s);
  int len_prepend = strlen(prepend);
  char *result = (char *)malloc(sizeof(char) * (len_s + len_prepend + 1)); // malloc included here

  // Copy the prepend string and concatenate with original one.
  strcpy(result, prepend);
  strcat(result, s);

  printf("%s\n", result);
  free(result); // free included here
  return 0;
}
```
