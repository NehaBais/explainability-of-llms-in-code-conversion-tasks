#include <iostream>
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

  // Determining if the first string starts with second string
    assert(s1.rfind(s3, 0) == 0));
    // Determining if the first string contains the second string at any
    // location
    assert(s1.find(s2) != std::string::npos));
    // Print the location of the match
    print_match({
    s1.rfind(s3, 0), s1.find(s2)}
}); // Found match at pos 0

    print_match({
  s1.rfind(s3, 0), s1.find(s2)}
    })); // Did not find any matches

    // Determining if the first string ends with the second string
    assert(s2.rfind(s3, 0)) == (s2.length() - s3.length()));
    }