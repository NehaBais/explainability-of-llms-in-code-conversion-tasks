#include <stdio.h>

void print_logic(int a, int b) {
  printf("%d\n", a && b);
  printf("%d\n", a || b);
  printf("%d\n", !a);
}

int main() {
  int a = 1; // true
  int b = 0; // false

  print_logic(a, b);

  return 0;
}