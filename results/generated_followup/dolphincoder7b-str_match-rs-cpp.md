The error occurs because `std::optional` is not part of the standard library, but it's available as part of the C++ STL. The missing header `#include <optional>` needs to be included at the beginning of the file before using any functions or classes from the `std` namespace.

In the modified code, we include `<optional>` at the beginning of the file. Then, in the `print_match` function, instead of using the `Some` and `None` patterns provided by Rust's `std::option`, we use boolean checks to determine if a match is found or not. If a match is found, we print its position; otherwise, we print a message indicating that no matches were found. The `find` function in C++ returns the index of the first occurrence of the search string within the input string, or `std::string::npos` (which is defined as `-1`) if no match is found.
```cpp
#include  <iostream>
#include  <string>
#include  <vector>
#include  <optional>

void print_match(std::optional<size_t> possible_match) {
  if (possible_match)
    std::cout << "Found match at pos " << *possible_match << '\n';
  else
    std::cout << "Did not find any matches\n";
}

int main() {
  std::string s1  =  "abcd";
  std::string s2  =  "abab";
  std::string s3  =  "ab";

  // Determining if the first string starts with second string
  assert(s1.starts_with(s3));

  // Determining if the first string contains the second string at any location
  auto start_pos  = s1.find(s3);
  assert(start_pos != std::string::npos);

  print_match(start_pos);    // Found match at pos 0
  print_match(s1.find(s2));  // Did not find any matches

  // Determining if the first string ends with the second string
  assert(s2.ends_with(s3));

  return 0;
}
```
