#include <iostream>
#include <string>

void printMatch(std::optional<size_t> possibleMatch) {
  if (possibleMatch.has_value()) {
    std::cout << "Found match at pos " << possibleMatch.value() << std::endl;
  } else {
    std::cout << "Did not find any matches" << std::endl;
  }
}

int main() {
  std::string s1 = "abcd";
  std::string s2 = "abab";
  std::string s3 = "ab";

  // Determining if the first string starts with second string
  if (s1.find(s3) == 0) {
    std::cout << "String s1 starts with s3" << std::endl;
  } else {
    std::cout << "String s1 does not start with s3" << std::endl;
  }

  // Determining if the first string contains the second string at any location
  size_t pos = s1.find(s3);
  while (pos != std::string::npos) {
    printMatch(std::make_optional(pos));
    pos = s1.find(s3, pos + 1);
  }
  if (pos == std::string::npos) {
    printMatch({});
  }

  // Determining if the first string ends with the second string
  if (s2.compare(s2.length() - s3.length(), s3.length(), s3) == 0) {
    std::cout << "String s2 ends with s3" << std::endl;
  } else {
    std::cout << "String s2 does not end with s3" << std::endl;
  }

  return 0;
}