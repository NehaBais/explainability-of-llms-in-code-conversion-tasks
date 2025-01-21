#include <iostream>
#include <string>

int main() {
  // Create an instance of std::cin to read inputs from the user
  std::cin >> int a >> int b;

  // Using if-else statements for comparison and printing messages
  if (a < b) {
    std::cout << a << " is less than " << b << std::endl;
  } else if (a == b) {
    std::cout << a << " equals " << b << std::endl;
  } else {
    std::cout << a << " is greater than " << b << std::endl;
  }

  return 0;
}