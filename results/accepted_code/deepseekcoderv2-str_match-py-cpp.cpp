#include <iostream>
#include <string>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "ab";

  // 1. Determining if the first string starts with the second string
  bool starts_with = str1.substr(0, str2.length()) == str2;
  std::cout << (starts_with ? "True" : "False") << std::endl; // True

  // 2. Determining if the first string contains the second string at any
  // location
  size_t pos = str1.find(str2);
  bool contains = pos != std::string::npos;
  std::cout << (contains ? "True" : "False") << std::endl; // True

  if (contains) {
    std::cout << "Location of match: " << pos
              << std::endl; // Location of match: 0
  }

  // Handling multiple occurrences for part 2
  str1 = "abab";
  str2 = "ab";
  size_t loc = -1;
  int count = 0;
  while ((loc = str1.find(str2, loc + 1)) != std::string::npos) {
    ++count;
    std::cout << "Occurrence found at index: " << loc
              << std::endl; // Occurrence found at index: 0, 2
  }
  std::cout << "Total occurrences: " << count
            << std::endl; // Total occurrences: 2

  // 3. Determining if the first string ends with the second string
  bool ends_with =
      str1.substr(str1.length() - str2.length(), str2.length()) == str2;
  std::cout << (ends_with ? "True" : "False") << std::endl; // False

  return 0;
}