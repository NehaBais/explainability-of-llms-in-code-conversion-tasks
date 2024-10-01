#include <stdio.h>
int main() {
  bool a = true, b = false; // initialize two boolean variables

  // Call the function to print logic results
  print_logic(a, b);

  return 0;
}

void print_logic(bool a, bool b) {
  printf("%s and %s is %s\n", (a ? "true" : "false"), (b ? "true" : "false"),
         (a && b) ? "true" : "false");
  printf("%s or %s is %s\n", (a ? "true" : "false"), (b ? "true" : "false"),
         (a || b) ? "true" : "false");
  printf("not %s is %s\n", (a ? "true" : "false"), (!a) ? "true" : "false");
}