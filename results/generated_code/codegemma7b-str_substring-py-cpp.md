```cpp
#include <iostream>
#include <string>

int main() {
  std::string s = "abcdefgh";
  int n = 2, m = 3;
  char char_ = 'd';
  std::string chars = "cd";

  // starting from n=2 characters in and m=3 in length;
  std::cout << s.substr(n - 1, m) << std::endl;

  // starting from n characters in, up to the end of the string;
  std::cout << s.substr(n - 1) << std::endl;

  // whole string minus last character;
  std::cout << s.substr(0, s.size() - 1) << std::endl;

  // starting from a known character char="d" within the string and of m length;
  size_t indx = s.find(char_);
  std::cout << s.substr(indx, m) << std::endl;

  // starting from a known substring chars="cd" within the string and of m length.
  indx = s.find(chars);
  std::cout << s.substr(indx, m) << std::endl;

  return 0;
}
```
