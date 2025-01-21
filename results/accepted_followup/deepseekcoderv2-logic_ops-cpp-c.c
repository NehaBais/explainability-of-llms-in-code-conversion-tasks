#include <stdbool.h>
#include <stdio.h>

void print_logic(bool a, bool b) {
  printf("%s and %s is %s\n", a ? "true" : "false", b ? "true" : "false",
         a && b ? "true" : "false");
  printf("%s or %s is %s\n", a ? "true" : "false", b ? "true" : "false",
         a || b ? "true" : "false");
  printf("not %s is %s\n", a ? "true" : "false", !a ? "true" : "false");
}

int main() {
  print_logic(true, true);
  print_logic(true, false);
  print_logic(false, true);
  print_logic(false, false);
  return 0;
}