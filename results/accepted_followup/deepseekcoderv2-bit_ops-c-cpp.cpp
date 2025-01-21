#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a and b: " << (a & b) << endl;
  cout << "a or b: " << (a | b) << endl;
  cout << "a xor b: " << (a ^ b) << endl;
  cout << "not a: " << (~a) << endl;
  cout << "a << n: " << (a << b) << endl; // left shift
  cout << "a >> n: " << (a >> b)
       << endl; // arithmetic right shift on most platforms

  // For logical right shift, we need to cast the integer to unsigned int
  unsigned int c = static_cast<unsigned int>(a);
  cout << "c >> n: " << (c >> b) << endl; // logical right shift

  // Left rotate and right rotate are not directly supported in C++
  // You can implement these using bitwise operations if needed.
}

int main() {
  int a = 10; // Example values for a and b
  int b = 2;
  bitwise(a, b);
  return 0;
}