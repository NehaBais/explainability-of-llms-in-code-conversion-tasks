#include <iostream>
#include <string>

int main() {
  double num1 = 3.14;
  std::string str2 = "3.14";

  // Convert str2 to double and compare
  if (num1 != std::stod(str2)) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }

  return 0;
}