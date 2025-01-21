#include <stdio.h>

void printLogic(int a, int b) {
  // Convert boolean values (0 or 1) to actual bools for logical operations in C
  if (a != 0)
    a = 1;
  if (b != 0)
    b = 1;

  printf("a and b is %d\n", a && b);
  printf("a or b is %d\n", a || b);
  printf("not a is %d\n", !a);
}

int main() {
  printLogic(1, 0); // Test with true (1) and false (0)
  return 0;
}