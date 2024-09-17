#include <iostream>

int main() {
  // Get the 2 numbers from command line arguments
  int A, b;
  std::cout << "Enter two integers: ";
  std::cin >> A >> b;

  int sum = A + b; // The result of adding 'A' and 'b' (Note: integer addition
                   // is discouraged in print statements due to confusion with
                   // string concatenation)
  int difference = A - b; // The result of subtracting 'b' from 'A'
  int product = A * b;    // The result of multiplying 'A' and 'b'
  int division = A / b;   // The result of dividing 'A' by 'b' (Note: 'division'
                          // does not contain the fractional result)
  int remainder = A % b;  // The remainder of dividing 'A' by 'b'

  std::cout << "A + b = " << sum << std::endl;
  std::cout << "A - b = " << difference << std::endl;
  std::cout << "A * b = " << product << std::endl;
  std::cout << "quotient of a / b = " << division << std::endl;
  std::cout << "remainder of a / b = " << remainder << std::endl;

  return 0;
}