#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int division = a / b;  // Division rounds towards zero
  int remainder = a % b; // Remainder has the same sign as the dividend

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %d\n", division);
  printf("a % b = %d\n", remainder);

  return 0;
}