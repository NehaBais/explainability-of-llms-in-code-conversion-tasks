#include <iostream>
#include <optional>
#include <string>

void print_match(std::optional<size_t> > possible_match) {
  if (possible_match.has_value()) {
    size_t match_pos = possible_match.value();
    std::cout << "Found match at pos " << match_pos << std::endl;
  } else {
    std::cout << "Did not find any matches" << std::endl;
  }
}

int main() {
  std::string s1 = "abcd";
  std::string s2 = "abab";
  std::string s3 = "ab";

  assert(s1.rfind(s3, 0) == 0));
  assert(s1.find(s2) != std::string::npos));
  print_match({s1.rfind(s3, 0), s1.find(s2)});
  return 0;
}