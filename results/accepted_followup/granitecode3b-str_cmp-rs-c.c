#include <stdio.h>
#include <string.h>

int main() {
  const char *a = "hello";
  const char *b = "world";

  int result = strcmp(a, b);
  if (result == 0) {
    printf("The strings are equal\n");
  } else if (result < 0) {
    printf("%s is lexically before %s\n", a, b);
  } else {
    printf("%s is lexically after %s\n", a, b);
  }

  return 0;
}