#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a and b: " << (a && b) << "\n";
  std::cout << "a or b: " << (a || b) << "\n";
  std::cout << "not a: " << !a << "\n";
}

int main() {
  logic(true, false); // call the function with boolean values
  return 0;
}