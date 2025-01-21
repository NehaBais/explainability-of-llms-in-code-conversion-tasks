#include <stdio.h>

void logic(int a, int b) {
  // AND operator 1 if both operands are true, else 0
  int and = (a && b);

  // OR operator 1 if any of the operands is true, else 0
  int or = (a || b);

  // NOT operator 1 if operand is false, else 0
  int not_a = (!a);

  printf("a AND b: %d\n", and);
  printf("a OR b: %d\n", or);
  printf("NOT a: %d\n", not_a);
}