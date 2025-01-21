#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";

  char *newString;
  int len, pos_len;

  len = strlen(original);
  newString = (char *)malloc((len + 1) * sizeof(char));

  if ((pos = strstr(original, toBeReplaced)) != NULL) {
    strncpy(newString, original, pos - original);
    newString[pos - original] = '\0';
    strcat(newString, replacement);
    strcat(newString, &original[pos + strlen(toBeReplaced)]);
  } else {
    strcpy(newString, original);
  }

  printf("String after replacement: %s \n", newString);

  free(newString);
  return 0;
}