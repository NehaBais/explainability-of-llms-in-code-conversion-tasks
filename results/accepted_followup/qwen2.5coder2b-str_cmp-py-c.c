#include <ctype.h>
#include <stdio.h>
#include <string.h>

void compare(const char *a, const char *b) {
  printf("%s is of type %s and %s is of type %s\n", a,
         (a != NULL) ? "string" : "NULL", b, (b != NULL) ? "string" : "NULL");

  if (strcmp(a, b) < 0) {
    printf("%s is strictly less than %s\n", a, b);
  } else if (strcmp(a, b) == 0) {
    printf("%s is equal to %s\n", a, b);
  } else if (strcmp(a, b) > 0) {
    printf("%s is strictly greater than %s\n", a, b);
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