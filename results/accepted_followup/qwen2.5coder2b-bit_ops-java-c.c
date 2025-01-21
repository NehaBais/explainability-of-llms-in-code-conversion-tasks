#include <stdio.h>

int main() {
  bitwise(5, 2);
  return 0;
}

void bitwise(int a, int b) {
  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));
  printf("NOT a: %d\n", ~a);
  printf("a << b: %d\n", a << b);                  // left shift
  printf("a >> b: %d\n", a >> b);                  // arithmetic right shift
  printf("a >>> b: %d\n", a >> b);                 // logical right shift
  printf("a rol b: %d\n", (unsigned int)a << b);   // rotate left, C99+
  printf("a ror b: %d\n", (unsigned int)(a >> b)); // rotate right, C99+
}