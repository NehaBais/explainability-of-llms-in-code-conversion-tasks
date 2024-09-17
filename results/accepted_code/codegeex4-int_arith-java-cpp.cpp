#include <cmath>
#include <iostream>

int main() {
  int a, b;

  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  int sum = a + b;        // The result of adding 'a' and 'b'
  int difference = a - b; // The result of subtracting 'b' from 'a'
  int product = a * b;    // The result of multiplying 'a' and 'b'
  int division = a / b;   // The result of dividing 'a' by 'b'
  int remainder = a % b;  // The remainder of dividing 'a' by 'b'

  std::cout << "a + b = " << sum << "\n";
  std::cout << "a - b = " << difference << "\n";
  std::cout << "a * b = " << product << "\n";
  std::cout << "quotient of a / b = " << division << " (truncates towards 0)\n";
  std::cout << "remainder of a / b = " << remainder
            << " (same sign as first operand)\n";

  return 0;
}