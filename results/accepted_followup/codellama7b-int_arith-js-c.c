#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[2]);
  int b = atoi(argv[3]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  float division = (float)a / b;
  int remainder = a % b;

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %f\n", division);
  printf("a %% b = %d\n", remainder);

  return 0;
}