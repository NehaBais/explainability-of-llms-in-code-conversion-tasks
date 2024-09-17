#include <stdio.h>

int main() {
  int a, b;

  printf("enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("\n%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);

  if (b != 0) {                              // avoid divide by zero
    printf("%d / %d = %d\n", a, b, a / b);   // truncates towards 0
    printf("%d mod %d = %d\n", a, b, a % b); // same sign as first operand
  } else {
    printf("Cannot divide by zero.\n");
  }

  return 0;
}