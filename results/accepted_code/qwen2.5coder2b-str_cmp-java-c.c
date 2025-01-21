#include <stdio.h>
#include <string.h>

void compare(const char *a, const char *b) {
  int result = strcmp(a, b);

  if (result == 0)
    printf("%s and %s are lexically equal.\n", a, b);
  else
    printf("%s and %s are not lexically equal.\n", a, b);

  if (result < 0)
    printf("%s is lexically before %s\n", a, b);
  else if (result > 0)
    printf("%s is lexically after %s\n", a, b);

  printf("The lexical relationship is: %d\n", result);

  if (strcmp(a, b) == 0 || strcmp(a, b) == -1)
    printf("The case-insensitive lexical relationship is: %d\n", strcmp(a, b));
}

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");

  return 0;
}