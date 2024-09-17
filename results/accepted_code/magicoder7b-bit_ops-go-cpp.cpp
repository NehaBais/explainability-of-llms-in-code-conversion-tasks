#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a:   " << bitset<16>(unsigned short(a)) << endl;
  cout << "b:   " << bitset<16>(unsigned short(b)) << endl;

  // Bitwise logical operations
  unsigned short result = a & b;
  cout << "and: " << bitset<16>(result) << endl;

  result = a | b;
  cout << "or:  " << bitset<16>(result) << endl;

  result = a ^ b;
  cout << "xor: " << bitset<16>(result) << endl;

  unsigned short negate_a = ~a & 0xFFFF; // Bitwise NOT on the first integer
  cout << "not: " << bitset<16>(negate_a) << endl;

  if (b < 0) {
    cout << "Right operand is negative, but all shifts require an unsigned "
            "right operand (shift distance)."
         << endl;
    return;
  }

  unsigned short ua = static_cast<unsigned short>(a);
  unsigned int ub = b;

  // Logical shifts (unsigned left operand)
  result = ua << ub;
  cout << "shl: " << bitset<16>(result) << endl;

  result = ua >> ub;
  cout << "shr: " << bitset<16>(result) << endl;

  // Arithmetic shifts (signed left operand)
  result = a << ub;
  cout << "las: " << bitset<16>(result) << endl;

  result = a >> ub;
  cout << "ras: " << bitset<16>(result) << endl;

  // Rotations
  unsigned short rotate_a_left = (a << ub) | (unsigned short)(a >> (16 - ub));
  cout << "rol: " << bitset<16>(rotate_a_left) << endl;

  unsigned short rotate_a_right =
      ((unsigned short)a << (16 - ub)) | ((unsigned int)a >> ub);
  cout << "ror: " << bitset<16>(rotate_a_right) << endl;
}

int main() {
  int a = -460, b = 6;
  bitwise(a, b);
  return 0;
}