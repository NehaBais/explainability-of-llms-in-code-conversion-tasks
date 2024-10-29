#include <stdio.h>
#include <string.h>

int main() {
  char *c = "cat";
  char *d = "dog";

  // Comparing two strings for exact equality.
  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  } else {
    printf("%s is not bytewise identical to %s\n", c, d);
  }

  // Comparing two strings for inequality.
  if (strcmp(c, d) != 0) {
    printf("%s is bytewise different from %s\n", c, d);
  } else {
    printf("%s is not bytewise different from %s\n", c, d);
  }

  // Comparing two strings to see if one is lexically ordered before than the
  // other.
  if (strcmp(c, d) < 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  } else {
    printf("%s is not lexically bytewise less than %s\n", c, d);
  }

  // Comparing two strings to see if one is lexically ordered after than the
  // other.
  if (strcmp(c, d) > 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  } else {
    printf("%s is not lexically bytewise greater than %s\n", c, d);
  }

  // Comparing two strings for case sensitive equality.
  if (strcmp(c, d) == 0) {
    printf("Case-sensitively: %s is equal to %s\n", c, d);
  } else {
    printf("Case-sensitively: %s is not equal to %s\n", c, d);
  }

  // Comparing two strings for case insensitive equality.
  if (strcasecmp(c, d) == 0) {
    printf("Case-insensitively: %s is equal to %s\n", c, d);
  } else {
    printf("Case-insensitively: %s is not equal to %s\n", c, d);
  }

  return 0;
}