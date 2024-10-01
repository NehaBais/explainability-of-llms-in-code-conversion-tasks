#include <stdio.h>

void boolean_ops(bool a, bool b) {
  printf("%d and %d -> %d\n", a, b, (a && b));
  printf("%d or %d -> %d\n", a, b, (a || b));
  printf("%d xor %d -> %d\n", a, b, (a ^ b));
  printf("not %d -> %d\n", a, (!a));
}

int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);
  return 0;
}