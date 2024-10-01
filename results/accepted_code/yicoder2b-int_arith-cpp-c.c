#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two integers:\n");
  scanf("%d %d", &a, &b);
  printf("\na + b = %d", a + b);
  printf("\na - b = %d", a - b);
  printf("\na * b = %d", a * b);
  if (b != 0) {
    printf("\n%d / %d = %d remainder %d", a, b, a / b, a % b);
  } else {
    printf("\na / b is undefined as b cannot be zero.");
  }
  return 0;
}