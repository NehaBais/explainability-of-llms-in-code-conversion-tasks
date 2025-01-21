#include <stdbool.h> // Include the stdbool.h library for access to boolean types and functions.
void print_logic(bool a, bool b) {
  // Printing boolean values as "true" and "false".
  printf("%s\n", true ? "true" : "false");
  // Outputting the result of  "and" and  "or" on both arguments.
  printf("a and b is %s\n", (a && b) ? "true" : "false");
  printf("a or b is %s\n", (a || b) ? "true" : "false");
  // Outputting the result of  "not" on the first argument.
  printf("not a is %s\n", (!a) ? "true" : "false");
}