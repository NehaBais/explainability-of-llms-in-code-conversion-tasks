#include <iostream>
#include <string>
#include <vector>

void print_match(std::optional<size_t> possible_match) {
  if (possible_match)
    std::cout << "Found match at pos " << *possible_match << '\n';
  else
    std::cout << "Did not find any matches\n";
}

int main() {
  std::string s1 = "abcd";
  std::string s2 = "abab";
  std::string s3 = "ab";

  // Determining if the first string starts with second string
  assert(s1.starts_with(s3));

  // Determining if the first string contains the second string at any location
  auto start_pos = s1.find(s3);
  assert(start_pos != std::string::npos);

  print_match(start_pos);   // Found match at pos 0
  print_match(s1.find(s2)); // Did not find any matches

  // Determining if the first string ends with the second string
  assert(s2.ends_with(s3));

  return 0;
}