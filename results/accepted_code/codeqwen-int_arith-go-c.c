#include <stdio.h>

int main() {
  int A, b;
  printf("enter two integers: ");
  scanf("%d %d", &A, &b);
  printf("%d + %d = %d\n", A, b, A + b);
  printf("%d - %d = %d\n", A, b, A - b);
  printf("%d * %d = %d\n", A, b, A * b);
  printf("%d / %d = %d\n", A, b, A / b); // truncates towards 0
  if (A % b >= 0) {
    printf("%d %% %d = %d\n", A, b, A % b); // same sign as first operand
  } else {
    int rem = A % b;
    rem += b;
    printf("%d %% %d = %d\n", A, b, rem);
  }
  // no exponentiation operator
  return 0;
}