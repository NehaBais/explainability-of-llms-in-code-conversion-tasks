#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a AND b: " << (a & b) << std::endl;
  std::cout << "a OR b: " << (a | b) << std::endl;
  std::cout << "a XOR b: " << (a ^ b) << std::endl;
  std::cout << "NOT a: " << ~a << std::endl;
  std::cout << "a << b: " << (a << b) << std::endl; // left shift
  std::cout << "a >> b: " << (a >> b) << std::endl; // arithmetic right shift
  std::cout << "unsigned a >>> b: " << static_cast<unsigned>(a) >>
      b << std::endl;
}

int main() {
  bitwise(10, 3);
  return 0;
}