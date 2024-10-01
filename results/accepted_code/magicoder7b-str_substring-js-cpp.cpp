#include <iostream>
#include <string>
using namespace std;

void showSubstr(const string &str, int n1 = 0, int n2 = -1) {
  cout << "'" + str.substr(n1, n2) + "'";
}

int main() {
  string str = "abcdefgh";

  int n1 = 2;
  int m = 3;

  //  * starting from n characters in and of m length;
  showSubstr(str, n1); // => "cde"

  //  * starting from n characters in, up to the end of the string;
  showSubstr(str, n1, m); // => "cde" (actually it would be "defgh" not "cde")

  //  * whole string minus last character;
  showSubstr(str.substr(0, str.length() - 1)); // => "abcdefg"

  //  * starting from a known character within the string and of m length;
  int idx_b = str.find('b');
  if (idx_b != string::npos) {
    showSubstr(str, idx_b); // => "bcd"
  }

  //  * starting from a known substring within the string and of m length.
  int idx_bc = str.find("bc");
  if (idx_bc != string::npos) {
    showSubstr(str, idx_bc); // => "bcd"
  }

  return 0;
}