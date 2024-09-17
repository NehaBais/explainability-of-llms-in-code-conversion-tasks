#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter value of a : ";
  cin >> a;
  cout << "Enter value of b: ";
  cin >> b;

  if (a < b) {
    cout << "a is less than b" << endl;
  } else if (a == b) {
    cout << "a is equal to b" << endl;
  } else if (a > b) {
    cout << "a is greater than b" << endl;
  }

  return 0;
}