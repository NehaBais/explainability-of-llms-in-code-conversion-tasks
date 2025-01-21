#include <iostream>

void print_logic(bool a, bool b) {
  std::cout << "a and b is " << (a && b) << "\n";
  std::cout << "a or b is " << (a || b) << "\n";
  std::cout << "not a is " << (!a) << "\n";
}

int main() {
  bool x = true;
  bool y = false;

  print_logic(x, y);

  return 0;
}