#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d / %d = %d\n", a, b, a / b);  // truncates towards 0
  printf("%d %% %d = %d\n", a, b, a % b); // same sign as first operand

  return 0;
}