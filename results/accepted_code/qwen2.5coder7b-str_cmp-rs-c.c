#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char a[] = "abc";
  char b[] = "Bac";

  // Strings are compared using strcmp which compares lexicographically

  if (strcmp(a, b) == 0)
    printf("The strings are equal\n");

  if (strcmp(a, b) != 0)
    printf("The strings are not equal\n");

  // For case-insensitive comparison, convert both strings to lower or upper
  // case before comparing
  int i;
  for (i = 0; a[i] != '\0'; ++i)
    a[i] = tolower(a[i]);

  for (i = 0; b[i] != '\0'; ++i)
    b[i] = tolower(b[i]);

  if (strcmp(a, b) == 0)
    printf("Both strings are equal when ignoring case\n");

  return 0;
}