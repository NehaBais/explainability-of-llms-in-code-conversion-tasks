#include <iostream>
using namespace std;
int main() {
  int a = 20, b = 3;
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << ~a << endl;
  cout << "a << b: " << (a << b) << endl;     // left shift
  cout << "a >> b: " << (a >> b) << endl;     // arithmetic right shift
  cout << "a >>> b: " << (a >> b) << endl;    // logical right shift
  cout << "a rol b: " << (a < < < b) << endl; // rotate left, C++11+
  cout << "a ror b: " << (a >>> b) << endl;   // rotate right, C++11+
  return 0;
}