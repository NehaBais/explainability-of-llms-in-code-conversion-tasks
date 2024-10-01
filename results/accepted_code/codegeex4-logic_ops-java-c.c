#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

int main() {
  bool a = 1; // true
  bool b = 0; // false

  logic(a, b);

  return 0;
}