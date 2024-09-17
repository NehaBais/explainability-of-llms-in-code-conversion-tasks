#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Please provide two integer arguments.\n");
    return -1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);
  printf("integer quotient: %.0f\n",
         (float)a / (float)b);             // truncates towards zero
  printf("remainder:        %d\n", a % b); // same sign as first operand

  return 0;
}