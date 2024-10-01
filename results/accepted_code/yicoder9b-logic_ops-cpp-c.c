#include <stdbool.h> // For boolean data type
#include <stdio.h>   // For printf function

void printLogic(bool a, bool b) {
  printf("a and b is %d\n", (a && b));
  printf("a or b is %d\n", (a || b));
  printf("not a is %d\n", !a);
}

int main() {
  bool a =
      true; // change these values to test the function with different inputs.
  bool b = false;
  printLogic(a, b);
  return 0;
}