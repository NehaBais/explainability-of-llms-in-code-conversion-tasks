#include <iostream>

int main() {
  std::cout << "Enter two integers: ";
  int A, b;
  std::cin >> A >> b;
  if (A < b) {
    std::cout << A << " is less than " << b << std::endl;
  } else if (A == b) {
    std::cout << A << " equals " << b << std::endl;
  } else {
    std::cout << A << " Is greater than " << b << std::endl;
  };
  return 0;
}