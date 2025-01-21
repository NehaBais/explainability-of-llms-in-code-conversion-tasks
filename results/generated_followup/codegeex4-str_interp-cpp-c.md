The error occurs because `memmove` expects its first argument to be a pointer, but it receives an integer. The fix is to get the correct pointer from the offset calculated by subtracting the length of the string to be replaced from the position found with `strstr`.

Here's the corrected version:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb.";
  const char toBeReplaced[] = "X";
  char replacement[] = "little";

  // Get the length of the strings
  int len_original = strlen(original);
  int len_toBeReplaced = strlen(toBeReplaced);

  // Find the position of the substring
  char *pos = strstr(original, toBeReplaced);

  if (pos != NULL) {
    int pos_index = pos - original;

    // Move memory after the replaced string to right by length of replacement
    // string
    memmove(pos + strlen(replacement), pos + len_toBeReplaced,
            len_original - pos - len_toBeReplaced);

    // Copy the replacement string into position
    strncpy(original + pos_index, replacement, strlen(replacement));
  }

  printf("String after replacement: %s\n", original);
  return 0;
}
```
