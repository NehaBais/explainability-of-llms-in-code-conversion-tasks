#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  int sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition
                   // is discouraged in print statements due to confusion with
                   // string concatenation)
  int difference = a - b; // The result of subtracting 'b' from 'a'
  int product = a * b;    // The result of multiplying 'a' and 'b'
  int quotient = a / b;   // The result of dividing 'a' by 'b' (Note: 'quotient'
                          // does not contain the fractional result)
  int remainder = a % b;  // The remainder of dividing 'a' by 'b'

  cout << "Sum = " << sum << endl;
  cout << "Difference = " << difference << endl;
  cout << "Product = " << product << endl;
  cout << "Quotient (discards fractional result) = " << quotient
       << endl; // truncates towards 0
  cout << "Remainder (same sign as first operand) = " << remainder
       << endl; // same sign as first operand
}