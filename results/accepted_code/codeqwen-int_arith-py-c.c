#include <stdio.h>

int main() {
  int input1, input2;

  printf("Enter the first number: ");
  scanf("%d", &input1);

  printf("Enter the second number: ");
  scanf("%d", &input2);

  int qq = input1 + input2;
  printf("Sum: 		  %d\n", qq);

  int ww = input1 - input2;
  printf("Difference: 	  %d\n", ww);

  int ee = input1 * input2;
  printf("Product: 	  %d\n", ee);

  int rr = input1 / input2;
  printf("Integer quotient: %d\n", rr);
  float tt = (float)input1 / input2;
  float uu = tt - (int)tt;
  printf("Whole Remainder:  %f\n", int(uu));
  if ((input1 < 0 && input2 > 0) || (input1 > 0 && input2 < 0)) {
    uu *= -10;
  } else if (input1 == 0 || input2 == 0) {
    uu = tt;
  }
  printf("Actual Remainder: %f\n", uu);

  int yy = input1;
  for (int i = 1; i < input2; ++i) {
    yy *= input1;
  }
  printf("Exponentiation: 	  %d\n", yy);

  return 0;
}