#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a and b: %d\n", a && b);
  printf("a or b: %d\n", a || b);
  printf("not a: %d\n", !a);
}

int main() {
  logic(true, false);  // Output should be "a and b: 0", "a or b: 1", "not a: 1"
  logic(false, true);  // Output should be "a and b: 0", "a or b: 1", "not a: 0"
  logic(true, true);   // Output should be "a and b: 1", "a or b: 1", "not a: 0"
  logic(false, false); // Output should be "a and b: 0", "a or b: 0", "not a: 1"

  return 0;
}