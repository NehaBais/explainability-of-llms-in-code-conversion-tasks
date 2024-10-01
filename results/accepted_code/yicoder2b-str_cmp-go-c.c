#include <stdio.h>
#include <string.h>

int main() {
  char *a = "cat";
  char *b = "dog";

  // Comparing two strings for exact equality
  if (strcmp(a, b) == 0)
    printf("%s is bytewise identical to %s\n", a, b);
  else if (strcmp(a, b) != 0)
    printf("%s is bytewisely different from %s\n", a, b);
  // In C language string comparison is not the same as Golang.
  // We cannot directly compare two strings for lexical comparison.

  return 0;
}