#include <algorithm>
#include <iostream>
#include <string>

void print_match(int possible_match) {
  if (possible_match != std::string::npos)
    std::cout << "Found match at pos " << possible_match << "\n";
  else
    std::cout << "Did not find any matches\n";
}

int main() {
  std::string s1 = "abcd";
  std::string s2 = "abab";
  std::string s3 = "ab";

  // Determining if the first string starts with second string
  if (s1.substr(0, s3.size()) == s3)
    std::cout << "Found match at pos 0\n";
  else
    std::cout << "Did not find any matches\n";

  // Determining if the first string contains the second string at any location
  if (s1.find(s3) != std::string::npos)
    print_match(s1.find(s3)); // Found match at pos 0
  else
    std::cout << "Did not find any matches\n";

  // Determining if the first string ends with the second string
  if (s2.size() >= s3.size()) {
    int end_pos = s2.size() - s3.size();
    if (s2.substr(end_pos) == s3)
      std::cout << "Found match at pos " << end_pos << "\n";
    else
      std::cout << "Did not find any matches\n";
  } else {
    std::cout << "Did not find any matches\n";
  }

  return 0;
}