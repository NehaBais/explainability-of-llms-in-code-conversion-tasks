#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Get the 2 numbers from command line arguments
  int a, b;
  cin >> a >> b;

  // Calculate and print results of arithmetic operations
  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << fixed << setprecision(0) << "quotient of a / b = " << (double)(a / b)
       << endl; // truncates towards 0
  cout << "remainder of a / b = " << ((a % b) * (a < 0 != b < 0 ? -1 : 1))
       << endl; // same sign as first operand if they are different
}