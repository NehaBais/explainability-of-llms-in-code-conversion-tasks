The errors are due to the fact that 'malloc', 'free' functions aren't declared before usage. They are present under stdlib.h library in C. So we need to include <stdlib.h> header file at top of our program. Here is the corrected version:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Include stdlib.h library for malloc and free functions

int main() {
  char s1[20] = "Hello";
  const char *s2 = ", World";

  size_t len = strlen(s1) + strlen(s2) + 1;
  char *s3 = (char *)malloc(sizeof(char) * len); // Allocate memory for combined string

  strcpy(s3, s2);
  strcat(s3, s1);

  printf("%s\n", s3);
  free(s3);  // Don't forget to free the allocated memory after it is no longer needed.
  return 0;
}
```
