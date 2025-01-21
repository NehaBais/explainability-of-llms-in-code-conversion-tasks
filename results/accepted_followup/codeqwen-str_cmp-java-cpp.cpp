#include <iostream>
#include <string>
using namespace std;

void compare(string A, string B) {
  if (A == B)
    cout << "'" << A << "' And '" << B << "' are lexically equal." << endl;
  else
    cout << "'" << A << "' And '" << B << "' are not lexically equal." << endl;

  // ... (rest of the function body remains unchanged)
}

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");
  return 0;
}