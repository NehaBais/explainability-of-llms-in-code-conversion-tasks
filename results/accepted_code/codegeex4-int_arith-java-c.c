#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int quotient = (int)((double)a / b); // truncates towards zero
  int remainder = a % b;               // same sign as first operand

  printf("Sum: %d\n", sum);
  printf("Difference: %d\n", difference);
  printf("Product: %d\n", product);
  printf("Quotient: %d\n", quotient);
  printf("Remainder: %d\n", remainder);

  return 0;
}