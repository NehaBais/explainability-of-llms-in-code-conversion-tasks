#include <stdio.h>

int main() {
  int input1, input2;

  // printf("Enter two integers: ");
  // scanf("%d %d", &input1, &input2);

  input1 = 18;
  input2 = 7;

  int qq = input1 + input2;
  printf("Sum: 		  %d\n", qq);
  int ww = input1 - input2;
  printf("Difference: 	  %d\n", ww);
  int ee = input1 * input2;
  printf("Product: 	  %d\n", ee);

  float rr = (float)input1 / input2;
  int integer_quotient = rr;
  float float_quotient = (int)(rr + 0.5f); // Round towards zero
  printf("Integer quotient: %d\n", integer_quotient);
  printf("Float quotient:   %f\n", float_quotient);

  int tt = input1 / input2;
  int whole_remainder = tt;
  if (input1 * input2 < 0) {
    // If the product is negative, subtract one from the remainder
    whole_remainder -= 1;
  }
  printf("Whole Remainder:  %d\n", whole_remainder);
  printf("Actual Remainder: %d\n", tt);

  int yy =
      (int)(pow(input1, input2) + 0.5f); // Use pow function for exponentiation
  printf("Exponentiation:   %d\n", yy);

  return 0;
}