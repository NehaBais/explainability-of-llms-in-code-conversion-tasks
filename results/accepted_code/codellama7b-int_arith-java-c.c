#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int division = a / b;  // truncates towards 0
  int remainder = a % b; // same sign as first operand

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("quotient of a / b = %d\n", division);
  printf("remainder of a / b = %d\n", remainder);

  return 0;
}