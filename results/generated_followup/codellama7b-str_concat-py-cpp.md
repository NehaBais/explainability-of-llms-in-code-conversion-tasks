
The error occurs because `std::string` is not able to handle string literals as arguments for its join method. Instead, we need to use the `operator+=` to concatenate strings in C++.

Here's the corrected code:
```cpp
#include <iostream>
#include <string>

int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;

  std::string s3 = "";
  for (std::string str : {s1, "world", "mom"}) {
    s3 += str + ", ";
  }
  std::cout << s3 << std::endl;

  return 0;
}
```
