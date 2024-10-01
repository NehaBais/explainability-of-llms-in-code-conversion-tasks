#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  // only same types can be compared
  char A[] = "abc";
  char b[] = "Bac";

  // Strings are coerced to &str when borrowed and needed
  if (strcmp(A, b) == 0) {
    printf("The strings are equal\n");
  } else if (strcmp(A, b) > 0) {
    printf("The first string is lexically after the second\n");
  } else if (strcmp(A, b) < 0) {
    printf("The first string is lexically before the second\n");
  }

  // case-insensitive comparisons:
  char A2[50];
  char b2[50];
  int i;

  for (i = 0; A[i] != '\0'; i++) {
    A2[i] = tolower(A[i]);
  }
  A2[i] = '\0';

  for (i = 0; b[i] != '\0'; i++) {
    b2[i] = tolower(b[i]);
  }
  b2[i] = '\0';

  if (strcmp(A2, b2) == 0) {
    printf("Both strings are equal when ignoring case\n");
  } else if (strcmp(A2, b2) > 0) {
    printf(
        "The first string is lexically after the second when ignoring case\n");
  } else if (strcmp(A2, b2) < 0) {
    printf(
        "The first string is lexically before the second when ignoring case\n");
  }

  return 0;
}