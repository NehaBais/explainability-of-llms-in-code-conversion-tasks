#include
#include
using namespace std;
int main() {
  string a("abc");
  string b("Bac");

  // only same types can be compared
  // string and string or const char* and const char*
  // exception: strict equality and inequality also work on const char* and
  // string
  if (a == b) {
    cout << "The strings are equal" << endl;
  }
  if (a != b) {
    cout << "The strings are not equal" << endl;
  }
  if (a > b) {
    cout << "The first string is lexically after the second" << endl;
  }
  if (a < b) {
    cout << "The first string is lexically before the second" << endl;
  }
  if (a >= b) {
    cout << "The first string is not lexically before the second" << endl;
  }
  if (a <= b) {
    cout << "The first string is not lexically after the second" << endl;
  }

  // case-insensitives:
  // equality
  // this avoids new allocations
  if (iequals(a.begin(), a.end(), b.begin(), b.end())) {
    cout << "Both strings are equal when ignoring case" << endl;
  }

  return 0;
}