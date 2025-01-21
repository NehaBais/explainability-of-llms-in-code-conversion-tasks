#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", (a && b));
  printf("a OR b: %d\n", (a || b));
  printf("NOT a: %d\n", (!a));
}

int main() {
  int a = 1;
  int b = 0;

  logic(a, b);

  return 0;
}