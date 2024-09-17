#include <iostream>
using namespace std;
int main() {
  int a, b;

  // get two integers from the user
  cout << "Enter first integer: ";
  cin >> a;
  cout << "Enter second integer: ";
  cin >> b;

  if (a == b)
    cout << a << " equals " << b << endl;

  if (a < b)
    cout << a << " is less than " << b << endl;

  if (a > b)
    cout << a << " is greater than " << b << endl;

  return 0;
}