#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// Case insensitive comparison
bool iequals(const string &a, const string &b) {
  return equal(b.begin(), b.end(), a.begin(),
               [](char a, char b) -> bool { return tolower(a) == tolower(b); });
}

int main() {
  string str1 = "abcd";
  string str2 = "abcd";
  string str3 = "ABCD";
  cout << (str1 == str2) << '\n';      // true
  cout << (str1 != str2) << '\n';      // false
  cout << (str1 < str2) << '\n';       // false
  cout << (str1 > str3) << '\n';       // true
  cout << iequals(str1, str3) << '\n'; // true, case insensitive comparison
  return 0;
}