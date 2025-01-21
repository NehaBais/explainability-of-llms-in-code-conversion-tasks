#include <bitset>
#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a AND b: " << (a & b) << std::endl;
  std::cout << "a OR b: " << (a | b) << std::endl;
  std::cout << "a XOR b: " << (a ^ b) << std::endl;

  std::bitset<32> bitA(a);
  std::bitset<32> bitB(b);

  // NOT on first integer
  std::bitset<32> rightShifted = (std::bitset<64>(leftShifted).to_ulong()) >> 1;
  std::bitset<32> rightArithShifted(rightShifted.to_ulong());

  std::cout << "right shifted: " << rightShifted << std::endl;
  std::cout << "right arith shifted: " << rightArithShifted << std::endl;
}

int main() {
  bitwise(10, 2);
  return 0;
}