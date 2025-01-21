#include <iostream>
#include <string>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "ab";
  std::string str3 = "zn";
  std::string str4 = "bb";
  std::string str5 = "ab";
  std::string str6 = "ab";

  // 1. Determining if the first string starts with the second string
  bool startsWithResult = str1.substr(0, str2.length()) == str2;
  std::cout << (startsWithResult ? "true" : "false")
            << std::endl; // Output: true

  // 2. Determining if the first string contains the second string at any
  // location
  size_t pos = str1.find(str4);
  bool containsResult = pos != std::string::npos;
  std::cout << (containsResult ? "true" : "false")
            << std::endl; // Output: false

  pos = str1.find(str5);
  containsResult = pos != std::string::npos;
  std::cout << (containsResult ? "true" : "false") << std::endl; // Output: true
  if (containsResult) {
    std::cout << "Location: " << pos << std::endl; // Output: Location: 0
  }

  // Handling multiple occurrences for part 2
  std::string str7 = "abab";
  std::string str8 = "ab";
  size_t loc = -1;
  while ((loc = str7.find(str8, loc + 1)) != std::string::npos) {
    std::cout << "Location: " << loc
              << std::endl; // Output: Location: 0, Location: 2
  }

  // 3. Determining if the first string ends with the second string
  bool endsWithResult =
      str1.substr(str1.length() - str3.length(), str3.length()) == str3;
  std::cout << (endsWithResult ? "true" : "false")
            << std::endl; // Output: false

  return 0;
}