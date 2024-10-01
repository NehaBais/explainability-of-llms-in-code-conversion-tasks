#include <stdio.h>

void print_logic(int a, int b) {
  printf("%d\n", a && b);
  printf("%d\n", a || b);
  printf("%d\n", !a);
}