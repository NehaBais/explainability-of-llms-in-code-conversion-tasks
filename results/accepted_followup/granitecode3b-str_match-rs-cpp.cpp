#include
#include
int main() {
  std::string s1 = "abcd";
  std::string s2 = "abab";
  std::string s3 = "ab";

  // Determining if the first string starts with second string
  assert(s1.find(s3) == 0);
  // Determining if the first string contains the second string at any location
  size_t pos = s1.find(s3);
  while (pos != std::string::npos) {
    std::cout << "Found match at position " << pos << std::endl;
    pos = s1.find(s3, pos + 1);
  }
  // Print the location of the match
  print_match(s1.find(s3)); // Found match at pos 0
  print_match(s1.find(s2)); // Did not find any matches
  // Determining if the first string ends with the second string
  assert(s2.find(s3) == s2.size() - s3.size());

  return 0;
}