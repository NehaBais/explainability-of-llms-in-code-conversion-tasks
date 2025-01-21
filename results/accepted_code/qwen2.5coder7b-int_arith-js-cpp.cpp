#include <cmath>
#include <iostream>

int main() {
  int a, b;

  // Prompt the user for input
  std::cout << "Enter first integer: ";
  std::cin >> a;
  std::cout << "Enter second integer: ";
  std::cin >> b;

  // Calculate and display the sum
  int sum = a + b;
  std::cout << "a + b = " << sum << std::endl;

  // Calculate and display the difference
  int difference = a - b;
  std::cout << "a - b = " << difference << std::endl;

  // Calculate and display the product
  int product = a * b;
  std::cout << "a * b = " << product << std::endl;

  // Calculate and display the integer quotient (towards zero)
  int division = a / b;
  std::cout << "a / b = " << division << " (towards zero)" << std::endl;

  // Calculate and display the remainder
  int remainder = a % b;
  std::cout << "a % b = " << remainder << std::endl;

  // Calculate and display the exponentiation (using pow function from cmath)
  double exponentiation = std::pow(a, b);
  std::cout << "a ^ b = " << exponentiation << std::endl;

  return 0;
}