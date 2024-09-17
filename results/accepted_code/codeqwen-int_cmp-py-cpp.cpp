#include <iostream>

int main() {
  int A;
  int B;

  std::cout << "Enter value of a: ";
  std::cin >> A;

  std::cout << "Enter value of b: ";
  std::cin >> B;

  if (A < B) {
    std::cout << "a is less than b" << std::endl;
  } else if (A > B) {
    std::cout << "A is greater than b" << std::endl;
  } else if (A == B) {
    std::cout << "A is equal to b" << std::endl;
  }

  return 0;
}