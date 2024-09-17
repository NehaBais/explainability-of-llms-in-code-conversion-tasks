#include <math.h>
#include <stdio.h>

int main() {
  int input1, input2;
  printf("Enter two integers: ");
  scanf("%d %d", &input1, &input2);

  int qq = input1 + input2;
  printf("Sum: 		  %d\n", qq);

  int ww = input1 - input2;
  printf("Difference: 	  %d\n", ww);

  int ee = input1 * input2;
  printf("Product: 	  %d\n", ee);

  int rr = input1 / input2; // integer division
  printf("Integer quotient: %d\n", rr);

  float fr = (float)rr / input2; // fractional part of the result
  printf("Float quotient:   %.1f\n", fr);

  int tt = round(fr); // round to nearest integer
  printf("Whole Remainder:  %d\n", tt - rr);

  float uu = fr - (float)tt;
  printf("Actual Remainder: %.1f\n", uu * 10.0);

  int yy = pow(input1, input2); // exponentiation
  printf("Exponentiation:   %d\n", yy);

  return 0;
}