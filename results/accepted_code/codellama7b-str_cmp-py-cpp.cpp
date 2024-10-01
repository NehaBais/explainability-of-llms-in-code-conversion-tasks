#include <iostream>
#include <string>
using namespace std;

void compare(const string &a, const string &b) {
  cout << "'" << a << "' of type '" << a.get_type() << "' and '" << b
       << "' of type '" << b.get_type() << "'" << endl;
  if (a < b)
    cout << "'" << a << "' is strictly less than  '" << b << "'" << endl;
  if (a <= b)
    cout << "'" << a << "' is less than or equal to '" << b << "'" << endl;
  if (a > b)
    cout << "'" << a << "' is strictly greater than  '" << b << "'" << endl;
  if (a >= b)
    cout << "'" << a << "' is greater than or equal to '" << b << "'" << endl;
  if (a == b)
    cout << "'" << a << "' is equal to '" << b << "'" << endl;
  if (a != b)
    cout << "'" << a << "' is not equal to '" << b << "'" << endl;
  if (a.is(b))
    cout << "'" << a << "' has object identity with '" << b << "'" << endl;
  if (!a.is(b))
    cout << "'" << a << "' has negated object identity with '" << b << "'"
         << endl;
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  compare(24, 123);
  compare(5.0, 5);
  return 0;
}