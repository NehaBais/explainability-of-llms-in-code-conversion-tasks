#include <math.h>
#include <stdio.h>

int main() {
  int a, b;
  printf("enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d / %d = %d\n", a, b, a / b);  // truncates towards 0
  printf("%d %% %d = %d\n", a, b, a % b); // same sign as first operand

  // Use pow function from math.h for exponentiation
  long double result = pow(a, b);
  printf("%d ^ %d = %.0Lf\n", a, b, result);

  return 0;
}