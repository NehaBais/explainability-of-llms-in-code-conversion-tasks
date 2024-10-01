#include <stdio.h>
#include <string.h> // for strcmp

int main() {
  char a[] = "abc";
  char b[] = "Bac";

  if (strcmp(a, b) == 0)
    printf("The strings are equal\n");
  else
    printf("The strings are not equal\n");

  // strcmp returns:
  // -1: a < b
  //  0: a == b
  // +1: a > b

  if (strcmp(a, b) > 0)
    printf("The first string is lexically after the second\n");
  else
    printf("The first string is not lexically before the second\n");

  return 0;
}