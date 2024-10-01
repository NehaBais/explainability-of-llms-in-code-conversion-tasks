#include <iostream>
using namespace std;

int main() {
  // declare variables
  string s = "abcdefgh"; // string variable
  int n, m;              // integer variables
  char ch = 'd';         // character variable
  string substr = "cd";  // substring variable

  // find the index of a character within the string
  int indx1 = s.find(ch);

  // find the index of a substring within the string
  size_t pos = 0;
  while ((pos = s.find(substr, pos)) != std::string::npos) {
    cout << "Found substring at: " << pos << endl;
    pos += substr.length();
  }

  // starting from n=2 characters in and m=3 in length
  cout << s.substr(n - 1, m) << endl;

  // starting from n characters in, up to the end of the string
  cout << s.substr(n - 1) << endl;

  // whole string minus last character
  cout << s.substr(0, s.length() - 1) << endl;

  // starting from a known character char="d" within the string and of m length
  cout << s.substr(indx1, m) << endl;

  // starting from a known substring chars="cd" within the string and of m
  // length
  int indx2 = s.find(substr);
  cout << s.substr(indx2, substr.length()) << endl;

  return 0;
}