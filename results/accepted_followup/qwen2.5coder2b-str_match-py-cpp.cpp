#include <iostream>
#include <string>

bool startsWith(const string &str, const string &prefix) {
  return str.find(prefix) == 0;
}

bool endsWith(const string &str, const string &suffix) {
  return str.size() >= suffix.size() &&
         str.substr(str.size() - suffix.size()) == suffix;
}

bool contains(const string &str, const string &subStr) {
  return str.find(subStr) != string::npos;
}

int find(const string &str, const string &substr, int pos = 0) {
  return str.find(substr, pos);
}

int main() {
  // Test cases
  cout << boolalpha; // Print booleans as true/false

  cout << "startsWith('abcd', 'ab'): " << startsWith("abcd", "ab") << endl;
  cout << "endsWith('abcd', 'zn'): " << endsWith("abcd", "zn") << endl;
  cout << "contains('bb', 'abab'): " << contains("bb", "abab") << endl;

  int loc = find("abab", "bb");
  if (loc != string::npos) {
    cout << "find('abab', 'bb') returns: " << loc << endl;
  } else {
    cout << "find('abab', 'bb'): Not found." << endl;
  }

  loc = find("abab", "ab", loc + 1);
  if (loc != string::npos) {
    cout << "find('abab', 'ab', 2): Returns: " << loc << endl;
  } else {
    cout << "find('abab', 'ab', 2): Not found." << endl;
  }

  return 0;
}