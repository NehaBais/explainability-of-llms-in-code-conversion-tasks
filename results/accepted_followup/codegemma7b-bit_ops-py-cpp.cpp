#include <bitset>
#include <iostream>

using namespace std;

int main() {
  const int width = 8;

  cout << "AND: " << bitset<width>(a & b & mask) << endl;
  cout << "OR: " << bitset<width>(a | b & mask) << endl;
  cout << "XOR: " << bitset<width>(a ^ b & mask) << endl;
  cout << "NOT: " << bitset<width>(~a & mask) << endl;
  cout << "RIGHT: " << bitset<width>(a >> 1 & mask) << endl;
  cout << "LEFT: " << bitset<width>(a << 1 & mask) << endl;

  return 0;
}