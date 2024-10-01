#include <iostream>

void logic(bool A, bool B) {
  std::cout << "A and B: " << (A && B)
            << std::endl; // using '&&' operator for logical AND operation
  std::cout << "A or B: " << (A || B)
            << std::endl; // using '||' operator for logical OR operation
  std::cout << "not A: " << !A
            << std::endl; // using '!' operator for logical NOT operation on the
                          // first argument only.
}

int main() {
  bool A = true, B = false; // Set boolean values of A and B
  logic(A, B);              // Call function with these booleans as arguments
  return 0;
}