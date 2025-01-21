#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a and b: " << (a & b) << std::endl;
  std::cout << "a or b: " << (a | b) << std::endl;
  std::cout << "a xor b: " << (a ^ b) << std::endl;
  std::cout << "not a: " << (~a) << std::endl;
  std::cout << "a << n: " << (a << b) << std::endl;
  unsigned int c = a;
  std::cout << "c >> b: " << (c >> b) << std::endl;
}

int main() {
  int a, b;
  std::cout << "Enter two integers a and b: ";
  std::cin >> a >> b;

  bitwise(a, b);

  return 0;
}