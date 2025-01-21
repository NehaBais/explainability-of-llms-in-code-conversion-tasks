#include <iostream>
#include <string>

using namespace std;

void compare(string &A, string &B) {
  if (A == B) {
    cout << "'" << A << "' and '" << B << "' are lexically equal." << endl;
  } else {
    cout << "'" << A << "' and '" << B << "' are not lexically equal." << endl;
  }
  cout << endl;

  if (A.compare(B) == 0) {
    cout << "'" << A << "' and '" << B
         << "' are case-insensitive lexically equal." << endl;
  } else {
    cout << "'" << A << "' and '" << B
         << "' are not case-insensitive lexically equal." << endl;
  }
  cout << endl;

  if (A.compare(B) < 0) {
    cout << "'" << A << "' is lexically before '" << B << "'.";
  } else if (A.compare(B) > 0) {
    cout << "'" << A << "' is lexically after '" << B << "'.";
  }
  cout << endl;

  if (A.compare(B) >= 0) {
    cout << "'" << A << "' is not lexically before '" << B << "'.";
  } else if (A.compare(B) <= 0) {
    cout << "'" << A << "' is not lexically after '" << B << "'.";
  }
  cout << endl;

  cout << "The lexical relationship is: " << A.compare(B) << endl;
  cout << "The case-insensitive lexical relationship is: "
       << A.compare(B, 0, A.length(), B.data(), 0, B.length()) << endl;
}

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");

  return 0;
}