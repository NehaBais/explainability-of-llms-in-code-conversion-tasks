#include <stdio.h>

int main() {
  int a, b;

  printf("Enter first number:\n");
  scanf("%d", &a);

  printf("Enter second number:\n");
  scanf("%d", &b);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  float division =
      (float)a /
      b; // We're casting one operand to 'float' so we can get decimal results.

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %.2f\n", division); // Two decimal places.
  return 0;
}