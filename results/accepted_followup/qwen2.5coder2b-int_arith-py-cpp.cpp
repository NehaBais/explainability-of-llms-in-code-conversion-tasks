#include <iostream>

int main() {
  int input1, input2;
  std::cout << "Enter the first integer: ";
  std::cin >> input1;

  std::cout << "Enter the second integer: ";
  std::cin >> input2;

  // Sum
  int sum = input1 + input2;
  std::cout << "Sum: 		  " << sum << std::endl;

  // Difference
  int difference = input1 - input2;
  std::cout << "Difference: 	  " << difference << std::endl;

  // Product
  int product = input1 * input2;
  std::cout << "Product: 	  " << product << std::endl;

  // Integer quotient (rounding towards zero)
  int integer_quotient = input1 / input2;
  std::cout << "Integer quotient: " << integer_quotient << std::endl;

  // Float quotient
  double float_quotient = static_cast<double>(input1) / input2;
  std::cout << "Float quotient:   " << float_quotient << std::endl;

  // Whole remainder
  int whole_remainder = input1 % input2;
  std::cout << "Whole Remainder:  " << whole_remainder << std::endl;

  // Actual remainder (sign matches the sign of the first operand or second
  // operand)
  int actual_remainder =
      (input1 > 0 && input2 < 0) || (input1 < 0 && input2 > 0)
          ? -whole_remainder
          : whole_remainder;
  std::cout << "Actual Remainder: " << actual_remainder << std::endl;

  // Exponentiation
  double exponentiation = static_cast<double>(input1) * input2;
  std::cout << "Exponentiation:   " << exponentiation << std::endl;

  return 0;
}