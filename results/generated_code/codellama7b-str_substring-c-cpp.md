 Here is the C++ version of the code:
```
#include <iostream>
#include <string>

std::string substring(const std::string& s, size_t n, ptrdiff_t m) {
  // Check for null s
  if (s.empty()) {
    return "";
  }

  // Negative m to mean 'up to the mth char from right'
  if (m < 0) {
    m = s.size() + m - n + 1;
  }

  // n < 0 or m < 0 is invalid
  if (n < 0 || m < 0) {
    return "";
  }

  // Make sure string does not end before n and advance the "s" pointer to beginning of substring
  for (size_t i = 0; i < n && !s.empty(); ++i) {
    s.pop_front();
  }

  std::string result;
  for (size_t i = 0; i < m && !s.empty(); ++i) {
    result += s.front();
    s.pop_front();
  }

  return result;
}

std::string str_wholeless1(const std::string& s) {
  return substring(s, 0, s.size() - 1);
}

std::string str_fromch(const std::string& s, char ch, ptrdiff_t m) {
  size_t index = s.find_first_of(ch);
  if (index == std::string::npos) {
    return "";
  }
  return substring(s, index - n + 1, m);
}

std::string str_fromstr(const std::string& s, const std::string& in, ptrdiff_t m) {
  size_t index = s.find(in);
  if (index == std::string::npos) {
    return "";
  }
  return substring(s, index - n + 1, m);
}

int main() {
  const std::string s = "hello world shortest program";

  // Test the substring function with different arguments
  std::cout << "substring(s, 12, 5): " << substring(s, 12, 5) << std::endl;
  std::cout << "substring(s, 6, -1): " << substring(s, 6, -1) << std::endl;
  std::cout << "str_wholeless1(s): " << str_wholeless1(s) << std::endl;
  std::cout << "str_fromch(s, 'w', 5): " << str_fromch(s, 'w', 5) << std::endl;
  std::cout << "str_fromstr(s, \"ro\", 3): " << str_fromstr(s, "ro", 3) << std::endl;

  return 0;
}
```
Note that the `substring` function is now defined using `std::string` instead of `const char*`. The `strchr` and `strstr` functions have been replaced with their C++ counterparts, which are safer to use with `std::string`. The `size_t` type has been used for the `n` and `m` parameters to ensure that they can hold the size of a string.
