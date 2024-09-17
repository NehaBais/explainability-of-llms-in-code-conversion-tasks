#include <iostream>
int main() {
  int num1, num2;
  std::cout << "Enter your first number: ";
  std::cin >> num1;
  std::cout << "\nEnter your second number: ";
  std::cin >> num2;
  if (num1 == num2) {
    std::cout << num1 << " equals " << num2 << std::endl;
  } else if (num1 > num2) {
    std::cout << num1 << " is greater than " << num2 << std::endl;
  } else {
    std::cout << num1 << " is less than " << num2 << std::endl;
  }
}