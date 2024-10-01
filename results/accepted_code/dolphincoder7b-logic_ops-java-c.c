#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a AND b: %s\n", (a && b) ? "true" : "false");
  printf("a OR b: %s\n", (a || b) ? "true" : "false");
  printf("NOT a: %s\n", (!a) ? "true" : "false");
}

int main() {
  logic(true, false);

  return 0;
}