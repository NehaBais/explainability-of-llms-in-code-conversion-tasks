#include <ctype.h>
#include <stdio.h>

int compare(char *a, char *b) {
  printf("%s is of type %s and %s is of type %s\n", a, "char*", b, "char*");
  if (*a < **b)
    printf("%s is strictly less than   %s\n", a, b);
  if (*a <= *b)
    printf("%s is less than or equal to  %s\n", a, b);
  if (*a > *b)
    printf("%s is strictly greater than   %s\n", a, b);
  if (*a >= *b)
    printf("%s is greater than or equal to  %s\n", a, b);
  if (strcmp(a, b) == 0)
    printf("%s is equal to  %s\n", a, b);
  if (strcmp(a, b) != 0)
    printf("%s is not equal to  %s\n", a, b);
  if (a == b)
    printf("%s has object identity with  %s\n", a, b);
  if (a != b)
    printf("%s has negated object identity with  %s\n", a, b);

  return 0;
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  compare(24, 123);
  compare(5.0, 5);
  return 0;
}