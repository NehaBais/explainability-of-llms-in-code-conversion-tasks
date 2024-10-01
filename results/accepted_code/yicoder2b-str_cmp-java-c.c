#include <stdio.h>
#include <string.h>
int main() {
  char A[] = "Hello";
  char B[] = "Hello";
  if (strcmp(A, B) == 0) {
    printf("'%s' and '%s' are lexically equal\n", A, B);
  } else {
    printf("'%s' and '%s' are not lexically equal\n", A, B);
  }

  char C[] = "Hello";
  char D[] = "HELLO";
  if (strcmp(C, D) == 0) {
    printf("'%s' and '%s' are case-insensitive lexically equal\n", C, D);
  } else {
    printf("'%s' and '%s' are not case-insensitive lexically equal\n", C, D);
  }
  return 0;
}