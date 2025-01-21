The error is because the functions `strlen` and `strcpy` are part of the C standard library, but are not included in the C file.

To fix this issue, we need to include the `<string.h>` header file at the beginning of the program which includes the declarations for these two functions.

Here's the corrected code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *prepend(char **strArr, int length) {
  int totalLength = 0;
  char *prependStr;

  for (int i = 0; i < length; i++) {
    totalLength += strlen(strArr[i]);
  }

  prependStr = (char *)malloc((totalLength + 1) * sizeof(char));
  if (!prependStr) {
    fprintf(stderr, "Memory allocation failed\n");
    return NULL;
  }

  char *tempStr = prependStr;
  for (int i = 0; i < length; i++) {
    strcpy(tempStr, strArr[i]);
    tempStr += strlen(strArr[i]);
  }

  *(tempStr) = '\0';

  return prependStr;
}

int main() {
  char *myStrings[] = {"prepended to", "my string"};
  char *prepended = prepend(myStrings, 2);
  if (prepended != NULL) {
    printf("%s\n", prepended);
    free(prepended);
  }
  return 0;
}
```

