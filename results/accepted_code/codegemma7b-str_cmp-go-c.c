#include <stdio.h>
#include <string.h>

int main() {
  const char *c = "cat";
  const char *d = "dog";

  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  }

  if (strcmp(c, d) != 0) {
    printf("%s is bytewise different from %s\n", c, d);
  }

  if (strcmp(c, d) > 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  }

  if (strcmp(c, d) < 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  }

  if (strncmp(c, d, strlen(c)) >= 0) {
    printf("%s is lexically bytewise greater than or equal to %s\n", c, d);
  }

  if (strncmp(c, d, strlen(c)) <= 0) {
    printf("%s is lexically bytewise less than or equal to %s\n", c, d);
  }

  // Case insensitive compare
  if (strcasecmp(c, d) == 0) {
    printf("%s is equal to %s (case insensitive)\n", c, d);
  } else {
    printf("%s is not equal to %s (case insensitive)\n", c, d);
  }

  return 0;
}