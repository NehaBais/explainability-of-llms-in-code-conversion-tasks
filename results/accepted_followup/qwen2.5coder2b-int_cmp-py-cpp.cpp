#include <iostream>

int main() {
  std::cout << "Enter value of a: ";
  int a = std::stoi(std::cin);

  std::cout << "Enter value of b: ";
  int b = std::stoi(std::cin);

  if (a < b) {
    std::cout << "a is less than b" << std::endl;
  } else if (a > b) {
    std::cout << "a is greater than b" << std::endl;
  } else if (a == b) {
    std::cout << "a is equal to b" << std::endl;
  }

  return 0;
}