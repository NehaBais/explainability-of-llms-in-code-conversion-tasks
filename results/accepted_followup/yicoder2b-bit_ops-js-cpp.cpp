#include <iostream>
using namespace std;

int main() {
  // Assign values to variables
  unsigned char a = 5, b = 0xFF;

  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << ~a << endl;
  cout << "a << b: " << (a << 0x1f) << endl; // left shift by 5 bits
  cout << "a >> b: " << (a >> b) << endl;    // arithmetic right shift by 8 bits
  cout << "a >>> b: " << (a >> b) << endl;   // logical right shift by 3 bits

  return 0;
}