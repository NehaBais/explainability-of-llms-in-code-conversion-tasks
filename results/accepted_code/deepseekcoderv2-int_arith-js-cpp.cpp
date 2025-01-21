#include <cstdlib> // For std::atoi
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <a> <b>" << std::endl;
    return 1;
  }

  int a = std::atoi(argv[1]);
  int b = std::atoi(argv[2]);

  // Calculate the results
  int sum = a + b;
  int difference = a - b;
  int product = a * b;

  // Integer quotient (C++ division rounds towards zero)
  int quotient = a / b;

  // Remainder
  int remainder = a % b;

  // Exponentiation (not directly supported in C++, you might need to use a
  // library or custom function)
  double exponentiation = std::pow(a, b);

  // Output the results
  std::cout << "a + b = " << sum << std::endl;
  std::cout << "a - b = " << difference << std::endl;
  std::cout << "a * b = " << product << std::endl;
  std::cout << "a / b = " << quotient << std::endl;
  std::cout << "a % b = " << remainder << std::endl;
  std::cout << "a ^ b (exponentiation) = " << exponentiation << std::endl;

  return 0;
}