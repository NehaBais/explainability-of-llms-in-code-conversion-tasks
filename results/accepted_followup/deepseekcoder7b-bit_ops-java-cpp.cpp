#include <bitset>
#include <iostream>
using namespace std;

void bitwise(int a, int b) {
  cout << "a AND b: " << (a & b) << endl;
  cout << "a OR b: " << (a | b) << endl;
  cout << "a XOR b: " << (a ^ b) << endl;

  // Use of a bitwise NOT on integer in C++ is done with ~, but remember it only
  // acts on the least significant byte. If we want to act on entire ints then
  // we need more than one step operation or create our own function.
  cout << "NOT a: " << ~a << "\t(only least significant byte)\n";

  cout << "a << b: " << (a << b)
       << endl; // left shift, equivalent to a * pow(2, b) in Java.
  cout << "a >> b: " << (a >> b)
       << endl; // right shift, also known as arithmetic right shift.

  int ar = (a >> b); // for example if a=15(binary 1111) and b=2 then output
                     // will be 3(10) not 15(1111).
  cout << "a >> b: " << ar << "\t(manually mask off leading bits)\n";

  cout << "a rol b: ";
  for (int i = 0; i < b; ++i) {
    a = (a << 1);
  }
  cout << a << endl;

  cout << "a ror b: ";
  for (int i = 0; i < b; ++i) {
    a = (a >> 1);
  }
  cout << a << endl;
}

int main() { // Main function definition
  int a, b;
  cin >> a >> b;
  bitwise(a, b);
  return <｜begin▁of▁sentence｜> _s;
}