#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("Sum: %d\n", a + b);
  printf("Difference: %d\n", a - b);
  printf("Product: %d\n", a * b);
  printf("Integer Quotient: %d\n", a / b);
  printf("Remainder: %d\n", a % b);
  return 0;
}