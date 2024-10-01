#include <stdio.h>
#define TRUE 1
#define FALSE 0

void boolean_ops(int a, int b) {
  printf("%d and %d -> %d\n", a, b, (a && b));
  printf("%d or %d -> %d\n", a, b, (a || b));
  printf("%d xor %d -> %d\n", a, b, (a ^ b));
  printf("not %d -> %d\n", a, ~a);
}

int main() {
  boolean_ops(TRUE, TRUE);
  boolean_ops(TRUE, FALSE);
  boolean_ops(FALSE, TRUE);
  boolean_ops(FALSE, FALSE);
  return 0;
}