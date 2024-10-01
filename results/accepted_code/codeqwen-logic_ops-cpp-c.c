#include <stdbool.h>
#include <stdio.h>

void print_logic(bool A, bool b) {
  printf("A and b is %d\n", A && b);
  printf("A or b is %d\n", A || b);
  printf("not a is %d\n", !A);
}