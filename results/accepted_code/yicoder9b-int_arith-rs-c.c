#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Please provide exactly two command line arguments\n");
    return -1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);
  if (b != 0) {
    printf("integer quotient: %d\n", a / b); // truncates towards zero
    printf("remainder:        %d\n", a % b); // same sign as first operand
  } else {
    printf("Cannot compute quotient and remainder when second number is 0.\n");
  }

  return 0;
}