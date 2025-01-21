#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  // Perform the bitwise operations with appropriate types for signed or
  // unsigned integers Example: int a = 10; int b = -5; Performing arithmetic
  // shifts on negative numbers can lead to unexpected results

  // Bitwise AND (&)
  cout << "a and b: " << (a & b) << endl;

  // Bitwise OR (|)
  cout << "a or b: " << (a | b) << endl;

  // Bitwise XOR (^)
  cout << "a xor b: " << (a ^ b) << endl;

  // Bitwise NOT (~)
  cout << "not a: " << (~a) << endl;

  // Left shift (<<)
  cout << "a  left shift n: " << (a << b) << endl;

  // Right arithmetic shift on most platforms, logical right shift
  unsigned int c = a;
  cout << "c  right shift n: " << (c >> b) << endl;

  // There are no rotation operators in C++, so we can use left and right shifts
  // to simulate them
}

int main(void) {
  // your original code here
  return 0;
}