#include <stdio.h>
#include <string.h>

int main() {
  char c[] = "cat";
  char d[] = "dog";

  // Comparing two strings for exact equality
  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  }

  // Comparing two strings for inequality
  if (strcmp(c, d) != 0) {
    printf("%s is bytewise different from %s\n", c, d);
  }

  // Comparing two strings lexically
  if (strcmp(c, d) < 0) {
    printf("%s is lexicographically less than %s\n", c, d);
  }

  if (strcmp(c, d) > 0) {
    printf("%s is lexicographically greater than %s\n", c, d);
  }

  // Case sensitive comparison
  char e[] = "Cat";
  if (strcmp(c, e) != 0) {
    printf("%s is case sensitive different from %s\n", c, e);
  }

  // Case insensitive comparison by converting to lower case or upper case
  char f[] = "CAT";
  int i;
  for (i = 0; f[i]; i++)
    if (f[i] >= 'A' && f[i] <= 'Z')
      f[i] += 32;
  if (strcmp(c, f) == 0) {
    printf("%s is case insensitive identical to %s\n", c, f);
  }

  return 0;
}