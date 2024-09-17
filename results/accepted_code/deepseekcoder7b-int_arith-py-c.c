#include <stdio.h>
int main() {
  int input1 = 18; // Uncomment and replace with scanf if you want user inputs
  // scanf("%d", &input1);
  int input2 = 7; // Uncomment and replace with scanf if you want user inputs
  // scanf("%d", &input2);

  int sum = input1 + input2;
  printf("Sum: %d\n", sum);

  int diff = input1 - input2;
  printf("Difference: %d\n", diff);

  int product = input1 * input2;
  printf("Product: %d\n", product);

  float quotient_int = (float)input1 / input2;
  printf("Integer Quotient(rounded towards zero): %d\n", (int)quotient_int);

  int remainder = input1 % input2;
  printf("Remainder: %d\n", remainder);

  if (input2 != 0) { // Error handling for divide by zero
    long long expo = (long long)input1 * (long long)input1;
    printf("Exponentiation: %lld\n", expo);
  } else {
    printf("Cannot compute, second input is 0.\n");
  }

  return 0;
}