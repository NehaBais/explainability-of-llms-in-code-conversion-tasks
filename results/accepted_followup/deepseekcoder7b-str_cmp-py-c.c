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
}

int main() {
  compare("YUP", "YUP");   // Compare two same string. Output will be: "'YUP' is
                           // of type String and 'YUP' is of type Non-string"
  compare("BALL", "BELL"); // Compare BALL and BELL, so output will be: "'BALL'
                           // is strictly greater than 'BELL'"
  compare("24", "123");    // Compare 24 and 123, so output will be: "'24' is
                           // strictly less than '123'"
  return 0; // indicates success of main function. Equivalent to python's
            // sys.exit(0)
}