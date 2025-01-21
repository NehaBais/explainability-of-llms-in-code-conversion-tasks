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