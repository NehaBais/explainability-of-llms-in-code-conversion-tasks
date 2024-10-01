#include <string.h>

int main() {
  // Compare two strings for exact equality
  if (strcmp("abc", "abc") == 0) {
    printf("The strings are equal\n");
  }

  // Compare two strings for inequality
  if (strcmp("abc", "def") != 0) {
    printf("The strings are not equal\n");
  }

  // Compare two strings to see if one is lexically ordered before than the
  // other
  if (strcmp("abc", "def") < 0) {
    printf("The first string is lexically before the second\n");
  }

  // Compare two strings to see if one is lexically ordered after than the other
  if (strcmp("def", "abc") > 0) {
    printf("The first string is lexically after the second\n");
  }

  // Case sensitive comparison
  if (strcmp("abc", "ABC") != 0) {
    printf("The strings are not case sensitive equal\n");
  }

  // Case insensitive comparison
  if (strcmpi("abc", "ABC") == 0) {
    printf("The strings are case insensitive equal\n");
  }

  // Compare numeric strings as numbers
  if (strcmp("123", "456") < 0) {
    printf("The first string is numerically smaller\n");
  }

  return 0;
}