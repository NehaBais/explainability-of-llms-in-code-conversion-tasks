#include <stdio.h>
#include <string.h>

void compare(char *a, char *b) {
  printf("'%s' is of type %s and '%s' is of type %s\n", a,
         (strcmp(a, b) == 0) ? "String" : "Non-string", b,
         (strlen(b) != 1 && strlen(b)) ? "String" : "Non-string");

  if (strcmp(a, b) < 0) {
    printf("'%s' is strictly less than '%s'\n", a, b);
  }
  if (strcmp(a, b) <= 0) {
    printf("'%s' is lexically less or equal to '%s'\n", a, b);
  }
  if (strcmp(a, b) > 0) {
    printf("'%s' is strictly greater than '%s'\n", a, b);
  }
  if (strcmp(a, b) >= 0) {
    printf("'%s' is lexically greater or equal to '%s'\n", a, b);
  }
  if (strcmp(a, b) == 0) {
    printf("'%s' is exactly equal to '%s'\n", a, b);
  }
  if (strcmp(a, b) != 0) {
    printf("'%s' is not lexically equal to '%s'\n", a, b);
  }
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  compare("5.0", "5");
  return <｜begin▁of▁sentence｜>(
      0); // s is the status register from assembler for success of main
          // function; equivalent to python's sys.exit(0)
}