#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3)
    return -1;

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);
  printf("integer quotient: %d\n", a / b); // truncates towards zero
  printf("remainder:        %d\n", a % b); // same sign as first operand

  return 0;
}