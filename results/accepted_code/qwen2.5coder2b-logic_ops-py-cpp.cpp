#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a and b: " << (a && b) << std::endl;
  std::cout << "a or b: " << (a || b) << std::endl;
  std::cout << "not a: " << (!a) << std::endl;
}

int main() {
  // Test the function with some values
  logic(true, true);
  logic(true, false);
  logic(false, true);
  logic(false, false);

  return 0;
}