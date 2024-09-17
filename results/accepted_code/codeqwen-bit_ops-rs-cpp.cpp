#include <bitset>
#include <iostream>

int main() {
  unsigned char A = 105;
  unsigned char b = 91;
  std::cout << "a      = " << std::bitset<8>(A) << std::endl;
  std::cout << "b      = " << std::bitset<8>(b) << std::endl;
  std::cout << "A | b  = " << std::bitset<8>(A | b) << std::endl;
  std::cout << "A & b  = " << std::bitset<8>(A & b) << std::endl;
  std::cout << "A ^ b  = " << std::bitset<8>(A ^ b) << std::endl;
  std::cout << "!A     = " << std::bitset<8>((unsigned char)~A)
            << std::endl; // C++ version of Rust's ! operator
  std::cout << "A << 3 = " << std::bitset<8>(A << 3) << std::endl;
  std::cout << "A >> 3 = " << std::bitset<8>(A >> 3) << std::endl;

  return 0;
}