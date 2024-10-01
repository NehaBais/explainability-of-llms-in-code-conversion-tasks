#include <iostream>
#include <string>
using namespace std;

bool startsWith(const string &str, const string &prefix) {
  return str.substr(0, prefix.size()) == prefix;
}

bool contains(const string &str, const string &target) {
  if (str.find(target) != string::npos) {
    // Optional requirement 1: Print the location of match
    cout << "Location: " << str.find(target) << endl;
    return true;
  } else
    return false;
}

bool endsWith(const string &str, const string &suffix) {
  if (suffix.size() > str.size())
    return false;
  return 0 == str.compare(str.size() - suffix.size(), suffix.size(), suffix);
}

int main() {
  string str1 = "abcd";
  string str2 = "ab";

  cout << "Starts with: " << startsWith(str1, str2)
       << endl; // True if the first string starts with second string.
  cout << "Contains: " << contains(str1, str2)
       << endl; // True if the first string contains the second string at any
                // location.
  cout << "Ends with: " << endsWith(str1, str2)
       << endl; // True if the first string ends with the second string.

  return 0;
}