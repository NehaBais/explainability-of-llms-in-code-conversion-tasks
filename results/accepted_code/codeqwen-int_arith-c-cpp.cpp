#include <cmath>
#include <iostream>

int main() {
  int A, b;
  std::cout << "Enter two integers: ";
  std::cin >> A >> b;

  if (b == 0) {
    std::cerr << "Error: Division by zero is not allowed." << std::endl;
    return 2;
  }

  std::cout << "Sum = " << A + b << std::endl;
  std::cout << "Difference = " << A - b << std::endl;
  std::cout << "Product = " << A * b << std::endl;
  std::cout << "Quotient = " << A / b
            << std::endl; // Rounds towards zero (in C++11 and later)
  std::cout << "Remainder = " << A % b
            << std::endl; // Same sign as first operand

  return 0;
}