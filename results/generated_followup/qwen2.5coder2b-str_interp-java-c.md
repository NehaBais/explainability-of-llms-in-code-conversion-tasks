The error message indicates that the `strlen` function is not recognized by the compiler because it is not included in the standard C library. In C, you need to include the `<string.h>` header file for string functions like `strlen`.

Here's the corrected code with all necessary headers:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *adjective = "little";
  char *lyric = (char *)malloc(strlen("Mary had a ") + strlen(adjective) + 1);

  if (lyric == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return EXIT_FAILURE;
  }

  snprintf(lyric, strlen("Mary had a ") + strlen(adjective) + 1,
           "Mary had a %s lamb", adjective);

  printf("%s\n", lyric);

  free(lyric);

  return EXIT_SUCCESS;
}
```
