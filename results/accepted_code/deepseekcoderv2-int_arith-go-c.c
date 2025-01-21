#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d / %d = %d\n", a, b, a / b);  // truncates towards zero
  printf("%d %% %d = %d\n", a, b, a % b); // same sign as first operand
  // no exponentiation operator in C, you would need to implement it manually or
  // use a library if available
  return 0;
}