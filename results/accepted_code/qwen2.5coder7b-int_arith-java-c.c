#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int division = a / b;
  int remainder = a % b;

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("quotient of a / b = %d\n", division);   // truncates towards 0
  printf("remainder of a / b = %d\n", remainder); // same sign as first operand

  return 0;
}