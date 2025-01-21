#include <stdbool.h>
#include <stdio.h>

void printLogic(bool a, bool b) {
  printf("a and b is %d\n", a && b);
  printf("a or b is %d\n", a || b);
  printf("not a is %d\n", !a);
}

int main() {
  printLogic(true, true);
  printLogic(false, false);
  printLogic(true, false);
  printLogic(false, true);

  return 0;
}