#include <stdio.h>

int main() {
  // get two integers from user input
  int num1, num2;
  printf("Enter first integer: ");
  scanf("%d", &num1);
  printf("Enter second integer: ");
  scanf("%d", &num2);

  // get the sum of the two numbers
  int qq = num1 + num2;
  printf("Sum: %d\n", qq);

  // get the difference of the two numbers
  int ww = num1 - num2;
  printf("Difference: %d\n", ww);

  // get the product of the two numbers
  int ee = num1 * num2;
  printf("Product: %d\n", ee);

  // calculate the integer quotient and print it
  float rr = (float)num1 / num2; // typecast int to float for division
  int quot = (int)rr;
  printf("Integer quotient: %d\n", quot);

  // print the float quotient
  printf("Float quotient: %f\n", rr);

  float tt = num1 / (float)num2; // typecast int to float for division
  int uu = (int)(tt - (float)tt);
  // check if the remainder sign is same as that of the first number or second
  // number
  printf("Whole Remainder: %d\n",
         (uu < 0 && num1 > 0 || uu >= 0 && num1 < 0) ? -1 * uu : uu);
  // print actual remainder
  printf("Actual Remainder: %f\n",
         uu / ((float)(10 * -1))); // typecast int to float for division

  // calculate the exponentiation of the two numbers and print it
  int yy = num1 ^ num2;
  printf("Exponentiation: %d\n", yy);
  return 0;
}