#include <iostream>
#include <string>

int main() {
  int a, b;

  // Get two integers from the user
  std::cout << "Enter first integer: ";
  std::cin >> a;
  std::cout << "Enter second integer: ";
  std::cin >> b;

  // Display a message based on the comparison of the two integers
  if (a < b) {
    std::cout << a << " is less than " << b << std::endl;
  } else if (a == b) {
    std::cout << a << " equals " << b << std::endl;
  } else if (a > b) {
    std::cout << a << " is greater than " << b << std::endl;
  }

  return 0;
}