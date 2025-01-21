#include <iostream>

int main() {
  int a, b;

  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  int sum = a + b;        // The result of adding 'a' and 'b'
  int difference = a - b; // The result of subtracting 'b' from 'a'
  int product = a * b;    // The result of multiplying 'a' and 'b'
  int division = a / b;   // The result of dividing 'a' by 'b' (Note: 'division'
                          // does not contain the fractional result)
  int remainder = a % b;  // The remainder of dividing 'a' by 'b'

  std::cout << "a + b = " << sum << std::endl;
  std::cout << "a - b = " << difference << std::endl;
  std::cout << "a * b = " << product << std::endl;
  std::cout << "quotient of a / b = " << division
            << std::endl; // truncates towards 0
  std::cout << "remainder of a / b = " << remainder
            << std::endl; // same sign as first operand

  return 0;
}