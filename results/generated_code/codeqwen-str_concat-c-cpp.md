The given code is already in C++. Here's how it will look:

```cpp
#include <iostream>
#include <string>

std::string scat(const std::string& s1, const std::string& s2) {
  return s1 + s2;
}

int main() {
  std::string s = "hello";
  std::cout << "Original string: " << s << "\n";

  /* or */
  std::string s2 = s + " literal";
  std::cout << "Concatenated string: " << s2 << "\n";

  s2 = scat(s, " literal");
  std::cout << "Function concatenation result: " << s2 << "\n";

  return 0;
}
```
