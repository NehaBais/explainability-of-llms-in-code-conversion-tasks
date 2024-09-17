#include <stdio.h>

void bitwise(int a, int b) {
  printf("%d AND %d: %d\n", a, b, (a & b));
  printf("%d OR %d: %d\n", a, b, (a | b));
  printf("%d XOR %d: %d\n", a, b, (a ^ b));
  printf("NOT %d: %d\n", a, ~a);
  printf("%d << %d: %d\n", a, b, (a << b)); // left shift
  printf("%d >> %d: %d\n", a, b, (a >> b)); // arithmetic right shift
}

int main() {
  bitwise(10, 3); // Example usage
  return 0;
}