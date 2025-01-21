#include <stdbool.h>

void printLogic(bool a, bool b) {
  printf("a and b is %d\n", a && b);
  printf("a or b is %d\n", a || b);
  printf("not a is %d\n", !a);
}