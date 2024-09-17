#include <cstdint>
#include <iostream>

void bitwise(uint16_t a, uint16_t b) {
  std::cout << "a:   " << std::bitset<16>(a) << "\n";
  std::cout << "b:   " << std::bitset<16>(b) << "\n";

  // Bitwise logical operations
  std::cout << "and: " << std::bitset<16>(a & b) << "\n";
  std::cout << "or:  " << std::bitset<16>(a | b) << "\n";
  std::cout << "xor: " << std::bitset<16>(a ^ b) << "\n";
  std::cout << "not: " << std::bitset<16>(~a) << "\n";

  // Check if second operand is negative and error if so
  if (b < 0) {
    std::cerr << "Right operand is negative, but all shifts require an "
                 "unsigned right operand (shift distance).\n";
    return;
  }

  // Unsigned left shift and right shift
  std::cout << "shl: " << std::bitset<16>(a << b) << "\n";
  std::cout << "shr: " << std::bitset<16>(a >> b) << "\n";

  // Signed left shift and right arithmetic shift
  std::cout << "las: " << std::bitset<16>(a << b) << "\n";
  std::cout << "ras: " << std::bitset<16>(a >> b) << "\n";

  // Rotations
  std::cout << "rol: " << std::bitset<16>((a << b) | (int16_t(a) >> (16 - b)))
            << "\n";
  std::cout << "ror: " << std::bitset<16>((int16_t(a) >> b) | (a << (16 - b)))
            << "\n";
}

int main() {
  uint16_t a = -460; // converted to unsigned int
  uint16_t b = 6;    // converted to unsigned int
  bitwise(a, b);
}