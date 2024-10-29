#include <stdio.h>

void boolean_ops(int a, int b) {
  printf("%d and %d -> %d\n", a, b, a && b);
  printf("%d or %d -> %d\n", a, b, a || b);
  // In C, XOR can be performed with ^ operator but for boolean values we often
  // use != (not equals)
  printf("%d xor %d -> %d\n", a, b, a != b);
  printf("not %d -> %d\n", a, !a);
}

int main() {
  boolean_ops(1, 1); // true and true
  boolean_ops(1, 0); // true and false
  boolean_ops(0, 1); // false and true
  boolean_ops(0, 0); // false and false

  return 0;
}