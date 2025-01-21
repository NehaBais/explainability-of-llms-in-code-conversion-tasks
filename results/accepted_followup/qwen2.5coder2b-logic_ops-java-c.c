#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

int main() {
  // Example usage:
  logic(true, true);   // Output: a AND b: 1
                       //         a OR b: 1
                       //         NOT a: 0
  logic(true, false);  // Output: a AND b: 0
                       //         a OR b: 1
                       //         NOT a: 1
  logic(false, true);  // Output: a AND b: 0
                       //         a OR b: 1
                       //         NOT a: 1
  logic(false, false); // Output: a AND b: 0
                       //         a OR b: 0
                       //         NOT a: 1

  return 0;
}