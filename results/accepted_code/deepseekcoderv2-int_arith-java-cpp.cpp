#include <cstdlib> // For std::abs
#include <iostream>

int main() {
  int a, b;

  // Get the 2 numbers from the user
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  int sum = a + b;        // The result of adding 'a' and 'b'
  int difference = a - b; // The result of subtracting 'b' from 'a'
  int product = a * b;    // The result of multiplying 'a' and 'b'

  // For quotient, we use integer division which truncates towards zero
  int division = a / b;

  // For remainder, the sign matches the sign of the first operand if different
  int remainder = a % b;

  std::cout << "a + b = " << sum << std::endl;
  std::cout << "a - b = " << difference << std::endl;
  std::cout << "a * b = " << product << std::endl;
  std::cout << "quotient of a / b (truncates towards zero) = " << division
            << std::endl;
  std::cout << "remainder of a / b (sign matches first operand if different) = "
            << remainder << std::endl;

  return 0;
}