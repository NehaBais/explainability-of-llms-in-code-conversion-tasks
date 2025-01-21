#include
using namespace std;
int main() {
  string A = "Hello";
  string B = "Hello";
  if (A == B)
    cout << "'" << A << "' and '" << B << "' are lexically equal." << endl;
  else
    cout << "'" << A << "' and '" << B << "' are not lexically equal." << endl;
  cout << endl;

  if (A.empty()) {
    if (A == B)
      cout << "'" << A << "' and '" << B
           << "' are case-insensitive lexically equal." << endl;
    else
      cout << "'" << A << "' and '" << B
           << "' are not case-insensitive lexically equal." << endl;
  } else {
    if (A.compare(B) == 0)
      cout << "'" << A << "' and '" << B
           << "' are case-insensitive lexically equal." << endl;
    else if (A.compare(B) < 0)
      cout << "'" << A << "' is lexically before '" << B << "'." << endl;
    else
      cout << "'" << A << "' is lexically after '" << B << "'." << endl;
  }

  return 0;
}