#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Enter first integer: ";
  cin >> a;

  cout << "Enter second integer: ";
  cin >> b;

  if (a < b) {
    cout << a << " is less than " << b << endl;
  } else if (a == b) {
    cout << a << " equals " << b << endl;
  } else if (a > b) {
    cout << a << " is greater than " << b << endl;
  }

  return 0;
}