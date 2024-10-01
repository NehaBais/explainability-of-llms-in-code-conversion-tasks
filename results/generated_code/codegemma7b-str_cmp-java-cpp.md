```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");

  return 0;
}

void compare(string A, string B) {
  if (A == B) {
    cout << "'" << A << "' and '" << B << "' are lexically equal." << endl;
  } else {
    cout << "'" << A << "' and '" << B << "' are not lexically equal." << endl;
  }

  if (A.compare(B) == 0) {
    cout << "'" << A << "' is lexically equal to '" << B << "'." << endl;
  } else if (A.compare(B) < 0) {
    cout << "'" << A << "' is lexically before '" << B << "'." << endl;
  } else {
    cout << "'" << A << "' is lexically after '" << B << "'." << endl;
  }

  if (A.compare(B, 0, A.length(), true) == 0) {
    cout << "'" << A << "' is case-insensitive lexically equal to '" << B << "'." << endl;
  } else {
    cout << "'" << A << "' is not case-insensitive lexically equal to '" << B << "'." << endl;
  }

  cout << "The lexical relationship is: " << A.compare(B) << endl;
  cout << "The case-insensitive lexical relationship is: " << A.compare(B, 0, A.length(), true) << endl;
  cout << endl;
}
```
