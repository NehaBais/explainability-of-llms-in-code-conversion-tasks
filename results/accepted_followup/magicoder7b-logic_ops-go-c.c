#include <stdio.h>

void printLogic(int a, int b) {
  printf("a and b is %d\n", (a && b));
  printf("a or b is %d\n", (a || b));
  printf("not a is %d\n", !a);
}

int main() {
  printLogic(1, 1); // Prints 'a and b is 1' , 'a or b is 1', 'not a is 0'
  printLogic(0, 1); // Prints 'a and b is 0' , 'a or b is 1', 'not a is 1'

  return 0;
}