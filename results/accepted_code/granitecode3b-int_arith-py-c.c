#include
int main() {
  int input1, input2;
  float tt;

  printf("Enter first integer: ");
  scanf("%d", &input1);

  printf("Enter second integer: ");
  scanf("%d", &input2);

  int qq = input1 + input2;
  printf("Sum: %d\n", qq);

  int ww = input1 - input2;
  printf("Difference: %d\n", ww);

  int ee = input1 * input2;
  printf("Product: %d\n", ee);

  float rr = (float)input1 / (float)input2;
  printf("Integer quotient: %f\n", int(rr));
  printf("Float quotient: %.1f\n", rr);
  tt = (float)input1 / (float)input2;
  printf("Whole Remainder: %d\n", (int(tt) - tt) * -10);
  printf("Actual Remainder: %.1f\n", tt);

  int yy = pow(input1, input2);
  printf("Exponentiation: %d\n", yy);

  return 0;
}