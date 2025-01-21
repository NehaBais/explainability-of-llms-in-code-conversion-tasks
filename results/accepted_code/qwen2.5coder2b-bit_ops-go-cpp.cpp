#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a:   " << std::bitset<16>(a) << std::endl;
  std::cout << "b:   " << std::bitset<16>(b) << std::endl;

  // Bitwise logical operations
  std::cout << "and: " << std::bitset<16>(a & b) << std::endl;
  std::cout << "or:  " << std::bitset<16>(a | b) << std::endl;
  std::cout << "xor: " << std::bitset<16>(a ^ b) << std::endl;
  std::cout << "not: " << std::bitset<16>(~a) << std::endl;

  // Check if the right operand is negative
  if (b < 0) {
    std::cout << "Right operand is negative, but all shifts require an "
                 "unsigned right operand (shift distance)."
              << std::endl;
    return;
  }

  uint32_t ua = static_cast<uint32_t>(a);
  int32_t ub = static_cast<int32_t>(b);

  // Logical shifts (unsigned left operand)
  std::cout << "shl: " << std::bitset<16>((ua << ub) & 0xFFFF) << std::endl;
  std::cout << "shr: " << std::bitset<16>((ua >> ub) & 0xFFFF) << std::endl;

  // Arithmetic shifts (signed left operand)
  std::cout << "las: " << std::bitset<16>(((int32_t)a << ub) & 0xFFFF)
            << std::endl;
  std::cout << "ras: " << std::bitset<16>(((uint32_t)a >> ub) & 0xFFFF)
            << std::endl;

  // Rotations
  int16_t roland = static_cast<int16_t>((ua << ub) | ((int32_t)a >> (16 - ub)));
  int16_t rolar = static_cast<int16_t>(((uint32_t)a >> ub) | a << (16 - ub));
  std::cout << "rol: " << std::bitset<16>(roland) << std::endl;
  std::cout << "ror: " << std::bitset<16>(rolar) << std::endl;
}

int main() {
  int a = -460, b = 6;
  bitwise(a, b);
  return 0;
}