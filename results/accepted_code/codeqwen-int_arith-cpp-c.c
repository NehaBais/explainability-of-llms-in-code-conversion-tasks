#include <stdio.h>

int main() {
  int A, b;
  printf("Enter two integers: ");
  scanf("%d %d", &A, &b);
  printf("A+b = %d\n", A + b);
  printf("A-b = %d\n", A - b);
  printf("A*b = %d\n", A * b);
  printf("A/b = %d, remainder %d\n", A / b, A % b);
  return 0;
}