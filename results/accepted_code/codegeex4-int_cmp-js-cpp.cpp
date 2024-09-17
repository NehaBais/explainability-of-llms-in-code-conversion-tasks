#include <iostream>
using namespace std;

void compare(int a, int b) {
  if (a == b)
    cout << a << " equals " << b << endl;
  if (a < b)
    cout << a << " is less than " << b << endl;
  if (a > b)
    cout << a << " is greater than " << b << endl;
}

int main() {
  int num1, num2;

  cout << "Enter the first integer: ";
  cin >> num1;
  cout << "Enter the second integer: ";
  cin >> num2;

  compare(num1, num2);

  return 0;
}