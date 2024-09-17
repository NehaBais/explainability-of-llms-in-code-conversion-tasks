#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a & b: " << (a & b) << std::endl;
  std::cout << "a | b: " << (a | b) << std::endl;
  std::cout << "a ^ b: " << (a ^ b) << std::endl;
  std::cout << "~a: " << (~a) << std::endl;
  std::cout << "a << b: " << (a << b) << std::endl;   // left shift
  std::cout << "a >> b: " << (a >> b) << std::endl;   // arithmetic right shift
  std::cout << "a >>> b: " << (a >>> b) << std::endl; // logical right shift
}