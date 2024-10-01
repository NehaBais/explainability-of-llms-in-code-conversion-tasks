#include <iostream>
using namespace std;

int main() {
  int a, b;

  // Get two integers from user input
  cout << "Enter first integer: ";
  cin >> a;
  cout << "Enter second integer: ";
  cin >> b;

  // Calculate and print the results
  cout << "a + b = " << (a + b) << endl;
  cout << "a - b = " << (a - b) << endl;
  cout << "a * b = " << (a * b) << endl;
  cout << "a / b = " << (float(a) / b)
       << endl;         /* Use float to ensure correct rounding */
  int quotient = a / b; /* truncates towards zero by default in C++, but you can
                           specify your own policy if needed */
  cout << "a %% b = "
       << (quotient < 0 ? -1 : 1) *
              ((a % b) * ((a > 0) ^ (b > 0)) + (a ^ b) * (a >= 0) * (b >= 0))
       << endl; /* Uses XOR to determine sign of remainder if a and b have
                   different signs */

  return 0;
}