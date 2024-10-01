#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "abcd";

  // Exact equality
  if (str1 == str2) {
    cout << "str1 and str2 are equal" << endl;
  }

  // Inequality
  if (str1 != str2) {
    cout << "str1 and str2 are not equal" << endl;
  }

  // Lexicographical comparison
  if (str1 < str2) {
    cout << "str1 is lexicographically ordered before str2" << endl;
  } else if (str1 > str2) {
    cout << "str1 is lexicographically ordered after str2" << endl;
  } else {
    cout << "str1 and str2 are lexicographically equal" << endl;
  }

  // Case sensitive comparison
  if (str1.compare(str2) == 0) {
    cout << "str1 and str2 are case sensitive equal" << endl;
  }

  // Case insensitive comparison
  if (str1.compare(str2, 0, str1.size(), false) == 0) {
    cout << "str1 and str2 are case insensitive equal" << endl;
  }

  // Numeric string comparison
  string numStr1 = "123";
  string numStr2 = "456";
  if (numStr1.compare(numStr2) < 0) {
    cout << "numStr1 is numerically ordered before numStr2" << endl;
  }

  return 0;
}