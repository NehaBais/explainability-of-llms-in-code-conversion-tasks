#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "abcdefgh";

  // Starting from n characters in and of m length.
  {
    int n = 2, m = 3;
    cout << str.substr(n, m) << endl; // => "cde"
  }

  // Starting from n characters in, up to the end of the string.
  {
    int n = 2;
    cout << str.substr(n) << endl; // => "cdefgh"
  }

  // Whole string minus last character.
  {
    cout << str.substr(0, str.length() - 1) << endl; // => "abcdefg"
  }

  // Starting from a known character within the string and of m length.
  {
    int n = str.find('b'); // index of 'b' in str
    int m = 3;
    cout << str.substr(n, m) << endl; // => "bcd"
  }

  // Starting from a known substring within the string and of m length.
  {
    int n = str.find("bc"); // index of 'bc' in str
    int m = 3;
    cout << str.substr(n, m) << endl; // => "bcd"
  }

  return 0;
}