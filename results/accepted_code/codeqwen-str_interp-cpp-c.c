#include <stdio.h>
#include <string.h>

int main() {
  char original[50] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";

  size_t found = strstr(original, toBeReplaced) - original;
  strncpy(&original[found], replacement, sizeof(replacement) - 1);
  original[sizeof(original) - 1] = '\0';

  printf("String after replacement: %s\n", original);

  return 0;
}