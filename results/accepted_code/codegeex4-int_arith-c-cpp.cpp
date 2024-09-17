#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    std::cerr << "Error: Not enough arguments" << std::endl;
    return 1;
  }

  int a = std::atoi(argv[argc - 2]);
  int b = std::atoi(argv[argc - 1]);

  if (b == 0) {
    std::cerr << "Error: Division by zero is not allowed" << std::endl;
    return 2;
  }

  // sum
  std::cout << "a + b = " << a + b << std::endl;

  // difference
  std::cout << "a - b = " << a - b << std::endl;

  // product
  std::cout << "a * b = " << a * b << std::endl;

  // integer quotient
  std::cout << "a / b = "
            << (static_cast<long long>(a) / static_cast<long long>(b))
            << std::endl;

  // remainder
  std::cout << "a % b = " << (a % b) << std::endl;

  return 0;
}