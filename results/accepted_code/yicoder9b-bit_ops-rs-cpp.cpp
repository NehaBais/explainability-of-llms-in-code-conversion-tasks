#include <bitset>
#include <iostream>
using namespace std;

int main() {
  unsigned char a = 105;
  unsigned char b = 91;

  cout << "a      = " << bitset<8>(a) << endl;
  cout << "b      = " << bitset<8>(b) << endl;
  cout << "a | b  = " << bitset<8>(a | b) << endl;
  cout << "a & b  = " << bitset<8>(a & b) << endl;
  cout << "a ^ b  = " << bitset<8>(a ^ b) << endl;
  // Bitwise NOT operator (~) in C++ returns the complement of a number.
  cout << "!a     = " << bitset<8>(~a) << endl;

  // Left shift and right shift are arithmetic operations where the amount to be
  // shifted is given by 'b' variable
  cout << "a << b = " << bitset<8>(a << b) << endl;
  cout << "a >> b = " << bitset<8>(a >> b) << endl;

  // C++ does not directly support bitwise rotate operations,
  // so you have to create separate functions for left and right rotations.

  return 0;
}