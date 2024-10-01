#include <string.h>

void compare(const char *a, const char *b) {
  printf("Type of %s: %ld, type of %s: %ld\n", a, strlen(a), b, strlen(b));

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

  if (strcmp(a, b) == 0) {
    printf("%s is equal to %s\n", a, b);
  }

  if (strcmp(a, b) != 0) {
    printf("%s is not equal to %s\n", a, b);
  }

  if (a == b) {
    printf("%s has object identity with %s\n", a, b);
  }

  if (a != b) {
    printf("%s has negated object identity with %s\n", a, b);
  }
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  compare(24, 123);
  compare(5.0, 5);

  return 0;
}