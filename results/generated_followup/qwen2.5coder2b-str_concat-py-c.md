The error occurs because C does not support implicit function declarations for system functions such as `malloc`, `strlen`, `strcpy`, `strcat`, and `free`. This means that you need to explicitly include their headers in your code.

The corrected code block is as follows:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s1 = "hello";
  char *s2;

  // Concatenate s1 and " world"
  s2 = (char *)malloc((strlen(s1) + strlen(" world")) * sizeof(char));
  if (s2 == NULL)
    printf("Memory allocation failed.\n");
  else {
    strcpy(s2, s1);
    strcat(s2, " world");
    printf("%s\n", s2);
    free(s2);
  }

  // Concatenate s1 and " world"
  s2 = (char *)malloc((strlen(s1) + strlen(" world")) * sizeof(char));
  if (s2 == NULL)
    printf("Memory allocation failed.\n");
  else {
    strcpy(s2, s1);
    strcat(s2, " world");
    printf("%s\n", s2);
    free(s2);
  }

  // Concatenate s1 with ", " and "mom"
  s2 = (char *)malloc((strlen(s1) + strlen(", ") + strlen("mom")) *
                      sizeof(char));
  if (s2 == NULL)
    printf("Memory allocation failed.\n");
  else {
    strcpy(s2, s1);
    strcat(s2, ", ");
    strcat(s2, "mom");
    printf("%s\n", s2);
    free(s2);
  }

  // Concatenate s1 with ", " and "mom"
  s2 = (char *)malloc((strlen(s1) + strlen(", ") + strlen("mom")) *
                      sizeof(char));
  if (s2 == NULL)
    printf("Memory allocation failed.\n");
  else {
    strcpy(s2, s1);
    strcat(s2, ", ");
    strcat(s2, "mom");
    printf("%s\n", s2);
    free(s2);
  }

  return 0;
}
```
