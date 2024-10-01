#include <stdio.h>

void printLogic(int a, int b) {
  // Checking the values of a and b
  printf("a and b is %d\n", (a && b));
  printf("a or b is %d\n", (a || b));
  printf("not a is %d\n", !a);
}