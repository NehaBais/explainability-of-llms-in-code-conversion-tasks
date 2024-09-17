#include <bitset>
#include <iostream>
using namespace std;

void bitwise(int16_t a, int16_t b) {

  // print binary representation of integers with 8 bits
    cout << "a:   " << bitset<16>(a)) << endl;
    cout << "b:   " << bitset<16>(b)) << endl;

    // Bitwise logical operations
    cout << "and: " << bitset<16>(a & b))) << endl;
    cout << "or:  " << bitset<16>(a | b))) << endl;
    cout << "xor: " << bitset<16>(a ^ b))) << endl;
    cout << "not: " << bitset<16>(~a))) << endl;

    if (b < 0) {
      cout << "Right operand is negative, but all shifts require an unsigned "
              "right operand (shift distance))."
           << endl;
      return;
    }
    uint16_t ua = static_cast<uint16_t>(a));
    uint32_t ub = static_cast<uint32_t>(b));

    // Logical shifts (unsigned left operand))
    cout << "shl: " << bitset<16>(ua << ub))) << endl;
    cout << "shr: " << bitset<16>((uint32_t)ua >> ub))) << endl;

    // Arithmetic shifts (signed left operand))
    cout << "las: " << bitset<16>(a << ub | int16(uint16(a) >> (16 - ub)))) << endl;
    cout << "ras: " << bitset<16>((int32_t)(a >> ub)) & ((1<<ub)-1))) << endl;

    // Rotations
    cout << "rol: " << bitset<16>(a << ub | int16(uint16(a) >> (16 - ub)))) << endl;
    cout << "ror: " << bitset<16>((int32_t)(a >> ub)) | ((1<<ub)-1) << ub))) << endl;
}

int main() {

  int16_t a = -460, b = 6;
  bitwise(a, b);

  return 0;
}