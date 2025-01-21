#include <ctype.h>
#include <stdio.h>
#include <string.h>

void compare(const char *a, const char *b) {
  printf("%s is of type %s and %s is of type %s\n", a, typeof(a), b, typeof(b));

  if (strcmp(a, b) == 0) {
    printf("%s is equal to %s\n", a, b);
  } else {
    printf("%s is not equal to %s\n", a, b);
  }

  if (strcmp(a, b) < 0) {
    printf("%s is strictly less than %s\n", a, b);
  }
  if (strcmp(a, b) <= 0) {
    printf("%s is less than or equal to %s\n", a, b);
  }
  if (strcmp(a, b) > 0) {
    printf("%s is strictly greater than %s\n", a, b);
  }
  if (strcmp(a, b) >= 0) {
    printf("%s is greater than or equal to %s\n", a, b);
  }

  // Case sensitive comparison
  if (strcasecmp(a, b) == 0) {
    printf("%s is case insensitive equal to %s\n", a, b);
  } else {
    printf("%s is not case insensitive equal to %s\n", a, b);
  }

  // Case insensitive comparison
  if (strncasecmp(a, b, strlen(a)) == 0) {
    printf("%s is case insensitive equal to %s\n", a, b);
  } else {
    printf("%s is not case insensitive equal to %s\n", a, b);
  }

  // Lexical comparison for numeric strings
  if (isdigit(*a) && isdigit(*b)) {
    int num_a = atoi(a);
    int num_b = atoi(b);
    if (num_a < num_b) {
      printf("%s is strictly less than %s\n", a, b);
    } else if (num_a > num_b) {
      printf("%s is strictly greater than %s\n", a, b);
    } else {
      printf("%s is equal to %s\n", a, b);
    }
  }
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  // Uncomment the following line to test with different types
  // compare(24, 123);
  // Uncomment the following line to test with floating point numbers
  // compare(5.0, 5);
  return 0;
}