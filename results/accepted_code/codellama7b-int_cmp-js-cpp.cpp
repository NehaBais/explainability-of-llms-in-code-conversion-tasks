#include <iostream>

int main() {
  int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;

  if (a == b) {
    std::cout << a << " is equal to " << b << std::endl;
  } else if (a < b) {
    std::cout << a << " is less than " << b << std::endl;
  } else if (a > b) {
    std::cout << a << " is greater than " << b << std::endl;
  }

  return 0;
}