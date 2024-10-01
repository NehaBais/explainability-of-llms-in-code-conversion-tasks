#include <iostream>
#include <string>

using namespace std;

int main() {
  string A = "Hello";
  string B = "Hello";
  cout << "'A' and 'B' are lexically equal." << endl;

  if (A.compare(B) == 0) {
    cout << "'A' and 'B' are case-insensitive lexically equal." << endl;
  } else {
    cout << "'A' and 'B' are not case-insensitive lexically equal." << endl;
  }

  if (A.compare(B) < 0) {
    cout << "'A' is lexically before 'B'." << endl;
  } else if (A.compare(B) > 0) {
    cout << "'A' is lexically after 'B'." << endl;
  } else {
    cout << "'A' is not lexically before or after 'B'." << endl;
  }

  return 0;
}