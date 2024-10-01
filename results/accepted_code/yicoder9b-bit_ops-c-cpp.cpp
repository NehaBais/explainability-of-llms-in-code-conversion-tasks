#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a and b: " << (a & b) << endl;
  cout << "a or b: " << (a | b) << endl;
  cout << "a xor b: " << (a ^ b) << endl;
  cout << "not a: " << (~a) << endl;

  // left shift and right arithmetic shift operations.
  cout << "a << n: " << (a << b) << endl;
  cout << "a >> n: " << (a >> b) << endl;

  unsigned int c =
      a; // converting to unsigned integer for logical right shift operation.
  // Right logic shift is done using unsigned integers in C++.
  cout << "c >> b: " << (c >> b) << endl;

  return;
}