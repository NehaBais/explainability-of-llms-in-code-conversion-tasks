#include <iostream>

int main() {
  int A, B;
  std::cin >> A >> B;

  if (A < B) {
    std::cout << A << " is less than " << B << std::endl;
  } else if (A == B) {
    std::cout << A << " Is equal to " << B << std::endl;
  } else {
    std::cout << A << " Is greater than " << B << std::endl;
  }

  return 0;
}