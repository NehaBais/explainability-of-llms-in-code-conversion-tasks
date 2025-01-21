#include <stdio.h>
#define STRINGIFY2(a, b) a##b
#define STRINGIFY(a) STRINGIFY2(a, _)

int main() {
  printf("Mary had a %s lamb\n", "little");

  // You can specify order
  printf("%s had a %s lamb\n", "Mary", "little");

  // Or numbers if you prefer
  printf(STRINGIFY(0) " had a %s lamb\n", "little");
  return 0;
}