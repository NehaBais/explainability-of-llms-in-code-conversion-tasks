#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s <integer1> <integer2>\n", argv[0]);
    return 1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);

  // For integer quotient in C, we use the / operator which truncates towards
  // zero.
  int quotient = a / b;
  printf("integer quotient: %d\n", quotient);

  // For remainder, the sign is determined by the first operand if they are
  // different.
  int remainder = a % b;
  printf("remainder:        %d\n", remainder);

  return 0;
}