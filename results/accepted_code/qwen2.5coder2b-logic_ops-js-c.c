#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", (a && b));
  printf("a OR b: %d\n", (a || b));
  printf("NOT a: %d\n", !a);
}

int main() {
  logic(1, 0); // Call the function with arguments 1 and 0
  return 0;
}