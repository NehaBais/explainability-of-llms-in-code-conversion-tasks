#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s <a> <b>\n", argv[0]);
    return 1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division =
      (double)a /
      b; // Ensure division is done in floating point for accurate quotient
  int remainder = a % b;

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %.0f (rounds towards zero)\n",
         division); // Indicate rounding towards zero
  printf("a %% b = %d (remainder sign matches the sign of a if different from "
         "b)\n",
         remainder);

  return 0;
}