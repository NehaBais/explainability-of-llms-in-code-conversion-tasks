#include <iostream>

void logic(bool A, bool B) {
  std::cout << "A AND b: " << (A && B) << std::endl;
  std::cout << "A OR b: " << (A || B) << std::endl;
  std::cout << "NOT a: " << (!A) << std::endl;
}

int main() {
  logic(true, true); // Replace with your boolean values.
  return 0;
}