#include <stdio.h>
#include <string.h>

int main() {
  char c[] = "cat";
  char d[] = "dog";

  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  } else {
    printf("%s is bytewise different from %s\n", c, d);
  }

  if (strcmp(c, d) < 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  } else if (strcmp(c, d) > 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  } else if (strcmp(c, d) == 0) {
    printf("%s is lexically bytewise greater than or equal to %s\n", c, d);
  } else {
    printf("%s is lexically bytewise less than or equal to %s\n", c, d);
  }

  // Case-insensitive comparison of two strings using the `strcasecmp()`
  // function from the `strings` library.
  if (strcasecmp(c, d) == 0) {
    printf("%s is case-insensitively equal to %s\n", c, d);
  } else {
    printf("%s is not case-insensitively equal to %s\n", c, d);
  }

  // Seeing that the built-in operators work bytewise and the library
  // case-folding functions interpret UTF-8, you might then ask about other
  // equality and inequality tests that interpret UTF-8.
  return 0;
}