#include <ctype.h> // for tolower()
#include <stdio.h>
#include <string.h>

// Function to compare two strings case insensitively
int caseInsensitiveCompare(const char *str1, const char *str2) {
  while (*str1 && *str2) {
    if (tolower(*str1) != tolower(*str2)) {
      return tolower(*str1) - tolower(*str2);
    }
    str1++;
    str2++;
  }
  // If one string is shorter, it's considered less than the other.
  return *str1 - *str2;
}

int main() {
  const char *c = "cat";
  const char *d = "dog";

  // Exact equality check
  if (strcmp(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  } else {
    printf("%s is not equal to %s\n", c, d);
  }

  // Inequality check
  if (strcmp(c, d) != 0) {
    printf("%s is bytewise different from %s\n", c, d);
  } else {
    printf("%s and %s are equal\n", c, d);
  }

  // Lexical order comparison
  if (strcmp(c, d) > 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  } else if (strcmp(c, d) < 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  } else {
    printf("%s and %s are lexicographically equal\n", c, d);
  }

  // Case insensitive comparison using custom function
  if (caseInsensitiveCompare(c, d) == 0) {
    printf("%s is bytewise identical to %s under case insensitivity\n", c, d);
  } else if (caseInsensitiveCompare(c, d) > 0) {
    printf("%s is lexically greater than %s under case insensitivity\n", c, d);
  } else {
    printf("%s is lexically less than %s under case insensitivity\n", c, d);
  }

  return 0;
}