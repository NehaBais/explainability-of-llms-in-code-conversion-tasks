#include <math.h> // For pow function
#include <stdio.h>

int main() {
  int a, b;

  // Get two integers from the user
  printf("Enter first integer: ");
  scanf("%d", &a);
  printf("Enter second integer: ");
  scanf("%d", &b);

  // Calculate and display the sum
  int sum = a + b;
  printf("a + b = %d\n", sum);

  // Calculate and display the difference
  int difference = a - b;
  printf("a - b = %d\n", difference);

  // Calculate and display the product
  int product = a * b;
  printf("a * b = %d\n", product);

  // Calculate and display the integer quotient (rounding towards zero)
  int division = a / b;
  printf("a / b (integer part) = %d\n", division);

  // Calculate and display the remainder
  int remainder = a % b;
  printf("a %% b = %d\n", remainder);

  // Calculate and display the exponentiation (using pow function from math.h)
  double power = pow(a, b);
  printf("a ^ b = %.0f\n", power); // Using %.0f to get an integer result

  return 0;
}