#include
#include
#include
using namespace std;

int main() {
  string str = "abcdefgh";
  int n = 2;
  int m = 3;

  // * starting from n characters in and of m length;
  cout << str.substr(n, m) << endl; // prints "cde"

  // * starting from n characters in, up to the end of the string;
  cout << str.substr(n) << endl;    // prints "cdefgh"
  cout << str.substring(n) << endl; // prints "cdefgh"

  // * whole string minus last character;
  cout << str.substring(0, str.length() - 1) << endl; // prints "abcdefg"

  // * starting from a known character within the string and of m length;
  int index = str.find("b");
  if (index != string::npos) {
    cout << str.substr(index, m) << endl; // prints "bcd"
  }

  // * starting from a known substring within the string and of m length.
  index = str.find("bc");
  if (index != string::npos) {
    cout << str.substr(index, m) << endl; // prints "bcd"
  }

  return 0;
}