#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  cout << a << " + " << b << " = " << (a + b) << endl;
  cout << a << " - " << b << " = " << (a - b) << endl;
  cout << a << " * " << b << " = " << (a * b) << endl;

  // Division rounds towards zero, same as in Go
  cout << a << " / " << b << " = " << (int)(a / b) << endl;

  // Remainder has the sign of the first operand, like in Go
  cout << a << " % " << b << " = " << (a % b) << endl;

  // No exponentiation operator
  return 0;
}