#include <math.h>
#include <stdio.h>

int main() {
  int input1, input2;

  printf("Enter two integers: ");
  scanf("%d %d", &input1, &input2);

  int sum = input1 + input2;
  printf("Sum:          %d\n", sum);

  int difference = input1 - input2;
  printf("Difference:   %d\n", difference);

  int product = input1 * input2;
  printf("Product:      %d\n", product);

  int quotient = input1 / input2;
  printf("Integer Quotient:  %d\n", quotient);

  int remainder = input1 % input2;
  printf("Remainder:    %d\n", remainder);

  int exponentiation = (int)pow(input1, input2);
  printf("Exponentiation:   %d\n", exponentiation);

  return 0;
}