#include <stdio.h>

void main() {
  printf("Mary had a %s lamb\n", "little");
  // You can specify order
  printf("%s had a %s lamb\n", "Mary", "little");
  // Or named arguments if you prefer
  printf("%s had a %s lamb\n", "name", "adj", "Mary", "little");
}