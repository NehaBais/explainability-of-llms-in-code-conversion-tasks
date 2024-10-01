#include <iostream>
#include <string>

using namespace std;

int main() {
  wstring str = L"abcdefgh";

  int n = 2;
  int m = 3;

  // * starting from n characters in and of m length
  wcout << str.substr(n, m) << endl; // => "cde"

  // * starting from n characters in, up to the end of the string
  wcout << str.substr(n) << endl; // => "cdefgh"

  // * whole string minus last character
  wcout << str.substr(0, str.length() - 1) << endl; // => "abcdefg"

  // * starting from a known character within the string and of m length
  int index = str.find(L'b');
  if (index != wstring::npos) {
    wcout << str.substr(index, m) << endl; // => "bcd"
  }

  // * starting from a known substring within the string and of m length.
  index = str.find(L"bc");
  if (index != wstring::npos) {
    wcout << str.substr(index, m) << endl; // => "bcd"
  }

  return 0;
}