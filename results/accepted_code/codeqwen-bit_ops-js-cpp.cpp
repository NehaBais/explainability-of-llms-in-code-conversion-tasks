#include <iostream>

void bitwise(int A, int B) {
  std::cout << "A AND B: " << (A & B) << std::endl;
  std::cout << "A OR B: " << (A | B) << std::endl;
  std::cout << "A XOR B: " << (A ^ B) << std::endl;
  std::cout << "NOT A: " << ~A << std::endl;
  std::cout << "A << B: " << (A << B) << std::endl;   // left shift
  std::cout << "A >> B: " << (A >> B) << std::endl;   // arithmetic right shift
  std::cout << "A >>> B: " << (A >>> B) << std::endl; // logical right shift
}

int main() {
  int A = 5;
  int B = 3;
  bitwise(A, B);
  return 0;
}