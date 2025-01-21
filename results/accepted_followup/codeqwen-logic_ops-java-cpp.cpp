#include <iostream>

void logic(bool A, bool B) {
  std::cout << "A AND B: " << (A && B) << std::endl;
  std::cout << "A OR B: " << (A || B) << std::endl;
  std::cout << "NOT A: " << (!A) << std::endl;
}

int main() {
  bool A = true, B = false;
  logic((bool)A, B); // corrected the syntax here.
  return 0;
}