#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

int main() {
  logic(1, 0); // Test the function with some values.
  return 0;
}