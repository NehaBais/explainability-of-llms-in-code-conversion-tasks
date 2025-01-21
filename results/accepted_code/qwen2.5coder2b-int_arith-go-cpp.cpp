#include <iostream>

int main() {
  int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  std::cout << a << " + " << b << " = " << a + b << "\n";
  std::cout << a << " - " << b << " = " << a - b << "\n";
  std::cout << a << " * " << b << " = " << a * b << "\n";
  std::cout << a << "/" << b << " = " << static_cast<double>(a) / b
            << "\n"; // truncates towards zero
  std::cout << a << "%" << b << " = " << a % b
            << "\n"; // same sign as first operand

  return 0;
}