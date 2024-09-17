#include <iostream>

int main() {
  int n1, n2;
  std::cout << "Enter the first number: ";
  std::cin >> n1;
  std::cout << "Enter the second number: ";
  std::cin >> n2;

  if (n1 < n2) {
    std::cout << n1 << " is less than " << n2 << std::endl;
  } else if (n1 == n2) {
    std::cout << n1 << " is equal to " << n2 << std::endl;
  } else {
    std::cout << n1 << " is greater than " << n2 << std::endl;
  }

  return 0;
}