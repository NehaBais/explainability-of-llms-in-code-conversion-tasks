#include <iostream>
using namespace std;

void bitwiseOperations(int a, int b) {
  // Bitwise logical operations
  cout << "AND: " << (a & b) << endl;
  cout << "OR: " << (a | b) << endl;
  cout << "XOR: " << (a ^ b) << endl;
  cout << "NOT: " << (~a) << endl;

  if (b < 0) {
    cerr << "Right operand is negative, but all shifts require an unsigned "
            "right operand (shift distance)."
         << endl;
    return;
  }

  // Logical shifts (unsigned left operand)
  cout << "SHL: " << (a << b) << endl;
  cout << "SHR: " << (a >> b) << endl;

  // Arithmetic shifts (signed left operand)
  cout << "LAS: " << (a << b) << endl;
  cout << "RAS: " << (a >> b) << endl;

  // Rotations
  int rotationDistance =
      b % 16; // Ensure the shift distance is within range [0, 15]
  cout << "ROL: " << ((a << rotationDistance) | (a >> (16 - rotationDistance)))
       << endl;
  cout << "ROR: " << ((a >> rotationDistance) | (a << (16 - rotationDistance)))
       << endl;
}

int main() {
  int a = -460, b = 6;
  bitwiseOperations(a, b);
  return 0;
}