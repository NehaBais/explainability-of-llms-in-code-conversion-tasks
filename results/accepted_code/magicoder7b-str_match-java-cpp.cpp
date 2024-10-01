#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "ab";

  // 1. Determining if the first string starts with second string
  cout << (str1.substr(0, str2.length()) == str2 ? "true" : "false") << endl;

  str1 = "abcd";
  str2 = "zn";

  // 2. Determining if the first string contains the second string at any
  // location
  cout << (str1.find(str2) != string::npos ? "true" : "false") << endl;

  int loc = -1;
  str1 = "abab";
  str2 = "ab";

  // Handling multiple occurrences of a string for part 2.
  while ((loc = str1.find(str2, loc + 1)) != std::string::npos) {
    cout << "Found at position: " << loc << endl;
  }

  // 3. Determining if the first string ends with the second string
  cout << (str1.substr(str1.length() - str2.length()) == str2 ? "true"
                                                              : "false")
       << endl;

  return 0;
}