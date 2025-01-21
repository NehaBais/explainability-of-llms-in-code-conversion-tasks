#include <iostream>

int main() {
  int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  std::cout << a << " + " << b << " = " << (a + b) << std::endl;
  std::cout << a << " - " << b << " = " << (a - b) << std::endl;
  std::cout << a << " * " << b << " = " << (a * b) << std::endl;
  std::cout << a << " / " << b << " = " << (a / b)
            << std::endl; // truncates towards zero
  std::cout << a << " % " << b << " = " << (a % b)
            << std::endl; // same sign as first operand

  // No exponentiation operator in C++, you would need to implement it manually
  // or use a library for that.

  return 0;
}