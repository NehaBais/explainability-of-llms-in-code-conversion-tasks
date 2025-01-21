#include <stdio.h>
#include <stdlib.h>

int main() {
  char *args = getenv("argv");
  if (args == NULL) {
    fprintf(stderr, "No command line arguments provided.\n");
    return EXIT_FAILURE;
  }

  char **arg_list = args;
  int a = atoi(arg_list[1]);
  int b = atoi(arg_list[2]);

  if (a == 0 || b == 0) {
    fprintf(stderr, "Division by zero is not allowed.\n");
    return EXIT_FAILURE;
  }

  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);

  // Integer division to truncate towards zero
  int q = a / b;

  // Remainder with the same sign as the first operand
  int r1 = a % b;
  // Remainder with the same sign as the second operand
  int r2 = b % a;

  if (r1 * r2 != 0) {
    printf("integer quotient:   %d\n", q);
    printf("remainder 1:       %d\n", r1);
    printf("remainder 2:       %d\n", r2);
  } else {
    printf("integer quotient:   %d\n", q);
    printf("remainder:         0\n");
  }

  return EXIT_SUCCESS;
}