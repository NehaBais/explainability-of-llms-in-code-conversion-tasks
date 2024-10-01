#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "ABCD";

  // Case sensitive comparison
  if (str1 == str2)
    printf("Both strings are equal\n");
  else if (strcmp(str1, str2) == 0)
    printf("Both strings are identical lexically\n");
  else
    printf("Strings are not equal\n");

  // Case insensitive comparison
  if ((strcasecmp(str1, str2)) == 0)
    printf("Both strings are identical lexically (case insensitive)\n");
  else
    printf("Strings are not identical lexically\n");

  return 0;
}