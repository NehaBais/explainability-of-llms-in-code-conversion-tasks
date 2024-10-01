#include
#include
using namespace std;
int main() {
  string c = "cat";
  string d = "dog";
  if (c == d) {
    cout << c << " is bytewise identical to " << d << endl;
  } else {
    cout << c << " is bytewise different from " << d << endl;
  }
  if (c > d) {
    cout << c << " is lexically bytewise greater than " << d << endl;
  } else if (c < d) {
    cout << c << " is lexically bytewise less than " << d << endl;
  } else {
    cout << c << " is lexically bytewise equal to " << d << endl;
  }
  if (strings::lexicographical_compare(c.begin(), c.end(), d.begin(),
                                       d.end()) == 0) {
    cout << c << " is lexically bytewise greater than or equal to " << d
         << endl;
  } else if (strings::lexicographical_compare(d.begin(), d.end(), c.begin(),
                                              c.end()) == 0) {
    cout << c << " is lexically bytewise less than or equal to " << d << endl;
  } else if (c < d) {
    cout << c << " is lexically bytewise less than " << d << endl;
  } else if (c > d) {
    cout << c << " is lexically bytewise greater than " << d << endl;
  } else {
    cout << c << " is lexically bytewise equal to " << d << endl;
  }
  return 0;
}