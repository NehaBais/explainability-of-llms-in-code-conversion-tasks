#include <stdio.h>

void print_logic(int a, int b) {
  printf("%s %s\n", (a && b) ? "true" : "false", (a || b) ? "true" : "false");
  printf("not a is %s\n", !a ? "true" : "false");
}