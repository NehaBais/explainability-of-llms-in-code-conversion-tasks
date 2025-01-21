The error occurs because `malloc` and `free` functions are not implicitly declared in C, unlike in C++.

To fix this issue, include the `<stdlib.h>` header file which contains declarations for `malloc` and `free`.

Here is the corrected code:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char original[] = "Mary had a X lamb.";
  const char *toBeReplaced = "X";
  char replacement[] = "little";

  // Find the position of toBeReplaced in original
  char *pos = strstr(original, toBeReplaced);

  if (pos != NULL) {
    // Calculate new length after replacement
    int len = strlen(original) - strlen(toBeReplaced) + strlen(replacement);

    // Allocate memory for the new string
    char *newString = malloc(len + 1); // +1 for null terminator

    if (newString == NULL) {
      printf("Memory allocation failed.\n");
      return 1;
    }

    // Copy part before toBeReplaced
    strncpy(newString, original, pos - original);
    newString[pos - original] = '\0';

    // Concatenate replacement
    strcat(newString, replacement);

    // Concatenate the rest of original after toBeReplaced
    strcat(newString, pos + strlen(toBeReplaced));

    printf("String after replacement: %s\n", newString);

    // Free allocated memory
    free(newString);
  } else {
    printf("Substring not found.\n");
  }

  return 0;
}
```
