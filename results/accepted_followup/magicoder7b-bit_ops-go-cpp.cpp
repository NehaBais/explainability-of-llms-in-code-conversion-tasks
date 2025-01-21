#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a:   " << bitset<16>(static_cast<unsigned short>(a)) << endl;
  cout << "b:   " << bitset<16>(static_cast<unsigned short>(b)) << endl;

  // Bitwise logical operations
  unsigned short result = static_cast<unsigned short>(a) & b;
  cout << "and: " << bitset<16>(result) << endl;

  ...
}