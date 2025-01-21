#include <stdio.h>

void print_logic(int a, int b) {
  printf("a and b is %d\n", (a && b));
  printf("a or b is %d\n", (a || b));
  printf("not a is %d\n", !a);
}

// New main function that will call the print_logic function.
int main() {
  print_logic(1, 0); // replace with desired values
  return 0;
}