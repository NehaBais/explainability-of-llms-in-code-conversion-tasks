#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

int main() {
  logic(true, true);
  logic(true, false);
  logic(false, true);
  logic(false, false);
  return 0;
}