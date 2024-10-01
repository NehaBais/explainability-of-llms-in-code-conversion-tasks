#include <stdio.h>

void logic(int a, int b) {
  // AND operator
  printf("a AND b: %d\n", (a && b));

  // OR operator
  printf("a OR b: %d\n", (a || b));

  // NOT operator
  printf("NOT a: %d\n", !a);
}