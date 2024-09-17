#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "Enter first integer: ";
  cin >> a;
  cout << "Enter second integer: ";
  cin >> b;

  // Displaying the results
  cout << "sum:               " << a + b << endl;
  cout << "difference:        " << a - b << endl;
  cout << "product:           " << a * b << endl;
  cout << "integer quotient:  " << a / b << endl; // truncates towards zero
  cout << "remainder:         " << a % b << endl; // same sign as second operand
}