#include <cmath>
#include <iostream>

int main() {
  int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  std::cout << a << " + " << b << " = " << a + b << "\n";
  std::cout << a << " - " << b << " = " << a - b << "\n";
  std::cout << a << " * " << b << " = " << a * b << "\n";
  std::cout << a << " / " << b << " = " << a / b
            << " (truncates towards zero)\n";
  std::cout << a << " % " << b << " = " << a % b
            << " (same sign as first operand)" << "\n";

  // Exponentiation
  double resultExponential = pow(a, b);
  std::cout << a << " ^ " << b << " = " << resultExponential << "\n";

  return 0;
}