#include <iostream>
using namespace std;

int main() {

  int a = 105;
  int b = 91;

  cout << "a      = " << bitset<8>(a) << endl;
  cout << "b      = " << bitset<8>(b) << endl;
  cout << "a | b  = " << bitset<8>(a | b) << endl;
  cout << "a & b  = " << bitset<8>(a & b) << endl;
  cout << "a ^ b  = " << bitset<8>(a ^ b) << endl;
  cout << "!a     = " << bitset<8>(~a) << endl; // Note the use of ~ operator
  cout << "a << 3 = " << bitset<8>(a << 3) << endl;
  cout << "a >> 3 = " << bitset<8>(a >> 3) << endl;

  return 0;
}