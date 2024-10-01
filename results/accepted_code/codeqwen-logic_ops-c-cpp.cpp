#include <iostream>

void print_logic(int A, int b) {
  std::cout << "A and b is " << (A && b) << std::endl;
  std::cout << "A or b is " << (A || b) << std::endl;
  std::cout << "not a is " << (!A) << std::endl;
}

int main() {
  print_logic(1, 2); // example usage
  return 0;
}