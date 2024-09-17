#include <stdio.h>

int main() {
  int input1;
  int input2;

  printf("Enter first number: ");
  scanf("%d", &input1);
  printf("Enter second number: ");
  scanf("%d", &input2);

  int qq = input1 + input2;
  printf("Sum: %d\n", qq);
  int ww = input1 - input2;
  printf("Difference: %d\n", ww);
  int ee = input1 * input2;
  printf("Product: %d\n", ee);
  double rr = (double)input1 / input2;
  // int rr = input1 / input2;
  printf("Integer quotient: %d\n", (int)rr); // Not accurate
  printf("Float quotient: %.2f\n", rr);

  float tt = (float)input1 / input2;
  int uu = ((int)tt - tt) * -10;
  printf("Whole remainder: %d\n", (int)uu);
  printf("Actual remainder: %.2f\n", tt - (int)tt); // Not accurate

  int yy = 1;
  for (int i = 1; i <= input2; i++)
    yy *= input1;
  printf("Exponentiation: %d\n", yy);

  return 0;
}