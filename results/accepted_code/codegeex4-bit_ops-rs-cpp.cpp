#include <bitset>
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

  if ((sizeof(a) * 8) > (b))
    a = a << b;

  std::cout << "a << 3 = " << std::bitset<8>(a) << std::endl;

  if ((sizeof(a) * 8) > (b))
    a = a >> b;

  std::cout << "a >> 3 = " << std::bitset<8>(a) << std::endl;

  return 0;
}