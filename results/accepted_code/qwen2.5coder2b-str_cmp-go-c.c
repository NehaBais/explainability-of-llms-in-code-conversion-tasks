#include <stdio.h>
#include <string.h>

int main() {
  char c[] = "cat";
  char d[] = "dog";

  // Compare using strcoll with locale set to C (which is case insensitive)
  if (strcoll(c, d) == 0) {
    printf("%s is bytewise identical to %s\n", c, d);
  } else if (strcoll(c, d) > 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  } else if (strcoll(c, d) < 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  }

  // Test case insensitivity with strcasecmp
  int result = strcasecmp(c, d);
  if (result == 0) {
    printf("%s equal to %s\n", c, d);
  } else if (result > 0) {
    printf("%s is lexically bytewise greater than %s\n", c, d);
  } else if (result < 0) {
    printf("%s is lexically bytewise less than %s\n", c, d);
  }

  return 0;
}