#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}