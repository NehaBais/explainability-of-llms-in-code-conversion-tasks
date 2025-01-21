#include <iostream>

void printLogic(bool a, bool b) {
  std::cout << "a and b is " << (a && b) << "\n";
  std::cout << "a or b is " << (a || b) << "\n";
  std::cout << "not a is " << (!a) << "\n";
}

int main() {
  bool a = true;
  bool b = false;
  printLogic(a, b);
  return 0;
}