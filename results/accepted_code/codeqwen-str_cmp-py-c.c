#include <ctype.h>
#include <stdio.h>
#include <string.h>

void compare(char *a, char *B) {
  printf("\n%s is of type %s and %s is of type %s\n", A, "char*", B, "char*");

  if (strcmp(A, B) < 0) {
    printf("%s is strictly less than  %s\n", A, B);
  }
  if (strcmp(A, B) <= 0) {
    printf("%s is less than or equal to %s\n", A, B);
  }
  if (strcmp(A, B) > 0) {
    printf("%s is strictly greater than  %s\n", A, B);
  }
  if (strcmp(A, B) >= 0) {
    printf("%s is greater than or equal to %s\n", A, B);
  }

  if (strcmp(A, B) == 0) {
    printf("%s is equal to %s\n", A, B);
  } else {
    printf("%s is not equal to %s\n", A, B);
  }

  int result = strcmp(A, B);

  if (result == 0 && !strcmp(A, B)) {
    printf("%s has object identity with %s\n", A, B);
  } else {
    printf("%s has negated object identity with %s\n", A, B);
  }
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  compare("5.0", "5");

  return 0;
}