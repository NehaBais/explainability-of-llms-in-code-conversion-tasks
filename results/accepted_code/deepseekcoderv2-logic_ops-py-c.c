#include <stdio.h>

void logic(int a, int b) {
  printf("a and b: %d\n", a && b);
  printf("a or b: %d\n", a || b);
  printf("not a: %d\n", !a);
}

int main() {
  logic(1, 1); // Example usage with true values
  return 0;
}