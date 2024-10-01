#include <cstdint> // Including the type uint8_t etc. which are same as int, unsigned int etc. used by JS.
using namespace std; // Using standard namespace for ease of use.
void bitwise(uint8_t a, uint8_t b) {
  cout << "a AND b: " << (a & b) << endl; // Bitwise AND
  cout << "a OR b: " << (a | b) << endl;  // Bitwise OR
  cout << "a XOR b: " << (a ^ b) << endl; // Bitwise XOR
  cout << "NOT a: " << ~a
       << endl; // Bitwise NOT on integer 'a'. In C++, operator ~ is used to do
                // the bitwise NOT operation and ~0u gives the maximum value for
                // the type of variable 'b' i.e uint8_t in this case. This is
                // equivalent to JavaScript '~' operator that flips all bits.
  cout << "a << b: " << (a << b) << endl;             // Left shift
  cout << "a >> b: " << (a >> b) << endl;             // Arithmetic right shift
  cout << "a >>> b: " << (uint8_t(a)) >> (b) << endl; // Logical right shift
}