#include <bitset>
#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a AND b: " << (a & b) << std::endl;
  std::cout << "a OR b: " << (a | b) << std::endl;
  std::cout << "a XOR b: " << (a ^ b) << std::endl;

  std::bitset<32> bitA(a);
  std::bitset<32> bitB(b);

  // NOT on first integer
  std::bitset<32> resultNOT = ~bitA;

  std::cout << "NOT a: " << (int)resultNOT.to_ulong() << std::endl;

  // Left shift
  std::bitset<64> leftShifted(resultNOT.to_ulong());
  std::cout << "a << b: " << leftShifted << std::endl;

  // Right shift
  std::bitset<32> rightShifted(leftShifted >> 1);
  std::cout << "a >> b (arithmetic): " << rightShifted << std::endl;

  // Right arithmetic shift
  std::bitset<32> rightArithShifted(leftShifted >> 1);
  std::cout << "a >> b (logical): " << rightArithShifted << std::endl;
}

int main() {
  int a = 5, b = 3;
  bitwise(a, b);
  return 0;
}