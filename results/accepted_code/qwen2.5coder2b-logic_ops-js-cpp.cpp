#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}

int main() {
  // Test the function with some values
  logic(true, true);
  logic(false, false);
  logic(true, false);
  logic(false, true);

  return 0;
}