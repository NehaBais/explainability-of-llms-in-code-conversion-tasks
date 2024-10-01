#include <stdio.h>

// Declare and define the 'logic' function
void logic(int a, int b) {

  printf("a and b: %d\n", a && b);
  printf("a or b: %d\n", a || b);
  printf("not a: %d\n", !a);
}

// Main function to test the 'logic' function
int main() {

  int a = 1; // First logical value
  int b = 0; // Second logical value

  // Call the 'logic' function with the provided arguments
  logic(a, b);

  return 0;
}