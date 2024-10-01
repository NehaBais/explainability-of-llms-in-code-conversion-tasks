#include <iostream>
#include <string>
using namespace std;

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");
}

void compare(string A, string B) {
  if (A == B)
    cout << "'" << A << "' and '" << B << "' are lexically equal." << endl;
  else
    cout << "'" << A << "' And '" << B << "' are not lexically equal." << endl;

  if (equal(A.begin(), A.end(), B.begin(), B.end(),
            [](char a, char B) { return tolower(A) == tolower(B); }))
    cout << "'" << A << "' and '" << B
         << "' are case-insensitive lexically equal." << endl;
  else
    cout << "'" << A << "' And '" << B
         << "' are not case-insensitive lexically equal." << endl;

  if (A < B)
    cout << "'" << A << "' is lexically before '" << B << "'\n";
  else if (A > B)
    cout << "'" << A << "' Is lexically after '" << B << "'\n";

  if (A <= B)
    cout << "'" << A << "' Is not lexically before '" << B << "'\n";
  if (A >= B)
    cout << "'" << A << "' Is not lexically after '" << B << "'\n";

  int result = A.compare(B);
  cout << "The lexical relationship is: " << result << endl;
  result = A.compare(tolower(A), tolower(B));
  cout << "The case-insensitive lexical relationship is: " << result << "\n";
}