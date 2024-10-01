#include <iostream>
#include <string>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "ab";

  // Determining if the first string starts with second string
  if (str1.substr(0, str2.length()) == str2) {
    std::cout << "The first string starts with the second string.\n";
  } else {
    std::cout << "The first string does not start with the second string.\n";
  }

  // Determining if the first string ends with the second string
  if (str1.substr(str1.length() - str2.length()) == str2) {
    std::cout << "The first string ends with the second string.\n";
  } else {
    std::cout << "The first string does not end with the second string.\n";
  }

  // Determining if the first string contains the second string at any location
  int loc = str1.find(str2);
  if (loc != std::string::npos) {
    std::cout << "The first string contains the second string.\n";
    std::cout << "First occurrence is at position: " << loc << "\n";
  } else {
    std::cout << "The first string does not contain the second string.\n";
  }

  // Handling multiple occurrences of a string for part 2.
  for (loc = str1.find(str2); loc != std::string::npos;
       loc = str1.find(str2, loc + 1)) {
    std::cout << "Another occurrence is at position: " << loc << "\n";
  }

  return 0;
}