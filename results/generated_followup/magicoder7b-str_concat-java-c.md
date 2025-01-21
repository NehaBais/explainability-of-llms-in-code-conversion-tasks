 The error message indicates that the C compiler is not recognizing functions like 'malloc', 'strlen', 'strcpy' or 'free'. These are part of standard library in C, so it is expected to be included (either via `<stdlib.h>` or `<string.h>`).
Adding these headers will fix the error.

```c
#include <stdio.h>
#include <stdlib.h> // for malloc and free
#include <string.h> // for strlen, strcpy and strcat

int main() {
  char *s = "hello";
  printf("%s literal\n", s);
  char *s2 = malloc(strlen(s) + 9); // allocate memory
  strcpy(s2, s); // copy content of s into s2
  strcat(s2, " literal"); // append " literal" to s2
  printf("%s\n", s2);
  free(s2); // free allocated memory
  return 0;
}
```
The corrected code now includes the headers for standard library functions used in the code, and the error is gone.
