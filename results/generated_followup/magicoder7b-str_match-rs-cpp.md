 The error occurred because the C++ standard library does not have an 'optional' type like Rust, so 'std::optional<size_t>' is not valid in C++. In addition to this, there are also other differences between Rust and C++. For example, unlike Rust, C++ does not support automatic return types for functions.

The fix for the errors can be achieved by using 'nullptr' instead of 'std::nullopt'. Also, you should manually check if a string was found or not. Here is the corrected code:

```cpp
#include <algorithm>
#include <iostream>
#include <string>

void print_match(const std::optional<size_t> &possible_match) {
  if (possible_match.has_value()) {
    std::cout << "Found match at pos " << *possible_match << std::endl;
  } else {
    std::cout << "Did not find any matches" << std::endl;
  }
}

int main() {
  std::string s1 = "abcd";
  std::string s2 = "abab";
  std::string s3 = "ab";

  // Determining if the first string starts with second string
  assert(s1.find(s3) == 0);
  
  auto position = s1.find(s2);
  print_match(position != std::string::npos ? std::make_optional<size_t>(position) : nullptr); // Found match at pos 0
  
  assert(!s2.empty() && (s3 == s2.substr(0, s3.length())));
  
  return 0;
}
```

The C++ version of the code does not contain any Rust specific syntax or structures. It uses standard C++ features such as the 'optional' concept from the 'variant' module (reimplemented in the C++17 version). The C++ version also checks if the string is empty before checking for the sub-string.
