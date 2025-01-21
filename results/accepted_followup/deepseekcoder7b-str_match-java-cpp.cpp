#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "ab";

  // Determining if the first string starts with second string
  bool startsWithResult = str1.find(str2) == 0 ? true : false;
  cout << "startsWith: " << (startsWithResult ? "true" : "false") << endl;

  str1 = "abcd";
  str2 = "zn";
  // Determining if the first string ends with second string
  bool endsWithResult =
      str1.rfind(str2) == (str1.length() - str2.length()) ? true : false;
  cout << "endsWith: " << (endsWithResult ? "true" : "false") << endl;

  str1 = "abab";
  str2 = "bb";
  // Determining if the first string contains the second string at any location
  bool containsResult = str1.find(str2) != std::string::npos ? true : false;
  cout << "contains: " << (containsResult ? "true" : "false") << endl;

  // Handle multiple occurrences of a string for part 2.
  str1 = "abab";
  str2 = "ab";
  size_t loc = 0;
  while ((loc = str1.find(str2, loc)) != std::string::npos) {
    cout << "Found at: " << loc << endl;
    ++loc;
  }

  return 0;
}