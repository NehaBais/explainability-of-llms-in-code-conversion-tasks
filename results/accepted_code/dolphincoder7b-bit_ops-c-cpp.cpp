#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a and b: " << (a & b) << endl;
  cout << "a or b: " << (a | b) << endl;
  cout << "a xor b: " << (a ^ b) << endl;
  cout << "not a: " << (~a) << endl;
  cout << "a  left shift n: " << (a << b) << endl;
  // arithmetic right shift on most platforms, logical right shift
  unsigned int c = a;
  cout << "c  right shift n: " << (c >> b) << endl;
  /* There are no rotation operators in C++, so we can use left and right shifts
  to simulate them */
}