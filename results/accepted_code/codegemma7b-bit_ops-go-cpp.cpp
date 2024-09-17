#include <bitset>
#include <iostream>

using namespace std;

void bitwise(int16_t a, int16_t b) {
  cout << "a:   " << bitset<16>(a) << endl;
  cout << "b:   " << bitset<16>(b) << endl;

  // Bitwise logical operations
  cout << "and: " << bitset<16>(a & b) << endl;
  cout << "or:  " << bitset<16>(a | b) << endl;
  cout << "xor: " << bitset<16>(a ^ b) << endl;
  cout << "not: " << bitset<16>(~a) << endl;

  if (b < 0) {
    cout << "Right operand is negative, but all shifts require an unsigned "
            "right operand (shift distance)."
         << endl;
    return;
  }

  // Logical shifts (unsigned left operand)
  cout << "shl: " << bitset<16>(static_cast<uint16_t>(a) << b) << endl;
  cout << "shr: " << bitset<16>(static_cast<uint16_t>(a) >> b) << endl;

  // Arithmetic shifts (signed left operand)
  cout << "las: " << bitset<16>(a << b) << endl;
  cout << "ras: " << bitset<16>(a >> b) << endl;

  // Rotations
  cout << "rol: "
       << bitset<16>(static_cast<uint16_t>(a) << b |
                     static_cast<int16_t>(static_cast<uint16_t>(a) >> (16 - b)))
       << endl;
  cout << "ror: "
       << bitset<16>(static_cast<int16_t>(static_cast<uint16_t>(a) >> b) |
                     a << (16 - b))
       << endl;
}

int main() {
  int16_t a = -460, b = 6;
  bitwise(a, b);
  return 0;
}