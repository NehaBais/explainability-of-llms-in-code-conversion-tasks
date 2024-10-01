#include <stdio.h>
#define STRINGIFY2(a, b) a##b
#define STRINGIFY(a) STRINGIFY2(a, _)

int main() {
  printf("Mary had a %s lamb\n", "little");

  // You can specify order
  printf("%s had a %s lamb\n", "Mary", "little");

  // Or named arguments if you prefer. Note that C does not support named
  // placeholders in string formatting, so we use numbers for placeholders.
  printf(STRINGIFY(Mary) " had a %s lamb\n", "little");
  return 0;
}