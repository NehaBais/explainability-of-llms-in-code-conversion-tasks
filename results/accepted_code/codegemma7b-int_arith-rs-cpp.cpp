#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  std::cout << "sum:              " << a + b << std::endl;
  std::cout << "difference:       " << a - b << std::endl;
  std::cout << "product:          " << a * b << std::endl;
  std::cout << "integer quotient: " << a / b
            << std::endl; // truncates towards zero
  std::cout << "remainder:        " << a % b
            << std::endl; // same sign as first operand

  return 0;
}