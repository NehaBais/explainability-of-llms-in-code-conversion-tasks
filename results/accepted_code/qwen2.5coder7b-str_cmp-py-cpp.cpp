#include <iostream>
#include <string>
using namespace std;

void compare(string a, string b) {
  cout << "\"" << a << "\" is of type " << typeid(a).name() << " and \"" << b
       << "\" is of type " << typeid(b).name() << endl;
  if (a.compare(b) < 0)
    cout << "\"" << a << "\" is strictly less than  \"" << b << "\"" << endl;
  if (a.compare(b) <= 0)
    cout << "\"" << a << "\" is less than or equal to \"" << b << "\"" << endl;
  if (a.compare(b) > 0)
    cout << "\"" << a << "\" is strictly greater than  \"" << b << "\"" << endl;
  if (a.compare(b) >= 0)
    cout << "\"" << a << "\" is greater than or equal to \"" << b << "\""
         << endl;
  if (a == b)
    cout << "\"" << a << "\" is equal to \"" << b << "\"" << endl;
  if (a != b)
    cout << "\"" << a << "\" is not equal to \"" << b << "\"" << endl;
}

void compare(int a, int b) {
  cout << "\"" << a << "\" is of type " << typeid(a).name() << " and \"" << b
       << "\" is of type " << typeid(b).name() << endl;
  if (a < b)
    cout << "\"" << a << "\" is strictly less than  \"" << b << "\"" << endl;
  if (a <= b)
    cout << "\"" << a << "\" is less than or equal to \"" << b << "\"" << endl;
  if (a > b)
    cout << "\"" << a << "\" is strictly greater than  \"" << b << "\"" << endl;
  if (a >= b)
    cout << "\"" << a << "\" is greater than or equal to \"" << b << "\""
         << endl;
  if (a == b)
    cout << "\"" << a << "\" is equal to \"" << b << "\"" << endl;
  if (a != b)
    cout << "\"" << a << "\" is not equal to \"" << b << "\"" << endl;
}

void compare(float a, float b) {
  cout << "\"" << a << "\" is of type " << typeid(a).name() << " and \"" << b
       << "\" is of type " << typeid(b).name() << endl;
  if (a < b)
    cout << "\"" << a << "\" is strictly less than  \"" << b << "\"" << endl;
  if (a <= b)
    cout << "\"" << a << "\" is less than or equal to \"" << b << "\"" << endl;
  if (a > b)
    cout << "\"" << a << "\" is strictly greater than  \"" << b << "\"" << endl;
  if (a >= b)
    cout << "\"" << a << "\" is greater than or equal to \"" << b << "\""
         << endl;
  if (a == b)
    cout << "\"" << a << "\" is equal to \"" << b << "\"" << endl;
  if (a != b)
    cout << "\"" << a << "\" is not equal to \"" << b << "\"" << endl;
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  int x = 24, y = 123;
  compare(x, y);
  float m = 5.0, n = 5;
  compare(m, n);
}