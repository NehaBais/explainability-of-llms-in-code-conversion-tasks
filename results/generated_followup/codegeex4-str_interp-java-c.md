The error is due to implicit function declarations being deprecated in C99, leading to compiler errors when calling functions like malloc() and free() which are declared in the stdlib.h library but not implicitly included. To fix this, we need to explicitly include the stdlib.h header file at the top of the code.

Here's the corrected code:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  char *adjective = "little";
  char *lyric = malloc(40 * sizeof(char)); // assuming maximum length of string is 40 characters

  sprintf(lyric, "Mary had a %s lamb", adjective);

  printf("%s\n", lyric);

  free(lyric); // Free allocated memory
  return 0;
}
```
