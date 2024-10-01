#include <stdio.h>

int main() {
  // In C, you need to use %s placeholder
  // for strings in printf-style statements

  printf("Mary had a %s lamb\n", "little");

  // You can specify order

  printf("%s had a %s lamb\n", "Mary", "little");

  // Or named arguments if you prefer

  printf("%s had a %s lamb\n", "Mary", "little");
}