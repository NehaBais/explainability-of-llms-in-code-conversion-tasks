#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

int main() {
  logic(1, 0); // example usage where a = true and b = false (in C, non-zero is
               // considered as true)
  return 0;
}