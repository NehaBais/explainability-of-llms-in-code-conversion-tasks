#include <limits.h> // for CHAR_BIT
#include <stdio.h>

void bitwise(int a, int b) {
  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));
  printf("NOT a: %d\n", ~a);
  printf("a << b: %d\n", (a << b)); // left shift
  printf("a >> b: %d\n", (a >> b)); // arithmetic right shift

  // logical right shift
  int mask = -1;
  mask = mask >> b;
  printf("a >>> b: %d\n", ((unsigned)a >> b) & mask);
}

int main() {
  bitwise(10, 2);
  return 0;
}