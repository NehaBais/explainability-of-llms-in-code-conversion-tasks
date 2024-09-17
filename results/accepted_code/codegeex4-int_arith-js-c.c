#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division =
      (double)a / b; // C doesn't support float/int division, so we need to cast
                     // one of the operands to double
  int remainder = a % b;

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf(
      "a / b = %.2f\n",
      division); // Displaying up to two decimal places for the division result
  printf("a %% b = %d\n", remainder);

  return 0;
}