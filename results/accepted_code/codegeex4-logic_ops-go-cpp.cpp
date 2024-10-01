#include <iostream>

void printLogic(bool a, bool b) {
  std::cout << "a and b is: " << (a && b) << std::endl;
  std::cout << "a or b is: " << (a || b) << std::endl;
  std::cout << "not a is: " << (!a) << std::endl;
}

int main() {
  bool a = true, b = false;
  printLogic(a, b);
  return 0;
}