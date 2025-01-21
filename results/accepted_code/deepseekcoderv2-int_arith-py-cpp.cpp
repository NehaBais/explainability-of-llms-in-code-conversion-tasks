#include <cmath> // For pow function
#include <iostream>

int main() {
  int input1, input2;

  std::cout << "Enter first integer: ";
  std::cin >> input1;
  std::cout << "Enter second integer: ";
  std::cin >> input2;

  // Sum
  int sum = input1 + input2;
  std::cout << "Sum: \t\t" << sum << std::endl;

  // Difference
  int difference = input1 - input2;
  std::cout << "Difference: \t" << difference << std::endl;

  // Product
  int product = input1 * input2;
  std::cout << "Product: \t" << product << std::endl;

  // Integer quotient (C++ division truncates towards zero)
  int integer_quotient = input1 / input2;
  std::cout << "Integer quotient: " << integer_quotient << std::endl;

  // Remainder (sign follows the first operand if they are different)
  int remainder = input1 % input2;
  std::cout << "Remainder: \t" << remainder << std::endl;

  // Exponentiation
  double exponentiation = pow(input1, input2);
  std::cout << "Exponentiation: \t" << exponentiation << std::endl;

  return 0;
}