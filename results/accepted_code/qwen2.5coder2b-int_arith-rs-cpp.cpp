#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  if (b == 0) { // Check for division by zero
    cerr << "Error: Division by zero." << endl;
    return 1;
  }

  cout << "sum:              " << a + b << endl;
  cout << "difference:       " << a - b << endl;
  cout << "product:          " << a * b << endl;

  // Integer quotient
  int quotient = a / b;
  if (quotient >= 0) {
    cout << "integer quotient: " << quotient << endl;
  } else {
    cout << "integer quotient: " << -quotient << " (rounded down)" << endl;
  }

  // Remainder
  int remainder = a % b;
  if ((a > 0 && b < 0) || (a < 0 && b > 0)) { // Sign of remainder is opposite
    cout << "remainder:        " << -remainder
         << " (same sign as first operand)" << endl;
  } else {
    cout << "remainder:        " << remainder << endl;
  }

  // Exponentiation (if the operator exists)
  // In C++, exponentiation does not have a built-in operator, so we'll use
  // std::pow
  double exponent = static_cast<double>(a) * static_cast<double>(b);
  cout << "exponent:         " << exponent << endl;

  return 0;
}