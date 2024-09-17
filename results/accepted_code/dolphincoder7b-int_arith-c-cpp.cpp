#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
  int a, b;
  cout << "Enter two integers:";
  string input;
  getline(cin, input);
  istringstream iss(input);
  if (!(iss >> a && iss >> b)) {
    cerr << "Error: invalid input" << endl;
    return 1;
  }
  if (b == 0) {
    cerr << "Error: division by zero" << endl;
    return 2;
  }
  cout << "a+b = " << a + b << "\n";
  cout << "a-b = " << a - b << "\n";
  cout << "a*b = " << a * b << "\n";
  // C++ can perform integer division automatically, no need to specify "/" in
  // output.
  cout << "a/b = " << a / b << "\n"; /* truncates towards 0 */
  cout << "a%b = " << a % b << "\n"; /* same sign as first operand */
  return 0;
}