#include <bitset>
#include <iostream>
using namespace std;

void bitwise(int16_t a, int16_t b) {
  cout << "a:   " << bitset<16>(abs(a)) << endl;
  cout << "b:   " << bitset<16>(abs(b)) << endl;

  // Bitwise logical operations
  cout << "and: " << bitset<16>((uint16_t)(abs(a) & abs(b))) << endl;
  cout << "or:  " << bitset<16>((uint16_t)(abs(a) | abs(b))) << endl;
  cout << "xor: " << bitset<16>((uint16_t)(abs(a) ^ abs(b))) << endl;

  // Bitwise NOT operation
  if (a >= 0) {
    cout << "not:  " << ~(uint16_t)a << endl;
  } else {
    cout << "Not defined for negative numbers" << endl;
  }

  uint16_t ua = abs(a);
  uint32_t ub = abs((int32_t)b);

  // Logical shifts (unsigned left operand)
  if (ub < 16) {
    cout << "shl: " << bitset<16>(ua <<= ub) << endl;
  } else {
    cout << "Right shift count exceeds bitwidth, consider a number less than "
            "16 for b."
         << endl;
  }

  // Arithmetic shifts (signed left operand)
  if (b > 0 && ub < 16) {
    cout << "ashr: " << bitset<16>((int16_t)(ua >>= ub)) << endl;
  } else {
    cout << "Right shift count exceeds bitwidth, consider a number less than "
            "16 for b."
         << endl;
  }

  // Rotations (only for positive numbers)
  if (a >= 0) {
    cout << "rol: " << bitset<16>((uint16_t)((ua <<= ub) | (ua >> (16 - ub))))
         << endl;
    cout << "ror: " << bitset<16>((uint16_t)((ua >> ub) | (ua << (16 - ub))))
         << endl;
  } else {
    cout << "Rotations not defined for negative numbers." << endl;
  }
}
int main() {
  int16_t a = -460, b = 6;
  bitwise(a, b);
  return 0;
}