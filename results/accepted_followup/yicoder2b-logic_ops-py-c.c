#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a and b: %s\n", (a && b) ? "true" : "false");
  printf("a or b: %s\n", (a || b) ? "true" : "false");
  printf("not a: %s\n", (!a) ? "true" : "false");
}