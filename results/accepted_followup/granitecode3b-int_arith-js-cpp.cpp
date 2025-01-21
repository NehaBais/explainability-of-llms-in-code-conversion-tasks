#include <iostream>
int main() {
  int a = 5;
  int b = 3;
  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division = static_cast<double>(a) / b;
  int remainder = a % b;
  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Difference: " << difference << std::endl;
  std::cout << "Product: " << product << std::endl;
  std::cout << "Division: " << division << std::endl;
  std::cout << "Remainder: " << remainder << std::endl;
  return 0;
}