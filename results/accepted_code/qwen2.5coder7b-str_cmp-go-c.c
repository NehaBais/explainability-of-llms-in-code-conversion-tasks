#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compareStringsCaseSensitive(const char *str1, const char *str2) {
  while (*str1 && *str2 && (*str1 == *str2)) {
    str1++;
    str2++;
  }
  return (*str1 - *str2);
}

int compareStringsCaseInsensitive(const char *str1, const char *str2) {
  while (*str1 && *str2 &&
         (tolower((unsigned char)*str1) == tolower((unsigned char)*str2))) {
    str1++;
    str2++;
  }
  return ((unsigned char)*str1 - (unsigned char)*str2);
}

int main() {
  const char *c = "cat";
  const char *d = "dog";

  if (!strcmp(c, d)) {
    printf("%s is byte-wise identical to %s\n", c, d);
  }

  if (strcmp(c, d) != 0) {
    printf("%s is byte-wise different from %s\n", c, d);
  }

  if (compareStringsCaseSensitive(c, d) > 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  }

  if (compareStringsCaseSensitive(c, d) < 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  }

  // Case insensitive comparison
  if (!strcasecmp(c, d)) {
    printf("%s is equal to %s in a case-insensitive manner.\n", c, d);
  } else {
    printf("%s is not equal to %s in a case-insensitive manner.\n", c, d);
  }

  return 0;
}