#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << ~a << endl;
  cout << "a << b: " << (a << b) << endl; // left shift
  cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
  cout << "a >>> b: " << (static_cast<unsigned int>(a) >> b)
       << endl; // logical right shift, cast to unsigned
  cout << "a rol b: " << _rotl(a, b)
       << endl; // rotate left, defined in <bit> or <x86intrin.h>, use -I if
                // needed
  cout << "a ror b: " << _rotr(a, b)
       << endl; // rotate right, defined in <bit> or <x86intrin.h>, use -I if
                // needed
}