#include <stdio.h>

int main() {
  int a, b; // Get the 2 numbers from command line arguments
  scanf("%d %d", &a, &b);

  // Addition
  int sum = a + b;
  printf("sum of %d and %d is %d\n", a, b, sum);

  // Subtraction
  int difference = a - b;
  printf("difference of %d and %d is %d\n", a, b, difference);

  // Multiplication
  int product = a * b;
  printf("product of %d and %d is %d\n", a, b, product);

  // Quotient (truncates towards 0)
  int quotient = a / b;
  printf("quotient of %d divided by %d is %d\n", a, b, quotient);

  // Remainder (same sign as the first operand)
  int remainder = a % b;
  if (remainder < 0 && a > 0 || a < 0 && b > 0 || a > 0 && b < 0) {
    printf("remainder of %d divided by %d is %d (same sign as first operand)\n",
           a, b, remainder);
  } else {
    printf("remainder of %d divided by %d is %d\n", a, b, remainder);
  }

  return 0;
}