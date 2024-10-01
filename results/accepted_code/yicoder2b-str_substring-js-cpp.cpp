#include <iostream>
#include <string>
using namespace std;
int main() {
  string str = "abcdefgh";

  //  *  starting from n characters in and of m length
  int n = 2, m = 3;
  cout << str.substr(n, m) << endl; // => "cde"

  //  * starting from n characters in, up to the end of the string
  cout << str.substr(n) << endl; // => "cdefgh"

  //  * whole string minus last character
  str = str.substr(0, str.length() - 1);
  cout << str << endl; // => "abcde"

  //  * starting from a known character within the string and of m length
  int pos = str.find('b');
  if (pos != string::npos)
    cout << str.substr(pos, m) << endl; // => "bcd"

  //  * starting from a known substring within the string and of m length
  int pos2 = str.find("bc");
  if (pos2 != string::npos)
    cout << str.substr(pos2, m) << endl; // => "bcd"
  return 0;
}