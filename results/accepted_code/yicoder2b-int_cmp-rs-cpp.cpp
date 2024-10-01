#include <iostream>

int main() {
  int num1, num2;
  std::cout << "Enter the first integer:";
  std::cin >> num1;
  std::cout << "Enter the second integer:";
  std::cin >> num2;

  if (num1 < num2) {
    std::cout << "The first number is less than the second." << std::endl;
  } else if (num1 == num2) {
    std::cout << "The numbers are equal." << std::endl;
  } else if (num1 > num2) {
    std::cout << "The first number is greater than the second." << std::endl;
  };
  return 0;
}