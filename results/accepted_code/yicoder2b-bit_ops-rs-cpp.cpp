#include <iostream>
using namespace std;

int main() {
  unsigned char a = 105;
  unsigned char b = 91;
  cout << "a      = " << (a) << endl;
  cout << "b      = " << (b) << endl;
  cout << "a | b  = " << ((a | b)) << endl;
  cout << "a & b  = " << ((a & b)) << endl;
  cout << "a ^ b  = " << ((a ^ b)) << endl;
  cout << "!a     = " << ~(a) << endl;
  cout << "a << 3 = " << (a << 3) << endl;
  cout << "a >> 3 = " << (a >> 3) << endl;
  return 0;
}