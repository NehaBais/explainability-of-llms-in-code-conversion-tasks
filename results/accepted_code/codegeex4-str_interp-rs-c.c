#include <stdio.h>

int main() {
  printf("Mary had a %s lamb\n", "little");

  // You can specify order
  printf("%s had a %s lamb\n", "Mary", "little");

  // Named arguments are not available in C, so you would have to use the
  // positions as with the previous example.

  return 0;
}