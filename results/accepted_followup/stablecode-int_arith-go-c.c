#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  int exponentiation = 1;
  for (int i = 0; i < b; i++) {
    exponentiation *= a;
  }

  printf("%d ^ %d = %.0f\n", a, b,
         (float)exponentiation); // same sign as first operand
  return 0;
}