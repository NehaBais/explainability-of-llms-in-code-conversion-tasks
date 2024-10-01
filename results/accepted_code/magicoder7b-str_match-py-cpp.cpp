#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "abcd";
  string str2 = "ab";

  // Determining if the first string starts with second string
  cout << (str1.substr(0, str2.size()) == str2);

  // Determining if the first string contains the second string at any location
  size_t found = str1.find(str2);
  while (found != string::npos) {
    cout << "Loc: " << found << "\n";
    found = str1.find(str2, found + 1);
  }

  // Determining if the first string ends with the second string
  cout << (str1.substr(str1.size() - str2.size()) == str2);

  return 0;
}