#include <stdio.h>
#include <string.h>

void compare(char *a, char *b) {
  printf("\n%s is of type %s and %s is of type %s\n", a, "char*", b, "char*");

  if (strcmp(a, b) > 0)
    printf("%s is strictly greater than  %s\n", a, b);
  if (strcmp(a, b) >= 0)
    printf("%s is greater than or equal to %s\n", a, b);
  if (strcmp(a, b) < 0)
    printf("%s is strictly less than  %s\n", a, b);
  if (strcmp(a, b) <= 0)
    printf("%s is less than or equal to %s\n", a, b);
  if (strcmp(a, b) == 0)
    printf("%s is equal to %s\n", a, b);
  else
    printf("%s is not equal to %s\n", a, b);
}

int main() {
  compare("apple", "banana");
  compare("cat", "ant");
  return 0;
}