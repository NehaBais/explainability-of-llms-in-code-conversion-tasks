```cpp
#include <string>
#include <iostream>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "ab";
  std::string str3 = "zn";
  std::string str4 = "abab";

  // 1. Determining if the first string starts with second string
  if (str1.compare(0, str2.length(), str2) == 0) {
    std::cout << "str1 starts with str2" << std::endl;
  } else {
    std::cout << "str1 does not start with str2" << std::endl;
  }

  // 2. Determining if the first string contains the second string at any location
  if (str1.find(str2) != std::string::npos) {
    std::cout << "str1 contains str2" << std::endl;
    // Print the location of the match
    std::cout << "Location of the match: " << str1.find(str2) << std::endl;

    // Handle multiple occurrences of a string
    int count = 0;
    int pos = str1.find(str2);
    while (pos != std::string::npos) {
      count++;
      pos = str1.find(str2, pos + str2.length());
    }
    std::cout << "Number of occurrences: " << count << std::endl;
  } else {
    std::cout << "str1 does not contain str2" << std::endl;
  }

  // 3. Determining if the first string ends with the second string
  if (str1.compare(str1.length() - str2.length(), str2.length(), str2) == 0) {
    std::cout << "str1 ends with str2" << std::endl;
  } else {
    std::cout << "str1 does not end with str2" << std::endl;
  }

  return 0;
}
```
