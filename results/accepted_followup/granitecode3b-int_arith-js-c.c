#include <stdlib.h>
int main(int argc, char *argv[]) {
  if (argc != 4) {
    printf("Usage: %s <a> <b>\n", argv[0]);
    return 1;
  }

  int a = atoi(argv[2]);
  int b = atoi(argv[3]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division = (double)a / b;
  int remainder = a % b;

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %.2f\n", division); // Use %.2f to specify two decimal places
                                      // for the division result
  printf("a %% b = %d\n", remainder);

  return 0;
}