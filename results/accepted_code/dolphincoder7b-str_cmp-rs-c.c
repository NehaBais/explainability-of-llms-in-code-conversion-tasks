#include <stdio.h>
#include <string.h>

int main(void) {
  char a[] = "abc";
  char b[] = "Bac";

  // equal
  if (strcmp(a, b) == 0)
    printf("The strings are equal\n");

  // not equal
  if (strcmp(a, b) != 0)
    printf("The strings are not equal\n");

  // lexical comparison
  if (strcmp(a, b) < 0)
    printf("The first string is lexically before the second\n");
  if (strcmp(a, b) > 0)
    printf("The first string is lexically after the second\n");

  char a2[4];
  char b2[4];

  // case-insensitive comparison
  strcpy(a2, "ABC");
  strcpy(b2, "Bac");

  // equal ignoring case
  if (strcasecmp(a2, b2) == 0)
    printf("Both strings are equal when ignoring case\n");

  return 0;
}