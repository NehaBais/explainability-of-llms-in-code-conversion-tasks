#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << std::boolalpha << (a && b) << std::endl;
  std::cout << "a OR b: " << std::boolalpha << (a || b) << std::endl;
  std::cout << "NOT a: " << std::boolalpha << !a << std::endl;
}