#include <stdio.h>

int main() {
  int A, B;

  printf("Enter two integers: ");
  scanf("%d %d", &A, &B);

  printf("sum:              %d\n", A + B);
  printf("difference:       %d\n", A - B);
  printf("product:          %d\n", A * B);
  printf("integer quotient: %d\n", A / B); // truncates towards zero
  printf("remainder:        %d\n", A % B); // same sign as first operand

  return 0;
}