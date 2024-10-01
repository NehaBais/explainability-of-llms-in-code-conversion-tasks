#include <iostream>
#include <string>

bool logic(const bool &a, const bool &b) {
  std::cout << "a and b:" << (a && b) << std::endl;
  std::cout << "a or b:" << (a || b) << std::endl;
  std::cout << "not a:" << !a << std::endl;
}