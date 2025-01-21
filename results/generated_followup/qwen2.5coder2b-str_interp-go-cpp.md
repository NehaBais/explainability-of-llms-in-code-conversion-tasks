The error message indicates that the `std::format` function is not recognized by the compiler because it was introduced with C++17 and later. To fix this issue, you need to ensure that your C++ compiler supports C++17 or higher.

Here's a single line explanation:
To resolve the error in Golang, you would use `fmt.Sprintf`. To do the same in C++, you would use `std::format` from C++17 onwards. 

Here's the corrected code in a single code block:

```cpp
#include <iostream>
#include <format>

int main() {
  std::string str = "Mary had a {} lamb";
  std::string txt = "big";

  std::cout << std::format(str, txt)
            << std::endl; // Outputs: Mary had a big lamb
  return 0;
}
```

This code snippet correctly uses `std::format` in C++17 or higher to perform the string interpolation as required.
