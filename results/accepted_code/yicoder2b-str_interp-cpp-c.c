#include <stdio.h>
#include <string.h>

int main() {
  char original[100] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";
  size_t len1, len2;

  len1 = strlen(original);
  len2 = strlen(toBeReplaced);
  if (len1 > 98 || len2 > 98) {
    printf("The size of the string is too small\n");
    return -1; // or some other way to indicate failure...
  }
  strncpy(original + len1, replacement, len2);
  original[len1 + len2] = '\0'; // append terminating null-character at the end

  printf("String after replacement: %s\n", original);
  return 0;
}