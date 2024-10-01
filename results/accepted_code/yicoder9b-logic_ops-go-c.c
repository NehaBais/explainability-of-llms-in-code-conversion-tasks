#include <stdio.h>

void printLogic(int a, int b) {
  printf("a and b is %d\n", a && b);
  printf("a or b is %d\n", a || b);
  printf("not a is %d\n", !a);
}

int main() {
  printLogic(1, 0); // Replace with the values you want to test.
  return 0;
}