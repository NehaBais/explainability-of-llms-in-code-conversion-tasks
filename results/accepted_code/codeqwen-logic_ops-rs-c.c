#include <stdbool.h>
#include <stdio.h>

void boolean_ops(bool A, bool B) {
  printf("%d and %d -> %d\n", A, B, A && B);
  printf("%d or %d -> %d\n", A, B, A || B);
  printf("%d xor %d -> %d\n", A, B, A ^ B);
  printf("not %d -> %d\n", A, !A);
}

int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);
  return 0;
}