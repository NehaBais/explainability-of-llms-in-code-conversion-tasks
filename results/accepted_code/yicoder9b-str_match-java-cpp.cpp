#include <iostream>
#include <string>
using namespace std;

int main() {
  // Strings to be checked
  string str1 = "abcd", str2 = "ab";

  // Check if first string starts with second string
  if (str1.substr(0, str2.size()) == str2) {
    cout << "First string starts with the second string\n";
  } else {
    cout << "First string does not start with the second string\n";
  }

  // Check if first string ends with second string
  if (str1.substr(str1.size() - str2.size()) == str2) {
    cout << "First string ends with the second string\n";
  } else {
    cout << "First string does not end with the second string\n";
  }

  // Check if first string contains second string and print locations
  size_t found = str1.find(str2);
  if (found != std::string::npos) {
    cout << "Second string is present in the first string at location: "
         << found << "\n";
    // Handle multiple occurrences of a string for part 2
    while (found != std::string::npos) {
      found =
          str1.find(str2, found + 1); // continue search from the next character
      if (found != std::string::npos) {
        cout << "Second string is present in the first string at location: "
             << found << "\n";
      }
    }
  } else {
    cout << "Second string is not present in the first string.\n";
  }
  return 0;
}