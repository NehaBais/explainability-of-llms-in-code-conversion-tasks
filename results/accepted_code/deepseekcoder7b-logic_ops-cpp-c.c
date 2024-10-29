#include <stdio.h>

void print_logic(int a, int b) {
  printf("a and b is %s\n", (a && b) ? "true" : "false");
  printf("a or b is %s\n", (a || b) ? "true" : "false");
  printf("not a is %s\n", (!a) ? "true" : "false");
}

int main() {
  print_logic(1, 0);
  return 0;
}