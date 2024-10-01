#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char a[] = "abc";
  char b[] = "Bac";

  if (strcmp(a, b) == 0) {
    printf("The strings are equal\n");
  }
  if (strcmp(a, b) != 0) {
    printf("The strings are not equal\n");
  }
  if (strcmp(a, b) > 0) {
    printf("The first string is lexically after the second\n");
  }
  if (strcmp(a, b) < 0) {
    printf("The first string is lexically before the second\n");
  }

  // Case-insensitive comparison
  char a_lower[] = "abc", b_lower[] = "bac";
  int i;

  for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
    if (tolower(a[i]) != tolower(b[i])) {
      break;
    }
  }

  if (a[i] == '\0' && b[i] == '\0') {
    printf("Both strings are equal when ignoring case\n");
  } else {
    printf("The strings are not equal even when ignoring case\n");
  }

  return 0;
}