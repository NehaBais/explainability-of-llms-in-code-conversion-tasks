#include <iostream>
using namespace std;

int main() {
  int a, b;

  // Get two integers from the user
  cout << "Enter the first integer: ";
  cin >> a;
  cout << "Enter the second integer: ";
  cin >> b;

  // Display their sum
  cout << "a + b = " << (a + b) << endl;

  // Display their difference
  cout << "a - b = " << (a - b) << endl;

  // Display their product
  cout << "a * b = " << (a * b) << endl;

  // Display their integer quotient and indicate rounding behavior
  cout << "a / b = " << (a / b) << " (truncates towards zero)" << endl;

  // Display their remainder and indicate sign behavior
  cout << "a % b = " << (a % b) << " (same sign as the first operand)" << endl;

  return 0;
}