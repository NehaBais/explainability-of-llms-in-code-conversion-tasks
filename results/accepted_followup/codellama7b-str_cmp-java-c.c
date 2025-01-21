#include <stdio.h>
#include <string.h>

void compare(char *A, char *B);

int main() {
  char *A = "Hello";
  char *B = "Hello";
  compare(A, B);

  A = "5";
  B = "5.0";
  compare(A, B);

  A = "java";
  B = "Java";
  compare(A, B);

  A = "ĴÃVÁ";
  B = "ĴÃVÁ";
  compare(A, B);

  A = "ĴÃVÁ";
  B = "ĵãvá";
  compare(A, B);

  return 0;
}

void compare(char *A, char *B) {
  if (strcmp(A, B) == 0) {
    printf("'%s' and '%s' are lexically equal.\n", A, B);
  } else {
    printf("'%s' and '%s' are not lexically equal.\n", A, B);
  }

  if (strcasecmp(A, B) == 0) {
    printf("'%s' and '%s' are case-insensitive equal.\n", A, B);
  } else {
    printf("'%s' and '%s' are not case-insensitive equal.\n", A, B);
  }

  if (strcmp(A, B) < 0) {
    printf("'%s' is lexically before '%s'.\n", A, B);
  } else if (strcmp(A, B) > 0) {
    printf("'%s' is lexically after '%s'.\n", A, B);
  }

  if (strcasecmp(A, B) >= 0) {
    printf("'%s' is not lexically before '%s'.\n", A, B);
  } else if (strcasecmp(A, B) <= 0) {
    printf("'%s' is not lexically after '%s'.\n", A, B);
  }

  printf("The lexical relationship is: %d\n", strcmp(A, B));
  printf("The case-insensitive lexical relationship is: %d\n",
         strcasecmp(A, B));
}