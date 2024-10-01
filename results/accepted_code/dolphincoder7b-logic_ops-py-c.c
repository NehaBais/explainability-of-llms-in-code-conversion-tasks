#include <stdbool.h>
#include <stdio.h>

bool and_logic(bool a, bool b) {
  if (a && b) {
    return true;
  } else {
    return false;
  }
}

bool or_logic(bool a, bool b) {
  if (a || b) {
    return true;
  } else {
    return false;
  }
}

void logic(bool a, bool b) {
  printf("a and b: %d\n", and_logic(a, b));
  printf("a or b: %d\n", or_logic(a, b));
  printf("not a: %d\n", !a);
}

int main() {
  logic(true, false); // a and b: 0, a or b: 1, not a: 0
  logic(false, true); // a and b: 0, a or b: 1, not a: 1
  logic(true, true);  // a and b: 1, a or b: 1, not a: 0
  return 0;
}