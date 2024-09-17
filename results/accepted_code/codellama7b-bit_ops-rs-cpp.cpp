#include <iostream>

int main() {
  unsigned char a = 105;
  unsigned char b = 91;
  std::cout << "a      = " << std::bitset<8>(a) << std::endl;
  std::cout << "b      = " << std::bitset<8>(b) << std::endl;
  std::cout << "a | b  = " << std::bitset<8>(a | b) << std::endl;
  std::cout << "a & b  = " << std::bitset<8>(a & b) << std::endl;
  std::cout << "a ^ b  = " << std::bitset<8>(a ^ b) << std::endl;
  std::cout << "!a     = " << std::bitset<8>(~a) << std::endl;
  std::cout << "a << 3 = " << std::bitset<8>(a << 3) << std::endl;
  std::cout << "a >> 3 = " << std::bitset<8>(a >> 3) << std::endl;
}