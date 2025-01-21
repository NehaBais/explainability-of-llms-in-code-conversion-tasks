#include <stdio.h>
#include <string.h>

void compareStrings(char *A, char *B) {
  if (strcmp(A, B))) {
        printf("'%s' and '%s' are not lexically equal.\n", A, B));
    }
  else {
        printf("'%s' and '%s' are lexically equal.\n", A, B));
  }

  if (strcasecmp(A, B)))) {
        printf("'%s' is case-insensitive lexically before '%s'.\n", A, B));
    }
  else if (strcasecmp(A, B))){
        printf("'%s' is case-insensitive lexically after '%s'.\n", A, B));
    }
}

int main() {
  char *str1 = "Hello";
  char *str2 = "hello";

  compareStrings(str1, str2);

  return 0;
}