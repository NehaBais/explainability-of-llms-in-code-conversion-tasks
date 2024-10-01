#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  const char *a = "abc";
  char b[] = "Bac";

  // Strings are coerced to const char* when borrowed and needed
  if (strcmp(a, b) == 0)
    printf("The strings are equal\n"); // exact equality
  else if (strcmp(a, b) < 0)
    printf(
        "The first string is lexically before the second\n"); // first < second
  else
    printf(
        "The first string is lexically after the second\n"); // first > second

  // case-insensitives:
  if (strcasecmp(a, b) == 0)
    printf(
        "Both strings are equal when ignoring case\n"); // equality ignore case
  else if (strcasecmp(a, b) < 0)
    printf("The first string is lexically before the second when ignoring "
           "case\n"); // first < second ignore case
  else
    printf("The first string is lexically after the second when ignoring "
           "case\n"); // first > second ignore case
  return 0;
}