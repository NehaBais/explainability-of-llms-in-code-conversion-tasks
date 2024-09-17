#include <iostream>

int main() {
  int a, b;

  std::cin >> a >> b;

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int division = a / b;
  int remainder = a % b;

  std::cout << "a + b = " << sum << std::endl;
  std::cout << "a - b = " << difference << std::endl;
  std::cout << "a * b = " << product << std::endl;
  std::cout << "a / b = " << division << std::endl;
  std::cout << "a % b = " << remainder << std::endl;

  return 0;
}