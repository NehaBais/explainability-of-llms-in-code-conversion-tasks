#include <stdbool.h>
#include <stdio.h>

void printLogic(bool a, bool b) {
  printf("a and b is %s\n", a && b ? "true" : "false");
  printf("a or b is %s\n", a || b ? "true" : "false");
  printf("not a is %s\n", !a ? "false" : "true");
}

int main() {
  bool a = true;
  bool b = false;
  printLogic(a, b);
  return 0;
}