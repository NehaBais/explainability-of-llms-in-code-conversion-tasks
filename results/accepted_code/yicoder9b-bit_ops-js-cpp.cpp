#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;
  cout << "NOT a: " << ~a << endl;
  cout << "a << b: " << (a << b) << endl; // left shift
  cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
}

int LRS(int n, int x) {
  // Convert to unsigned before shifting to prevent sign extension.
  unsigned un = (unsigned)n;
  un >>= x;
  return *((int *)&un);
}