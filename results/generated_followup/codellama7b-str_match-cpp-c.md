Error: The code contains several errors related to implicit function declarations, pointer to integer conversion, and invalid operands in binary expressions.

Fix: To fix the errors, we need to include the appropriate header files for each function used in the code, such as `<string.h>` for `strcmp`, `strlen`, and `strstr`. We also need to specify the correct argument types for each function call, such as passing the second string as a pointer to its first character and the third string as a pointer to its first character.

Corrected code:
```c
#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Beginning
  if (strcmp(s1, s3) == 0) {
    printf("First string starts with second string\n");
  } else {
    printf("First string does not start with second string\n");
  }

  // End
  if (strcmp(s1 + strlen(s1) - strlen(s3), s3) == 0) {
    printf("First string ends with second string\n");
  } else {
    printf("First string does not end with second string\n");
  }

  // Anywhere
  int loc = strstr(s2, s3);
  if (loc != NULL) {
    printf("First string contains second string at location %d\n", loc - s2);
  } else {
    printf("First string does not contain second string\n");
  }

  return 0;
}
```
