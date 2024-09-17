#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  int a = std::stoi(argv[1]);
  int b = std::stoi(argv[2]);

  std::cout << "sum:              " << a + b << "\n";
  std::cout << "difference:       " << a - b << "\n";
  std::cout << "product:          " << a * b << "\n";
  std::cout << "integer quotient: " << (a / b)
            << "\n"; // truncates towards zero
                     // C++ uses floor division, not true division
  std::cout << "remainder:        " << a % b
            << "\n"; // same sign as first operand
  return 0;
}