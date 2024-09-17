#include <stdio.h>

int main() {
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  // For division, C uses integer division by default. But if you wish to have
  // float result, cast inputs to floats: (float)a /(float) b
  int quotient = a / b;
  int remainder = a % b;

  printf("Sum of the numbers: %d\n", sum);
  printf("Difference between them: %d\n", difference);
  printf("Product of the numbers: %d\n", product);
  // For quotient and remainder, C doesn't differentiate automatically. The
  // above code considers integer division

  return 0;
}