#include
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  float division =
      (float)a /
      b; // Casting to float to avoid integer division and get decimal result
  int remainder = a % b;

  printf("a + b = %d
", sum);
  printf("a - b = %d
", difference);
  printf("a * b = %d
", product);
  printf("a / b = %.2f (rounded)
", division); //%.2f is used to print only 2 decimal places
  printf("a %% b = %d (remainder matches sign of first operand)
", remainder);

  return 0;
}