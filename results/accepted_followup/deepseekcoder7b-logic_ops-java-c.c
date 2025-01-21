#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a AND b: %d\n", (int)a && (int)b); // cast boolean to int for printing
  printf("a OR b: %d\n", (int)a || (int)b);
  printf("NOT a: %d\n", !(int)a);
}

int main() {
  logic(true, false); // Call the function with sample inputs.
  return 0;
}