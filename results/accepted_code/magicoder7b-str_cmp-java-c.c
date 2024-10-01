#include <stdio.h>
#include <string.h>

int main() {
  char A[] = "Hello";
  char B[] = "Hello";
  if (strcmp(A, B) == 0)
    printf("'%s' and '%s' are lexically equal.\n", A, B);
  else
    printf("'%s' and '%s' are not lexically equal.\n", A, B);

  if (strcasecmp(A, B) == 0)
    printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B);
  else
    printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B);

  if (strcmp(A, "Java") < 0)
    printf("'%s' is lexically before '%s'.\n", A, "Java");
  else if (strcmp(A, "Java") > 0)
    printf("'%s' is lexically after '%s'.\n", A, "Java");

  return 0;
}