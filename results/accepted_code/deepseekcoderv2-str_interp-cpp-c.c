#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";
  char newString[256]; // Assuming the maximum length of the new string will not
                       // exceed 255 characters

  int pos = strstr(original, toBeReplaced) - original;
  if (pos >= 0 && pos < strlen(original)) {
    int len = strlen(toBeReplaced);
    for (int i = 0; i < pos; i++) {
      newString[i] = original[i];
    }
    for (int i = 0; i < strlen(replacement); i++) {
      newString[pos + i] = replacement[i];
    }
    for (int i = pos + len; i < strlen(original) + strlen(replacement) - len;
         i++) {
      newString[i] = original[i - strlen(replacement) + len];
    }
    newString[strlen(original) + strlen(replacement) - len] = '\0';
  } else {
    strcpy(newString, original);
  }

  printf("String after replacement: %s\n", newString);
  return 0;
}