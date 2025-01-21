#include <stdio.h>

void print_logic(int a, int b) {
  // Convert integer values (0 or 1) to boolean for comparison
  int bool_a = (a != 0);
  int bool_b = (b != 0);

  printf("a and b is %d\n", bool_a && bool_b);
  printf("a or b is %d\n", bool_a || bool_b);
  printf("not a is %d\n", !bool_a);
}

int main() {
  print_logic(1, 0); // Example usage
  return 0;
}