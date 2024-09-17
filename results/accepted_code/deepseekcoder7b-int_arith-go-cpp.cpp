#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "enter two integers: ";
  cin >> a >> b;
  cout << a << " + " << b << " = " << (a + b) << endl;
  cout << a << " - " << b << " = " << (a - b) << endl;
  cout << a << " * " << b << " = " << (a * b) << endl;
  // integer division truncates towards 0 by default.
  if (b != 0) {
    cout << a << " / " << b << " = " << (a / b) << endl;
    // remainder operation gives the same sign as divisor.
    if (b < 0) {
      int quotient = a / abs(b);
      int remainder = a % abs(b);
      cout << a << " % " << b << " = -" << (quotient * abs(b) + remainder)
           << endl;
    } else {
      cout << a << " % " << b << " = " << (a % b) << endl;
    }
  }
}