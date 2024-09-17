#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  printf("Sum: %d\n", a + b);
  printf("Difference: %d\n", a - b);
  printf("Product: %d\n", a * b);
  printf("Quotient (rounds towards zero): %.0f\n", (float)a / b);

  // C does not directly support the 'remainder' operation, so you need to
  // explicitly subtract the floor of the quotient.
  int remainder = a - ((a < 0 && b > 0) || (b < 0 && a > 0) ? b : a);

  printf("Remainder: %d\n",
         abs(remainder)); // Print the absolute value of the remainder.

  return 0;
}