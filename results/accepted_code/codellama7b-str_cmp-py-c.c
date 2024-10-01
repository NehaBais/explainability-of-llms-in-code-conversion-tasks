#include <stdio.h>
#include <string.h>

void compare(char *a, char *b) {
  printf("a is of type %s and b is of type %s\n", a, b);
  if (strcmp(a, b) < 0) {
    printf("%s is strictly less than %s\n", a, b);
  } else if (strcmp(a, b) <= 0) {
    printf("%s is less than or equal to %s\n", a, b);
  } else if (strcmp(a, b) > 0) {
    printf("%s is strictly greater than %s\n", a, b);
  } else if (strcmp(a, b) >= 0) {
    printf("%s is greater than or equal to %s\n", a, b);
  } else if (strcmp(a, b) == 0) {
    printf("%s is equal to %s\n", a, b);
  } else {
    printf("%s is not equal to %s\n", a, b);
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