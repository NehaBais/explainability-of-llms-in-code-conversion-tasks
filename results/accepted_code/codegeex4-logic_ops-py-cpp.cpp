#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a and b: " << (a && b) << std::endl;
  std::cout << "a or b: " << (a || b) << std::endl;
  std::cout << "not a: " << !a << std::endl;
}

int main() {
  bool a = true, b = false;
  logic(a, b);
}