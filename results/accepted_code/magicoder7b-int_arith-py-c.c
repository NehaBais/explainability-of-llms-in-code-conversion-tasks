#include <stdio.h>
#define PRECISION 9

void printFloat(float value, int precision) {
  char buffer[PRECISION +
              20]; // Additional space for the decimal point and potential sign
  sprintf(buffer, "%.*f", precision, value);
  printf("%s", buffer);
}

int main() {
  int input1 = 18;
  int input2 = 7;

  // For user inputs, use scanf instead of hard-coding values.
  // scanf("%d %d", &input1, &input2);

  int qq = input1 + input2;
  printf("Sum: 		%d\n", qq);
  int ww = input1 - input2;
  printf("Difference: 	%d\n", ww);
  int ee = input1 * input2;
  printf("Product: 	%d\n", ee);
  float rr = (float)input1 / input2;
  printFloat(rr, PRECISION);
  printf("\n");
  // float tt = floor(input1 / input2);
  int uu = input1 % input2;
  printf("Remainder: 	%d\n", uu);
  printf("Exponentiation:   %d\n", input1 ^ input2);

  return 0;
}