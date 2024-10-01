#include <stdio.h>

void boolean_ops(int a, int b) {
  printf("%d and %d -> %d\n", a, b, a && b);
  printf("%d or %d -> %d\n", a, b, a || b);
  // For XOR in C, you can use the bitwise exclusive OR operator (^).
  printf("%d xor %d -> %d\n", a, b, a ^ b);
  printf("not %d -> %d\n", a, !a);
}

int main() {
  boolean_ops(1, 1); // Note: C uses int instead of bool for boolean values. The
                     // common practice is to use 0 for false and any non-zero
                     // value (typically 1) for true.
  boolean_ops(1, 0);
  boolean_ops(0, 1);
  boolean_ops(0, 0);

  return 0;
}