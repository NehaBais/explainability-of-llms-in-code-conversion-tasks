#include <stdio.h>
#include <string.h>

void compareStrings(char *A, char *B) {
  if (strcmp(A, B)) {
        printf("'%s' and '%s' are not lexically equal.\n", A, B));
  } else {
        printf("'%s' and '%s' are lexically equal.\n", A, B));
  }

  if (strcasecmp(A, B))) {
        printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B));
    }
  else {
        printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B));
  }

  int comparison = strcmp(A, B);
  if (comparison < 0) {
        printf("'%s' is lexically before '%s'.\n", A, B));
  } else if (comparison > 0) {
        printf("'%s' is lexically after '%s'.\n", A, B));
  }

  int caseInsensitiveComparison = strcasecmp(A, B);
  if (caseInsensitiveComparison < 0) {
        printf("'%s' is case-insensitive lexically before '%s'.\n", A, B));
  } else if (caseInsensitiveComparison > 0) {
        printf("'%s' is case-insensitive lexically after '%s'.\n", A, B));
  }

  int finalComparison = strcmp(A, B);
  if (finalComparison < 0) {
        printf("The lexical relationship between '%s' and '%s' is that '%s' comes before '%s'.\n", A, B, A, B));
  } else if (finalComparison > 0) {
        printf("The lexical relationship between '%s' and '%s' is that '%s' comes after '%s'.\n", A, B, A, B));
  }
}

int main() {
  char *str1 = "Hello";
  char *str2 = "hello";

  compareStrings(str1, str2);

  return 0;
}