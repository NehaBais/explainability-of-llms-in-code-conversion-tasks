#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d / %d = %d (truncates towards 0)\n", a, b, a / b);
  printf("%d %% %d = %d (same sign as first operand)\n", a, b, a % b);

  return 0;
}