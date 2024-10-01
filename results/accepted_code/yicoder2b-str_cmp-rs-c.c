#include <ctype.h> // for toupper function
#include <stdio.h>
#include <string.h>

int main() {
  const char *a = "abc";
  char b[4] = {'B', 'a', 'c', '\0'}; // equivalent to "Bac"

  if (strcmp(a, b) == 0)
    printf("The strings are equal\n");
  if (strcmp(a, b) != 0)
    printf("The strings are not equal\n");
  if (strcmp(a, b) > 0)
    printf("The first string is lexically after the second\n"); // equivalent to
                                                                // a > &b
  if (strcmp(a, b) < 0)
    printf("The first string is lexically before the second\n"); // equivalent
                                                                 // to a < &b
  if (strcmp(a, b) >= 0)
    printf(
        "The first string is not lexically before the second\n"); // equivalent
                                                                  // to a <= &b
  if (strcmp(a, b) <= 0)
    printf(
        "The first string is not lexically after the second\n"); // equivalent
                                                                 // to a >= &b

  // Case-insensitive comparison
  char a2[4] = {'A', 'B', 'c', '\0'}; // equivalent to "ABC"
  char b2[3] = {'b', 'a', 'C', '\0'}; // equivalent to "bac"
  if (strcasecmp(a2, b2) == 0)
    printf(
        "Both strings are equal when ignoring case\n"); // equivalent to
                                                        // a.eq_ignore_ascii_case(&b2)

  return 0;
}