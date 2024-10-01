#include <stdio.h>

int main() {
  printf("Mary had a %s lamb\n", "little");
  // You can specify order
  printf("%s had a %s lamb\n", "little", "Mary");
  // Or named arguments if you prefer
  printf("%s had a %s lamb\n", "name", "adj");
}