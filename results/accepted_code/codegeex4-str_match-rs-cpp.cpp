#include <iostream>
#include <string>

void printMatch(const std::string &str, const std::string &substr,
                bool isFound) {
  if (isFound)
    std::cout << "Found match at pos " << str.find(substr) << std::endl;
  else
    std::cout << "Did not find any matches" << std::endl;
}

int main() {
  std::string s1 = "abcd";
  std::string s2 = "abab";
  std::string s3 = "ab";

  // Determining if the first string starts with second string
  if (s1.find(s3) == 0)
    std::cout << "s1 starts with s3" << std::endl;
  else
    std::cout << "s1 does not start with s3" << std::endl;

  // Determining if the first string contains the second string at any location
  printMatch(s1, s2, s1.find(s2) != std::string::npos);

  // Determining if the first string ends with the second string
  size_t pos = s2.rfind(s3);
  if (pos != std::string::npos && pos + s3.length() == s2.length())
    std::cout << "s2 ends with s3" << std::endl;
  else
    std::cout << "s2 does not end with s3" << std::endl;

  return 0;
}