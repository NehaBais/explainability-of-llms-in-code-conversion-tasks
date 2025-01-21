#include <cstdlib> // For atoi and exit
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    std::cout << "Usage: " << argv[0] << " <integer1> <integer2>" << std::endl;
    return 1;
  }

  int a = std::atoi(argv[1]);
  int b = std::atoi(argv[2]);

  if (b == 0) {
    std::cout << "Error: Division by zero is not allowed." << std::endl;
    return 2;
  }

  std::cout << "a + b = " << a + b << std::endl;
  std::cout << "a - b = " << a - b << std::endl;
  std::cout << "a * b = " << a * b << std::endl;
  std::cout << "a / b (integer quotient) = " << (a / b)
            << std::endl; // truncates towards zero
  std::cout << "a % b (remainder, sign matches first operand) = " << (a % b)
            << std::endl; // sign matches the sign of the first operand

  return 0;
}