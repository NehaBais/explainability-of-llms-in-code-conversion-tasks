The error is due to implicit function declarations being deprecated in C99, as 'malloc' and 'free' functions are not implicitly declared from the standard library headers. 
To fix this, we need to include the header file `<stdlib.h>` which contains the declarations of these functions.
Here is the corrected code:

```c
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {
  char s[9] = "12345678";
  char *prepend = "0";

  int len_s = strlen(s);
  int len_prepend = strlen(prepend);

  char *s_new = malloc(len_s + len_prepend + 1);
  strcpy(s_new, prepend);
  strcat(s_new, s);

  printf("%s\n", s_new);

  free(s_new); // don't forget to free the allocated memory

  return 0;
}
```
