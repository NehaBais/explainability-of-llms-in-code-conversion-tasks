#include
int main() {
  int input1, input2;
  printf("Enter first number: ");
  scanf("%d", &input1);
  printf("Enter second number: ");
  scanf("%d", &input2);
  int sum = input1 + input2;
  int difference = input1 - input2;
  int product = input1 * input2;
  float quotient = (float)input1 / input2;
  int remainder = input1 % input2;
  printf("Sum:                   %d%c", sum, endl);
  printf("Difference:    %d%c", difference, endl);
  printf("Product:       %d%c", product, endl);
  printf("Quotient:      %f%c", quotient, endl);
  printf("Remainder:     %d%c", remainder, endl);
  return 0;
}