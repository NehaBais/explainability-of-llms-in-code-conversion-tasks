#include <iostream>

string substring(string str, int n, int m) { return str.substr(n, m); }
string substring(string str, int n) { return str.substr(n); }
string substring(string str) { return str.substr(0, str.length() - 1); }
string substring(string str, char c, int m) { return str.substr(0, m); }
string substring(string str, string sub, int m) { return str.substr(0, m); }

int main() {
  std::string s("Hello World");
  std::cout << substring(s, 2, 4) << std::endl; // Output: ello
  return 0;
}