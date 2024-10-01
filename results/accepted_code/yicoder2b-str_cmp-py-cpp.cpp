#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

void compare(const string &a, const string &b) {
  cout << "
          "<<a<<" is of type "<<typeid(a).name()<<" and
      "<<b<<" is of type "<<typeid(b).name()<<"
      ";
          if (a < b) cout
          << a << " is strictly less than  " << b << endl;
  if (a <= b)
    cout << a << " is less than or equal to " << b << endl;
  if (a > b)
    cout << a << " is strictly greater than  " << b << endl;
  if (a >= b)
    cout << a << " is greater than or equal to " << b << endl;
  if (a == b)
    cout << a << " is equal to " << b << endl;
  if (a != b)
    cout << a << " is not equal to " << b << endl;
  if (&a == &b)
    cout << a << " has object identity with " << b << endl;
  if (&a != &b)
    cout << a << " has negated object identity with " << b << endl;
}

void compare(const int &a, const int &b) {
  cout << "Comparing integers " << a << " and " << b << endl;
  if (a < b)
    cout << a << " is strictly less than  " << b << endl;
  if (a <= b)
    cout << a << " is less than or equal to " << b << endl;
  if (a > b)
    cout << a << " is strictly greater than  " << b << endl;
  if (a >= b)
    cout << a << " is greater than or equal to " << b << endl;
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare(24, 123);
  return 0;
}