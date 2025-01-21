#include <iostream>
using namespace std;

void compare(int a, int b) {
  if (a == b)
    cout << a << " equals " << b;
  else if (a < b)
    cout << a << " is less than " << b;
  else
    cout << a << " is greater than " << b;
}

int main() {
  int a, b;

  // Get two integers from the user
  cout << "Enter first integer: ";
  cin >> a;

  cout << "Enter second integer: ";
  cin >> b;

  compare(a, b);

  return 0;
}