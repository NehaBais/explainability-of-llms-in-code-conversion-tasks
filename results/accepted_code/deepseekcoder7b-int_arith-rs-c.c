#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 3) {
    printf("Please provide two integer parameters.\n");
    return -1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  // Note: We are assuming the operands to be non-negative.
  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);

  // integer quotient (rounded towards zero)
  if (b != 0) {
    printf("integer quotient:  %d\n", a / b);
  } else {
    printf("Second operand can't be zero.\n");
  }

  // remainder (same sign as first operand)
  if (b != 0) {
    printf("remainder:         %d\n", a % b);
  } else {
    printf("Second operand can't be zero.\n");
  }

  return 0;
}