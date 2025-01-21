#include <iostream>
using namespace std;

void compare(int a, int b) {
  if (a == b) {
    cout << a << " equals " << b << endl;
  }
  if (a < b) {
    cout << a << " is less than " << b << endl;
  }
  if (a > b) {
    cout << a << " is greater than " << b << endl;
  }
}

int main() {
  int a, b;
  cout << "Enter the first integer: ";
  cin >> a;
  cout << "Enter the second integer: ";
  cin >> b;

  compare(a, b);

  return 0;
}