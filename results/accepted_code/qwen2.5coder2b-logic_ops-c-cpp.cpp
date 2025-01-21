#include <iostream>

void print_logic(bool a, bool b) {
  std::cout << "a and b is: " << (a && b) << std::endl;
  std::cout << "a or b is: " << (a || b) << std::endl;
  std::cout << "not a is: " << (!a) << std::endl;
}

int main() {
  print_logic(true, true);
  print_logic(false, true);
  print_logic(true, false);
  print_logic(false, false);

  return 0;
}