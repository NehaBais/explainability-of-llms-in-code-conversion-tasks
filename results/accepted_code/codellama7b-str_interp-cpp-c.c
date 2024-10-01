#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";
  char newString[];

  int index = strstr(original, toBeReplaced);

  if (index != -1) {
    strncpy(newString, original, index);
    strncat(newString, replacement, strlen(replacement));
    strncat(newString, original + index + 1, strlen(original) - index - 1);
  } else {
    strcpy(newString, original);
  }

  printf("String after replacement: %s\n", newString);

  return 0;
}