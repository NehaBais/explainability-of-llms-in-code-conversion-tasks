#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a and b: " << a & b << endl;
  cout << "a or b: " << a | b << endl;
  cout << "a xor b: " << a ^ b << endl;
  // Perform bitwise shift on the first integer with a shift/rotate amount of
  // the second integer.
  unsigned int c = a;
  cout << "c >> b: " << (c >> b) << endl;
  return 0;
}