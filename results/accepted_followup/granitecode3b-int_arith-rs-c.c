#include
int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s num1 num2\n", argv[0]);
    return 1;
  }
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);
  printf("integer quotient: %d (truncates towards zero)\n", a / b);
  printf("remainder:        %d (same sign as first operand)\n", a % b);

  return 0;
}