#include <stdio.h>

// Function to perform logical operations on two boolean values
void logic(bool a, bool b) {
  // Print "a and b:"
  printf("a and b: %d\n", a && b);

  // Print "a or b:"
  printf("a or b: %d\n", a || b);

  // Print "not a:"
  printf("not a: %d\n", !a);
}

int main() {
  // Example usage
  logic(true, false);  // Output should be "a and b: 0", "a or b: 1", "not a: 1"
  logic(false, true);  // Output should be "a and b: 0", "a or b: 1", "not a: 0"
  logic(true, true);   // Output should be "a and b: 1", "a or b: 1", "not a: 0"
  logic(false, false); // Output should be "a and b: 0", "a or b: 0", "not a: 1"

  return 0;
}