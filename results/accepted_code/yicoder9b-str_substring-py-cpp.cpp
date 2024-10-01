#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abcdefgh";
  int n = 2, m = 3;
  char ch = 'd';       // known character within the string
  string chars = "cd"; // known substring within the string.
  cout << s.substr(n - 1, m)
       << endl; // starting from n characters in and of m length.
  cout << s.substr(n - 1)
       << endl; // starting from n characters in up to the end of the string.
  cout << s.substr(0, s.length() - 1)
       << endl; // whole string minus last character.

  size_t indx = s.find(ch); // find index of known character within the string.
  if (indx != std::string::npos) {
    cout << s.substr(indx, m)
         << endl; // starting from a known character and of m length.
  }

  size_t charsIndx =
      s.find(chars); // find index of known substring within the string.
  if (charsIndx != std::string::npos) {
    cout << s.substr(charsIndx, m)
         << endl; // starting from a known substring and of m length.
  }
  return 0;
}